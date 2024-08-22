// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASSIGNALSERVER_H
#define SASSIGNALSERVER_H

@class NSString, BSServiceConnection<BSServiceConnectionHost>, NSMutableArray, BSServiceConnectionEndpointInjector;
@protocol SASSignalServerDelegate;

#import <Foundation/Foundation.h>


@interface SASSignalServer : NSObject

@property (nonatomic) NSString *assertionClientIdentifier; // ivar: _assertionClientIdentifier
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // ivar: _connection
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks; // ivar: _waitForConnectBlocks
@property (weak, nonatomic) NSObject<SASSignalServerDelegate> *weak_delegate; // ivar: _weak_delegate
@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector; // ivar: _workspaceServiceInjector


+(id)interface;
+(id)serverForConnection:(id)arg0 ;
+(id)serviceQuality;
+(void)_unregisterConnection:(id)arg0 ;
-(void)_activationRequestFromDirectActionEventWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_registerSourceForIdentifier:(id)arg0 ;
-(void)_unregisterSourceForIdentifier:(id)arg0 ;
-(void)activationRequestFromBluetoothKeyboardActivation:(id)arg0 ;
-(void)activationRequestFromBreadcrumb;
-(void)activationRequestFromButtonIdentifier:(id)arg0 context:(id)arg1 ;
-(void)activationRequestFromContinuityWithContext:(id)arg0 ;
-(void)activationRequestFromDirectActionEventWithContext:(id)arg0 ;
-(void)activationRequestFromDirectActionEventWithContext:(id)arg0 completion:(id)arg1 ;
-(void)activationRequestFromRemotePresentationBringUpWithContext:(id)arg0 ;
-(void)activationRequestFromSimpleActivation:(id)arg0 ;
-(void)activationRequestFromSpotlightWithContext:(id)arg0 ;
-(void)activationRequestFromTestingWithContext:(id)arg0 ;
-(void)buttonDownFromButtonIdentifier:(id)arg0 timestamp:(id)arg1 ;
-(void)buttonLongPressFromButtonIdentifier:(id)arg0 context:(id)arg1 ;
-(void)buttonTapFromButtonIdentifier:(id)arg0 ;
-(void)buttonUpFromButtonIdentifier:(id)arg0 deviceIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(void)cancelPrewarmFromButtonIdentifier:(id)arg0 ;
-(void)deactivationRequestFromButtonIdentifier:(id)arg0 context:(id)arg1 options:(id)arg2 ;
-(void)prewarmFromButtonIdentifier:(id)arg0 ;
-(void)prewarmFromButtonIdentifier:(id)arg0 longPressInterval:(id)arg1 ;
-(void)registerAssertionWithIdentifier:(id)arg0 reason:(id)arg1 ;
-(void)registerButtonEventListenerWithIdentifier:(id)arg0 ;
-(void)registerButtonIdentifier:(id)arg0 withUUID:(id)arg1 ;
-(void)registerNonButtonSourceWithType:(id)arg0 withUUID:(id)arg1 ;
-(void)unregisterAssertionWithIdentifier:(id)arg0 ;
-(void)unregisterButtonEventListenerWithIdentifier:(id)arg0 ;
-(void)unregisterButtonIdentifier:(id)arg0 withUUID:(id)arg1 ;
-(void)unregisterNonButtonSourceWithType:(id)arg0 withUUID:(id)arg1 ;


@end


#endif