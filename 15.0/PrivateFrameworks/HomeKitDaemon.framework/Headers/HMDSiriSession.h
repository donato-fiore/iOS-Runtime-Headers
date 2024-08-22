// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSIRISESSION_H
#define HMDSIRISESSION_H

@class NSString, NSNumber;
@protocol HMDActiveSiriSessionInfoDelegate, HMFLogging, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "HMDActiveSiriSessionInfo.h"
#import "HMDLogEventDispatcher.h"
#import "HMDSiriRemoteInputServer.h"
#import "HMDSiriStreamStartEvent.h"

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging>



@property (retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo; // ivar: _activeSessionInfo
@property (retain, nonatomic) NSObject<OS_xpc_object> *boostMessage; // ivar: _boostMessage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isActivationPending; // ivar: _isActivationPending
@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // ivar: _logEventDispatcher
@property (weak, nonatomic) HMDSiriRemoteInputServer *server; // ivar: _server
@property (retain, nonatomic) HMDSiriStreamStartEvent *streamStartMetric; // ivar: _streamStartMetric
@property (readonly) Class superclass;


+(id)logCategory;
+(id)siriSessionForUI;
-(BOOL)_startStream;
-(BOOL)activateAfterHubInitiation;
-(BOOL)activateWithAccessory:(id)arg0 metadata:(id)arg1 ;
-(id)_createArgsDictionaryWithError:(id)arg0 ;
-(id)activeSessionToken;
-(id)initWithIdentifier:(id)arg0 deviceType:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 logEventDispatcher:(id)arg1 deviceType:(id)arg2 ;
-(void)activeSiriSession:(id)arg0 didCreateAudioFrame:(id)arg1 sequenceNumber:(id)arg2 gain:(id)arg3 ;
-(void)activeSiriSession:(id)arg0 didReceiveButtonUpWithDuration:(id)arg1 ;
-(void)activeSiriSession:(id)arg0 didReceiveFirstPassMetadata:(id)arg1 ;
-(void)activeSiriSessionDidStop:(id)arg0 ;
-(void)beginTrackingStreamStartMetricWithActivationType:(NSUInteger)arg0 ;
-(void)deactivate;
-(void)handleResetStream;
-(void)handleStartStream;
-(void)handleStopStream;
-(void)invalidate;
-(void)maybeSubmitStreamStartMetricWithError:(id)arg0 ;
-(void)publish;
-(void)sendMsg:(char *)arg0 args:(id)arg1 ;
-(void)setActiveBulkSendSession:(id)arg0 ;
-(void)stopStream;


@end


#endif