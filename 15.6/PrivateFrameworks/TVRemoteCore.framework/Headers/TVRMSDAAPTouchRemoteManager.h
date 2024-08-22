// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRMSDAAPTOUCHREMOTEMANAGER_H
#define TVRMSDAAPTOUCHREMOTEMANAGER_H

@class NSString;
@protocol TVRMSTouchRemoteSocketDelegate, TVRMSDAAPTouchRemoteManagerDelegate;

#import <Foundation/Foundation.h>

#import "TVRMSDAAPRequestManager.h"
#import "TVRMSFairPlayKeyboardEncryption.h"
#import "TVRMSTouchRemoteSocket.h"
#import "TVRMSKeyboardInfo.h"

@interface TVRMSDAAPTouchRemoteManager : NSObject <TVRMSTouchRemoteSocketDelegate>

 {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSFairPlayKeyboardEncryption *_keyboardEncryption;
    TVRMSTouchRemoteSocket *_socket;
    NSInteger _controlPromptRevision;
    int _encryptionKey;
    int _portSecret;
    int _port;
    float _touchDistanceMin;
    float _touchDistanceMax;
    unsigned int _touchTimeMin;
    unsigned int _touchTimeMax;
    BOOL _keyboardEditingSessionActive;
    TVRMSKeyboardInfo *_keyboardInfo;
    NSInteger _keyboardEditingSessionID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVRMSDAAPTouchRemoteManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)keyboardEditingSessionActive;
-(id)_encryptString:(id)arg0 ;
-(id)initWithRequestManager:(id)arg0 ;
-(id)keyboardInfo;
-(struct CGPoint )_locationForDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(unsigned int)_timeForDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(void)_createSocket;
-(void)_parsePortInfoItems:(id)arg0 ;
-(void)_processAuthenticationUpdateForItems:(id)arg0 ;
-(void)_processKeyboardMessageItems:(id)arg0 ;
-(void)_requestKeyboardStatus;
-(void)_requestPortInfo;
-(void)_requestPromptUpdate:(id)arg0 ;
-(void)clearKeyboardText;
-(void)initiateControlWithCompletionHandler:(id)arg0 ;
-(void)sendKeyboardReturnCommand;
-(void)sendNavigationCommand:(NSInteger)arg0 ;
-(void)sendTouchEndWithDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(void)sendTouchMoveWithDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(void)setKeyboardText:(id)arg0 ;
-(void)touchRemoteSocketDidConnect:(id)arg0 ;
-(void)touchRemoteSocketDidDisconnect:(id)arg0 ;


@end


#endif