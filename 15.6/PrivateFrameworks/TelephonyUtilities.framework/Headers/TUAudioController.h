// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUAUDIOCONTROLLER_H
#define TUAUDIOCONTROLLER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface TUAudioController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock; // ivar: _modifyingStateLock


-(id)init;
-(void)_acquireLock;
-(void)_releaseLock;
// -(void)_requestUpdatedValueWithBlock:(id)arg0 object:(unk)arg1 isRequestingPointer:(*id)arg2 forceNewRequest:(*BOOL)arg3 scheduleTimePointer:(BOOL)arg4 notificationString:(*NSUInteger)arg5 notificationUserInfo:(id)arg6 queue:(id)arg7  ;
// -(void)_requestUpdatedValueWithBlock:(id)arg0 object:(unk)arg1 isRequestingPointer:(*id)arg2 forceNewRequest:(*BOOL)arg3 scheduleTimePointer:(BOOL)arg4 notificationString:(*NSUInteger)arg5 queue:(id)arg6  ;


@end


#endif