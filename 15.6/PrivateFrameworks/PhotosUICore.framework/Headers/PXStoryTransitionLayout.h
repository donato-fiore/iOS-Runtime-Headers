// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSITIONLAYOUT_H
#define PXSTORYTRANSITIONLAYOUT_H



#import "PXGAbsoluteCompositeLayout.h"
#import "PXGLayout.h"

@interface PXStoryTransitionLayout : PXGAbsoluteCompositeLayout {
    ? _updateFlags;
}


@property (nonatomic) CGRect contentFrameOverride; // ivar: _contentFrameOverride
@property (readonly, nonatomic) PXGLayout *contentLayout; // ivar: _contentLayout


-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)createAnchorForVisibleAreaIgnoringEdges:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithContentLayout:(id)arg0 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_invalidateSublayoutPositions;
-(void)_updateSublayoutPositions;
-(void)referenceSizeDidChange;
-(void)update;


@end


#endif