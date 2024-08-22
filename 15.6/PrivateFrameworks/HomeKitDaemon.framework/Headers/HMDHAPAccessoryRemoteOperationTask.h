// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPACCESSORYREMOTEOPERATIONTASK_H
#define HMDHAPACCESSORYREMOTEOPERATIONTASK_H

@class NSDictionary, NSString;


#import "HMDHAPAccessoryTask.h"
#import "HMDDevice.h"

@interface HMDHAPAccessoryRemoteOperationTask : HMDHAPAccessoryTask

@property (readonly) HMDDevice *delegateDevice; // ivar: _delegateDevice
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSDictionary *logEvents; // ivar: _logEvents
@property (readonly) NSString *remoteMessageName; // ivar: _remoteMessageName
@property (readonly, nonatomic) CGFloat remoteMessageTimeout; // ivar: _remoteMessageTimeout


-(BOOL)_appendServiceListWithRequest:(id)arg0 serviceList:(id)arg1 ;
-(BOOL)_buildMessageAccessoryListFromAccessoryRequestMap:(id)arg0 accessoryList:(id)arg1 ;
-(BOOL)_buildMessageAccessoryListFromRequests:(id)arg0 accessoryList:(id)arg1 ;
-(id)_remoteMessageFromAccessoryRequestMap:(id)arg0 ;
-(id)activityRequestEventName;
-(id)initWithContext:(id)arg0 remoteMessageName:(id)arg1 requests:(id)arg2 delegateDevice:(id)arg3 timeout:(CGFloat)arg4 completion:(id)arg5 ;
-(void)_receivedRemotelyChangedCharacteristicResponses:(id)arg0 message:(id)arg1 ;
-(void)execute;


@end


#endif