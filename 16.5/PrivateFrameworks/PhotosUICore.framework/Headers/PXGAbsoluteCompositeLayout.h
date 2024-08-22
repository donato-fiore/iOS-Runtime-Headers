// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGABSOLUTECOMPOSITELAYOUT_H
#define PXGABSOLUTECOMPOSITELAYOUT_H



#import "PXGCompositeLayout.h"
#import "_PXGAbsoluteSublayoutComposition.h"

@interface PXGAbsoluteCompositeLayout : PXGCompositeLayout

@property (readonly, nonatomic) _PXGAbsoluteSublayoutComposition *absoluteComposition; // ivar: _absoluteComposition
@property (nonatomic) BOOL shouldUpdateSublayoutsInStrictOrder;


-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(void)insertSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSublayoutProvider:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)removeSublayoutsInRange:(struct _NSRange )arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 forSublayoutAtIndex:(NSInteger)arg1 ;
-(void)setFrames:(struct CGRect *)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setOrigin:(struct CGPoint )arg0 forSublayoutAtIndex:(NSInteger)arg1 ;
-(void)setOrigins:(struct CGPoint *)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setReferenceDepth:(CGFloat)arg0 forSublayoutAtIndex:(NSInteger)arg1 ;
-(void)setReferenceDepths:(*CGFloat)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;
-(void)setSpriteTransform:(struct ? )arg0 forSublayoutAtIndex:(NSInteger)arg1 ;
-(void)setZPosition:(CGFloat)arg0 forSublayoutAtIndex:(NSInteger)arg1 ;
-(void)setZPositions:(*CGFloat)arg0 forSublayoutsInRange:(struct _NSRange )arg1 ;


@end


#endif