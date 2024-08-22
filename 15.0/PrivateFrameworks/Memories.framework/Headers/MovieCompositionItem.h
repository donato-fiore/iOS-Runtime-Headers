// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVIECOMPOSITIONITEM_H
#define MOVIECOMPOSITIONITEM_H

@class AVAsset, AVURLAsset;


#import "CompositionItem.h"

@interface MovieCompositionItem : CompositionItem

@property (retain, nonatomic) AVAsset *asset; // ivar: m_asset
@property (retain, nonatomic) AVURLAsset *audioProxyAsset; // ivar: m_audioProxyAsset


-(BOOL)hasVideoContent;
-(id)audioAsset;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 ;
-(id)audioTrackSegmentsWithDestinationTime:(struct ? )arg0 paddedFromTime:(struct ? )arg1 ;
-(id)initWithClip:(id)arg0 ;
-(id)metaDataVideoAssetURL;
-(id)segmentWithCharacteristic:(id)arg0 sourceRange:(struct ? )arg1 destinationRange:(struct ? )arg2 ;
-(id)speedRangesForSourceRange:(struct ? )arg0 destinationRange:(struct ? )arg1 ;
-(id)videoTrackSegmentsWithDestinationRange:(struct ? )arg0 ;
-(struct ? )applySpeed:(struct ? )arg0 ;


@end


#endif