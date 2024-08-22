// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSDAAPTOUCHREMOTEMANAGER_H
#define RMSDAAPTOUCHREMOTEMANAGER_H

@class NSString;
@protocol RMSTouchRemoteSocketDelegate, RMSDAAPTouchRemoteManagerDelegate;

#import <Foundation/Foundation.h>

#import "RMSDAAPRequestManager.h"
#import "RMSTouchRemoteSocket.h"

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate>

 {
    RMSDAAPRequestManager *_requestManager;
    RMSTouchRemoteSocket *_socket;
    NSInteger _controlPromptRevision;
    int _encryptionKey;
    int _portSecret;
    int _port;
    float _touchDistanceMin;
    float _touchDistanceMax;
    unsigned int _touchTimeMin;
    unsigned int _touchTimeMax;
    BOOL _shouldWriteTimestampsForPPT;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSDAAPTouchRemoteManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRequestManager:(id)arg0 ;
-(struct CGPoint )_locationForDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(unsigned int)_timeForDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(void)_createSocket;
-(void)_parsePortInfoItems:(id)arg0 ;
-(void)_requestPortInfo;
-(void)_requestPromptUpdate:(id)arg0 ;
-(void)initiateControlWithCompletionHandler:(id)arg0 ;
-(void)sendNavigationCommand:(NSInteger)arg0 ;
-(void)sendTouchEndWithDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(void)sendTouchMoveWithDirection:(NSInteger)arg0 repeatCount:(int)arg1 ;
-(void)touchRemoteSocketDidConnect:(id)arg0 ;
-(void)touchRemoteSocketDidDisconnect:(id)arg0 ;


@end


#endif