// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APXPCACTIVITY_H
#define APXPCACTIVITY_H

@class NSString;
@protocol OS_xpc_object, APXPCActivityDelegate;

#import <Foundation/Foundation.h>


@interface APXPCActivity : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (nonatomic) BOOL deferralCheckActive; // ivar: _deferralCheckActive
@property (retain, nonatomic) NSObject<APXPCActivityDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL staticActivity; // ivar: _staticActivity
@property (retain, nonatomic) NSString *taskID; // ivar: _taskID


+(id)_translateCriteria:(id)arg0 ;
-(BOOL)_continueActivity;
-(BOOL)deferActivity;
-(BOOL)finished;
-(BOOL)shouldDefer;
-(id)initWithDelegate:(id)arg0 ;
-(void)_backgroundDeferralCheck;
-(void)_endDeferralCheck;
-(void)_registerActivityWithCriteria:(id)arg0 ;
-(void)_startDeferralCheck;
-(void)cancel;
-(void)checkin;
-(void)schedule;
-(void)scheduleWithDelay:(NSInteger)arg0 ;


@end


#endif