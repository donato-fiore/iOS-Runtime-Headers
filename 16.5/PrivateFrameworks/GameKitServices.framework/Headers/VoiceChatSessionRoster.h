// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VOICECHATSESSIONROSTER_H
#define VOICECHATSESSIONROSTER_H

@class NSString, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKSessionInternal.h"
#import "GKVoiceChatSessionInternal.h"

@interface VoiceChatSessionRoster : NSObject {
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    _opaque_pthread_mutex_t resMutex;
    BOOL _needsUpdateBeaconList;
    BOOL _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    BOOL _isBeaconUp;
    BOOL _hasFocus;
}




-(BOOL)hasFocus;
-(BOOL)recalculateFocusRating;
-(id)initWithGKSession:(id)arg0 peerID:(id)arg1 voiceChatSession:(id)arg2 sendQueue:(id)arg3 ;
-(id)subscribedPeers;
-(unsigned int)focusID;
-(void)calculateFocus:(id)arg0 ;
-(void)cleanup;
-(void)configureDeviceRating;
-(void)dealloc;
-(void)peer:(id)arg0 didChangeState:(unsigned int)arg1 ;
-(void)processSubscribeBeacon:(struct tagVoiceChatBeacon *)arg0 beaconState:(id)arg1 fromPeer:(id)arg2 ;
-(void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon *)arg0 beaconState:(id)arg1 fromPeer:(id)arg2 ;
-(void)receivedBeacon:(id)arg0 fromPeer:(id)arg1 ;
-(void)sendBeacon:(struct tagVoiceChatBeacon *)arg0 ToPeer:(id)arg1 ;
-(void)sendBeacons;
-(void)startBeacon;
-(void)startBeaconWrapper:(id)arg0 ;
-(void)stopBeacon;
-(void)updateBeacon;


@end


#endif