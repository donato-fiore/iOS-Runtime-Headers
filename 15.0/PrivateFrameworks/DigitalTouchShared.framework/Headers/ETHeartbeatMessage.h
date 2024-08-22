// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETHEARTBEATMESSAGE_H
#define ETHEARTBEATMESSAGE_H

@class SKNode, SKSpriteNode, SKEmitterNode, SKShader, SKUniform, SKTexture;


#import "ETMessage.h"

@interface ETHeartbeatMessage : ETMessage {
    SKNode *_heartNode;
    SKSpriteNode *_heartLines;
    SKSpriteNode *_heart;
    SKEmitterNode *_heartWisp;
    SKShader *_linesShader;
    SKShader *_heartShader;
    SKUniform *_speedUniform;
    SKUniform *_warpedTexAtlasUniform;
    SKUniform *_burTexUniform;
    SKUniform *_noiseTexUniform;
    SKUniform *_scaleUniform;
    SKUniform *_shaderTimeUniform;
    SKNode *_heartScale;
    float _hapticLoopPeriod;
    SKTexture *_heartbreakAtlas;
}


@property (nonatomic) float beatsPerMinute; // ivar: _beatsPerMinute
@property (readonly, nonatomic, getter=isBroken) BOOL broken; // ivar: _broken
@property (nonatomic) int duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat heartbreakTime; // ivar: _heartbreakTime
@property (nonatomic) CGPoint normalizedCenter; // ivar: _normalizedCenter
@property (nonatomic) CGFloat rotation; // ivar: _rotation
@property (nonatomic) float scale; // ivar: _scale


+(unsigned short)messageType;
-(CGFloat)messageDuration;
-(id)archiveData;
-(id)description;
-(id)initWithArchiveData:(id)arg0 ;
-(id)messageTypeAsString;
-(void)_displayInScene:(id)arg0 useDuration:(BOOL)arg1 ;
-(void)_displayInScene:(id)arg0 useDuration:(BOOL)arg1 fastStart:(BOOL)arg2 ;
-(void)_startAudioPlayback;
-(void)_stopAudioPlayback;
-(void)breakHeart;
-(void)displayInScene:(id)arg0 ;
-(void)moveHeartNodeByX:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)playBeatWithDuration:(CGFloat)arg0 ;
-(void)setMute:(BOOL)arg0 ;
-(void)startHeartbeat:(id)arg0 ;
-(void)startHeartbeat:(id)arg0 fastStart:(BOOL)arg1 ;
-(void)stopPlaying;


@end


#endif