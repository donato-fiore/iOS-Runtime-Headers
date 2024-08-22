// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLXPCLIFECYCLEHANDLER_H
#define APODMLXPCLIFECYCLEHANDLER_H

@class NSString, NSDate, NSOperationQueue;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface APOdmlXpcLifecycleHandler : NSObject

@property (nonatomic) BOOL performDeferralCheck; // ivar: _performDeferralCheck
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) BOOL shouldDefer;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSOperationQueue *workQueue; // ivar: _workQueue
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpc_activity; // ivar: _xpc_activity


-(BOOL)continueTask;
-(BOOL)deferTask;
-(BOOL)finishTask;
-(BOOL)taskCanContinueForTime:(id)arg0 ;
-(BOOL)taskIsContinuing;
-(BOOL)taskIsDeferred;
-(id)initWithActivity:(id)arg0 ;
-(void)_backgroundDeferralCheck:(id)arg0 completion:(id)arg1 ;
-(void)endBackgroundDeferralCheck;
-(void)startBackgroundDeferralCheckForTime:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif