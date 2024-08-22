// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEOPLAYBACKFRAMEREQUEST_H
#define NUVIDEOPLAYBACKFRAMEREQUEST_H

@class NSDictionary;


#import "NURenderRequest.h"
#import "NUColorSpace.h"
#import "NURenderNode.h"

@interface NUVideoPlaybackFrameRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (retain, nonatomic) *__CVBuffer destinationBuffer; // ivar: _destinationBuffer
@property (nonatomic) ? evaluationTime; // ivar: _evaluationTime
@property (nonatomic) ? frameDuration; // ivar: _frameDuration
@property (nonatomic) BOOL isDolbyVision; // ivar: _isDolbyVision
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) ? renderScale; // ivar: _renderScale
@property (copy, nonatomic) NSDictionary *videoFrames; // ivar: _videoFrames
@property (copy, nonatomic) NSDictionary *videoMetadataSamples; // ivar: _videoMetadataSamples
@property (retain, nonatomic) NURenderNode *videoRenderPrepareNode; // ivar: _videoRenderPrepareNode


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)dealloc;
-(void)submit:(id)arg0 ;


@end


#endif