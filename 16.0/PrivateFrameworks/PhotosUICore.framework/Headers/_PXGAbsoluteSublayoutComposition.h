// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXGABSOLUTESUBLAYOUTCOMPOSITION_H
#define _PXGABSOLUTESUBLAYOUTCOMPOSITION_H



#import "PXGSublayoutComposition.h"

@interface _PXGAbsoluteSublayoutComposition : PXGSublayoutComposition {
    NSInteger _sublayoutCount;
    *CGRect _sublayoutFrames;
    *CGFloat _sublayoutZPositions;
    *CGFloat _sublayoutReferenceDepths;
    *? _sublayoutSpriteTransforms;
}


@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) BOOL shouldUpdateSublayoutsInStrictOrder; // ivar: _shouldUpdateSublayoutsInStrictOrder


-(struct CGRect )contentBounds;
-(void)dealloc;
-(void)insertRange:(struct _NSRange )arg0 ;
-(void)removeRange:(struct _NSRange )arg0 ;
-(void)setFrames:(struct CGRect *)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setOrigins:(struct CGPoint *)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setReferenceDepths:(*CGFloat)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setSpriteTransforms:(struct ? *)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setZPositions:(*CGFloat)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(NSInteger)arg0 usingSublayoutUpdateBlock:(id)arg1 ;


@end


#endif