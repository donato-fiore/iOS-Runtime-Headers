// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APCPLAYER_H
#define APCPLAYER_H

@class AVPlayer, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "APCEncoderProcessor.h"
#import "APCPlayerEngine.h"
#import "AUPasscodeCodecConfiguration.h"
#import "APCPlayerEmbedInfo.h"

@interface APCPlayer : NSObject {
    AVPlayer *_player;
    APCEncoderProcessor *_encodeProcessor;
    APCPlayerEngine *_playerEngine;
    AUPasscodeCodecConfiguration *_codecConfig;
}


@property (nonatomic) NSUInteger callbackTimingMSec; // ivar: _callbackTimingMSec
@property (readonly, copy, nonatomic) NSData *configurationData; // ivar: _configurationData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) APCPlayerEmbedInfo *embeddingInfo;
@property (readonly) BOOL isPlaying; // ivar: _isPlaying
@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload


+(NSUInteger)assetIDFromIdentifier:(id)arg0 ;
+(id)carrierAssetIdentifiers;
+(id)fileNameForCarrierAsset:(NSUInteger)arg0 ;
+(id)urlForCarrierAsset:(NSUInteger)arg0 ;
-(BOOL)startSend;
-(BOOL)startSendAtTime:(NSUInteger)arg0 withBeginning:(id)arg1 ;
-(float)preparePayload:(id)arg0 usingCarrierAsset:(NSUInteger)arg1 error:(*id)arg2 ;
-(float)preparePayload:(id)arg0 usingCarrierAtURL:(id)arg1 error:(*id)arg2 ;
-(id)createCompatibleConfigForCapabilites:(id)arg0 ;
-(id)init;
-(id)initWithCodecConfiguration:(id)arg0 ;
-(id)initWithListenerCapabilityData:(id)arg0 ;
-(id)initWithListenerCapabilityData:(id)arg0 payloadLength:(NSUInteger)arg1 ;
-(void)endPasscodeEmbedding;
-(void)stopSend:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)stopSendAfterMinimumLoops:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)stopSendWithFadeOut:(float)arg0 completion:(id)arg1 ;


@end


#endif