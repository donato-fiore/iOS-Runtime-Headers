// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCXPCCLIENT_H
#define _TVRCXPCCLIENT_H

@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol TVRCXPCRequestProtocol;

#import <Foundation/Foundation.h>


@interface _TVRCXPCClient : NSObject <TVRCXPCRequestProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *eventObserversByID; // ivar: _eventObserversByID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<TVRCXPCRequestProtocol> *remoteObject; // ivar: _remoteObject
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedInstance;
-(id)init;
-(void)_broadcastStateUpdateToDevices:(id)arg0 ;
-(void)_disconnectAllDevices;
-(void)_postInvalidationNotification;
-(void)_setupConnectionIfNeeded;
-(void)addEventObserver:(id)arg0 forDeviceWithIdentifier:(id)arg1 ;
-(void)beginDeviceQuery;
-(void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg0 ;
-(void)closeConnectionToDeviceWithIdentifier:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)deviceQueryUpdatedDiscoveredDevices:(id)arg0 ;
-(void)deviceUpdatedState:(id)arg0 ;
-(void)deviceWithState:(id)arg0 encounteredAuthChallengeOfType:(NSInteger)arg1 attributes:(NSInteger)arg2 codeToEnterOnDevice:(id)arg3 throttleSeconds:(NSInteger)arg4 ;
-(void)endDeviceQuery;
-(void)fetchActiveMREndpointUIDWithCompletion:(id)arg0 ;
-(void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg0 withLocallyEnteredCode:(id)arg1 ;
-(void)launchViewServiceForDeviceWithIdentifier:(id)arg0 ;
-(void)openConnectionToDeviceWithIdentifier:(id)arg0 ;
-(void)removeEventObserver:(id)arg0 forDeviceWithIdentifier:(id)arg1 ;
-(void)sendButtonEvent:(id)arg0 toDeviceWithIdentifier:(id)arg1 ;
-(void)sendEvent:(id)arg0 toDeviceWithIdentifier:(id)arg1 options:(id)arg2 response:(id)arg3 ;
-(void)sendGameControllerEvent:(id)arg0 toDeviceWithIdentifier:(id)arg1 ;
-(void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg0 ;
-(void)sendInputText:(id)arg0 toDeviceWithIdentifier:(id)arg1 ;
-(void)sendInputTextPayload:(id)arg0 toDeviceWithIdentifier:(id)arg1 ;
-(void)sendTouchEvent:(id)arg0 toDeviceWithIdentifier:(id)arg1 ;
-(void)setVoiceRecorderAutomaticRecording:(BOOL)arg0 forDeviceWithIdentifier:(id)arg1 ;
-(void)startVoiceRecordingForDeviceWithIdentifier:(id)arg0 ;
-(void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg0 ;


@end


#endif