// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCRPCOMPANIONLINKCLIENTWRAPPER_H
#define _TVRCRPCOMPANIONLINKCLIENTWRAPPER_H

@class NSDictionary, RPCompanionLinkClient, RPCompanionLinkDevice, RPHIDSession, RPHIDTouchSession, NSString, RPSiriSession, RPTextInputSession;
@protocol _TVRCCompanionLinkClientWrapperDelegate;

#import <Foundation/Foundation.h>

#import "_TVRCRapportMediaEventsManager.h"

@interface _TVRCRPCompanionLinkClientWrapper : NSObject

@property (nonatomic) BOOL activated; // ivar: _activated
@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (retain, nonatomic) RPCompanionLinkClient *companionClient; // ivar: _companionClient
@property (nonatomic) BOOL connected; // ivar: _connected
@property (weak, nonatomic) NSObject<_TVRCCompanionLinkClientWrapperDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) RPCompanionLinkDevice *device; // ivar: _device
@property (nonatomic) NSUInteger featureFlags; // ivar: _featureFlags
@property (retain, nonatomic) RPHIDSession *hidSession; // ivar: _hidSession
@property (nonatomic) BOOL hidSessionActivated; // ivar: _hidSessionActivated
@property (retain, nonatomic) RPHIDTouchSession *hidTouchSession; // ivar: _hidTouchSession
@property (nonatomic) BOOL hidTouchSessionActivated; // ivar: _hidTouchSessionActivated
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) _TVRCRapportMediaEventsManager *mediaManager; // ivar: _mediaManager
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id *rtiSessionHandler; // ivar: _rtiSessionHandler
@property (nonatomic, getter=isSiriEnabled) BOOL siriEnabled; // ivar: _siriEnabled
@property (retain, nonatomic) RPSiriSession *siriSession; // ivar: _siriSession
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (nonatomic) BOOL startedSetup; // ivar: _startedSetup
@property (retain, nonatomic) RPTextInputSession *textInputSession; // ivar: _textInputSession
@property (nonatomic) BOOL textInputSessionActivated; // ivar: _textInputSessionActivated


+(id)wrapperWithDevice:(id)arg0 ;
-(BOOL)_featureSupported:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)supportsTouchEvents;
-(NSInteger)connectionType;
-(id)_stringForFeatureFlags:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithDevice:(id)arg0 ;
-(id)supportedButtons;
-(int)_commandForButtonEvent:(id)arg0 ;
-(int)_stateForButtonEvent:(id)arg0 ;
-(void)_createHidSession;
-(void)_disconnectWithError:(id)arg0 ;
-(void)_fetchSiriEnabledWithCompletionHandler:(id)arg0 ;
-(void)_handleSideEffectsForEvent:(id)arg0 ;
-(void)_invalidateAndReset;
-(void)_launchApplicationOrURL:(id)arg0 ;
-(void)_resolveFeatureFlags;
-(void)_setupFeatureServices;
-(void)_setupTextInputSession;
-(void)_setupTouchSession;
-(void)_updateConnectedState;
-(void)connect;
-(void)disconnect;
-(void)disconnectWithError:(id)arg0 ;
-(void)getCurrentRTISourceSession:(id)arg0 ;
-(void)reconnect;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendEvent:(id)arg0 options:(id)arg1 response:(id)arg2 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)setRTISessionHandler:(id)arg0 ;


@end


#endif