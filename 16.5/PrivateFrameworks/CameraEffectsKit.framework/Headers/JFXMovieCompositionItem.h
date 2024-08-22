// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXMOVIECOMPOSITIONITEM_H
#define JFXMOVIECOMPOSITIONITEM_H

@class AVAsset;


#import "JFXCompositionItem.h"

@interface JFXMovieCompositionItem : JFXCompositionItem

@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (retain, nonatomic) AVAsset *audioAssetOverwrite; // ivar: _audioAssetOverwrite
@property (nonatomic) int audioAssetOverwriteStartOffset; // ivar: _audioAssetOverwriteStartOffset


-(BOOL)hasVideoContent;
-(BOOL)needAudioLoop;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 paddedFromTime:(struct ? )arg1 ;
-(id)initWithClip:(id)arg0 timeScale:(int)arg1 ;
-(id)segmentWithCharacteristic:(id)arg0 sourceRange:(struct ? )arg1 destinationRange:(struct ? )arg2 ;
-(id)speedRangesForSourceRange:(struct ? )arg0 destinationRange:(struct ? )arg1 ;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;
-(struct ? )applySpeed:(struct ? )arg0 ;


@end


#endif