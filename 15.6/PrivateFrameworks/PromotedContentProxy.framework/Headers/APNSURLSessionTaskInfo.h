// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APNSURLSESSIONTASKINFO_H
#define APNSURLSESSIONTASKINFO_H

@class NSArray, NSURLSessionDataTask, NSThread;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface APNSURLSessionTaskInfo : NSObject

@property (weak) NSObject<NSURLSessionDataDelegate> *delegate; // ivar: _delegate
@property (retain) NSArray *modes; // ivar: _modes
@property (readonly) NSURLSessionDataTask *task; // ivar: _task
@property (retain) NSThread *thread; // ivar: _thread


-(id)initWithTask:(id)arg0 delegate:(id)arg1 modes:(id)arg2 ;
-(void)invalidate;
// -(void)perform:(id)arg0 waitUntilDone:(unk)arg1  ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)performBlockOnClientThread:(id)arg0 ;


@end


#endif