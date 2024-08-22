// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUZOOMABLEGRIDVIEWCONTROLLERPADSPEC_H
#define PUZOOMABLEGRIDVIEWCONTROLLERPADSPEC_H



#import "PUZoomableGridViewControllerSpec.h"

@interface PUZoomableGridViewControllerPadSpec : PUZoomableGridViewControllerSpec



-(BOOL)canDisplayMultipleRightBarButtonItems;
-(CGFloat)magnifiedYOffset;
-(NSInteger)collectionsSectionHeaderStyle;
-(NSInteger)fullMomentsSectionHeaderStyle;
-(NSInteger)yearsSectionHeaderStyle;
-(id)newGridSpec;
-(struct CGSize )collectionsLevelThumbnailSize;
-(struct CGSize )fullMomentsLevelThumbnailSize;
-(struct CGSize )magnifiedImageSize;
-(struct CGSize )yearsLevelThumbnailSize;
-(struct UIEdgeInsets )collectionsLevelSectionHeaderHighlightInset;
-(struct UIEdgeInsets )fullMomentsLevelSectionHeaderHighlightInset;
-(struct UIEdgeInsets )magnifiedDragEdgeInsets;
-(struct UIEdgeInsets )yearsLevelSectionHeaderHighlightInset;
-(void)configureCollectionsLevelGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureFullMomentsLevelGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureYearsLevelGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif