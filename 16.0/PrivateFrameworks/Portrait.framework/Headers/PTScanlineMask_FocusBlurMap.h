// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTSCANLINEMASK_FOCUSBLURMAP_H
#define PTSCANLINEMASK_FOCUSBLURMAP_H

@class NSIndexSet;


#import "PTScanlineMask.h"
#import "PTFocusBlurMap.h"

@interface PTScanlineMask_FocusBlurMap : PTScanlineMask

@property (readonly) PTFocusBlurMap *map; // ivar: _map
@property CGSize normalizedTileSize; // ivar: _normalizedTileSize
@property CGSize placementTileSize; // ivar: _placementTileSize
@property (readonly) NSIndexSet *region; // ivar: _region


-(id)initWithFocusBlurMap:(id)arg0 region:(id)arg1 ;
-(id)scanlineIter;
-(struct _NSRange )pixelRangeForTileRangeX:(struct _NSRange )arg0 ;
-(struct _NSRange )pixelRangeForTileRangeY:(struct _NSRange )arg0 ;
-(void)_recalculatePlacementTileSize;
-(void)setPlacement:(struct CGRect )arg0 ;


@end


#endif