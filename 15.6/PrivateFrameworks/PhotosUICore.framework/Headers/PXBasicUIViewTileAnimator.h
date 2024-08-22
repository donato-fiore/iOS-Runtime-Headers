// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXBASICUIVIEWTILEANIMATOR_H
#define PXBASICUIVIEWTILEANIMATOR_H

@class NSCountedSet;


#import "PXBasicTileAnimator.h"

@interface PXBasicUIViewTileAnimator : PXBasicTileAnimator {
    NSCountedSet *_suspendedTiles;
}




// +(void)animateWithOptions:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)_applyGeometry:(struct PXTileGeometry )arg0 toTile:(id)arg1 ;
-(void)_applyGeometry:(struct PXTileGeometry )arg0 userData:(id)arg1 toTile:(id)arg2 ;
-(void)animateTile:(id)arg0 toGeometry:(struct PXTileGeometry )arg1 userData:(id)arg2 withOptions:(id)arg3 completionHandler:(id)arg4 ;
-(void)prepareTile:(id)arg0 withGeometry:(struct PXTileGeometry )arg1 userData:(id)arg2 ;
-(void)resumeAnimationsForTile:(id)arg0 ;
-(void)suspendAnimationsForTile:(id)arg0 ;


@end


#endif