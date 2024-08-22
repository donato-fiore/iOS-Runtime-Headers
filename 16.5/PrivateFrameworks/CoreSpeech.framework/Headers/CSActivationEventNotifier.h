// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSACTIVATIONEVENTNOTIFIER_H
#define CSACTIVATIONEVENTNOTIFIER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSActivationEventNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedNotifier;
-(id)_createXPCClientConnection;
-(id)init;
-(void)_notifyActivationEvent:(id)arg0 completion:(id)arg1 ;
-(void)notifyActivationEvent:(NSUInteger)arg0 deviceId:(id)arg1 activationInfo:(id)arg2 completion:(id)arg3 ;
-(void)notifyActivationEvent:(id)arg0 completion:(id)arg1 ;
-(void)notifyActivationEventSynchronously:(id)arg0 completion:(id)arg1 ;


@end


#endif