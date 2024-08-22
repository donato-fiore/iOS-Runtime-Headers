// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUVIDEORENDERRESULT_H
#define _NUVIDEORENDERRESULT_H

@class NURenderResult, AVAudioMix, AVComposition, AVVideoComposition, NSString, AVAsset;
@protocol NUVideoRenderResult, NURenderStatistics;


#import "NUImageGeometry.h"

@interface _NUVideoRenderResult : NURenderResult <NUVideoRenderResult>



@property (retain) AVAudioMix *audioMix; // ivar: _audioMix
@property (readonly) AVComposition *avAsset;
@property (readonly) AVVideoComposition *avVideoComposition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;
@property (retain) AVAsset *video; // ivar: _video
@property (retain) AVVideoComposition *videoComposition; // ivar: _videoComposition




@end


#endif