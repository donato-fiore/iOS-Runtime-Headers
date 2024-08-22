// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNAUDIOPLAYER_H
#define SCNAUDIOPLAYER_H

@class AVAudioNode, AVAudioPlayerNode;

#import <Foundation/Foundation.h>

#import "SCNAudioSource.h"

@interface SCNAudioPlayer : NSObject {
    *__C3DNode _nodeRef;
    BOOL _shouldRecycle;
}


@property (readonly, nonatomic) AVAudioNode *audioNode; // ivar: _audioNode
@property (readonly) AVAudioPlayerNode *audioPlayer; // ivar: _audioPlayer
@property (readonly, nonatomic) SCNAudioSource *audioSource; // ivar: _audioSource
@property BOOL completed; // ivar: _completed
@property (readonly) BOOL customAudioNode; // ivar: _customAudioNode
@property (copy, nonatomic) id *didFinishPlayback; // ivar: didFinishPlayback
@property (readonly) *__C3DScene scene; // ivar: _scene
@property (copy, nonatomic) id *willStartPlayback; // ivar: willStartPlayback


+(id)audioPlayerWithAVAudioNode:(id)arg0 ;
+(id)audioPlayerWithSource:(id)arg0 ;
-(*void)__CFObject;
-(id)audioBufferFormat;
-(id)initWithAVAudioNode:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(struct __C3DNode *)nodeRef;
-(void)dealloc;
-(void)play;
-(void)recycle;
-(void)reset;
-(void)setNodeRef:(struct __C3DNode *)arg0 ;


@end


#endif