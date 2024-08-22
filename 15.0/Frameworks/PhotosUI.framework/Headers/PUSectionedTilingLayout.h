// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSECTIONEDTILINGLAYOUT_H
#define PUSECTIONEDTILINGLAYOUT_H



#import "PUTilingLayout.h"

@interface PUSectionedTilingLayout : PUTilingLayout {
    NSInteger _numberOfSections;
    *_PUSectionedTilingLayoutSectionInfo _sectionInfos;
    _NSRange _computedSections;
    NSInteger _seedSection;
    CGPoint _seedSectionOrigin;
}


@property (readonly, nonatomic) _NSRange computedSections;
@property (nonatomic) CGSize interSectionSpacing; // ivar: _interSectionSpacing
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight


-(BOOL)_scrollsHorizontallyNotVertically;
-(NSInteger)_numberOfSections;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(id)init;
-(id)layoutInfosForTilesInRect:(struct CGRect )arg0 ;
-(struct CGRect )boundsForSection:(NSInteger)arg0 ;
-(struct CGRect )contentBounds;
-(struct CGRect )visibleRectForScrollingToItemAtIndexPath:(id)arg0 scrollPosition:(NSInteger)arg1 ;
-(struct CGSize )sizeForSection:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(struct _PUSectionedTilingLayoutSectionInfo *)_sectionInfoForSection:(NSInteger)arg0 ;
-(void)_computeSeedSectionIfNeeded;
-(void)_ensureComputedSectionsHaveBeenSeeded;
-(void)_invalidateNumberOfSections;
-(void)_markAllSectionInfosInvalid;
-(void)addLayoutInfosForTilesInRect:(struct CGRect )arg0 section:(NSInteger)arg1 toSet:(id)arg2 ;
-(void)computeSectionsInRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)invalidateLayoutForUpdateWithItems:(id)arg0 ;
-(void)invalidateSectionInfos;
-(void)prepareLayout;
-(void)setVisibleRect:(struct CGRect )arg0 ;


@end


#endif