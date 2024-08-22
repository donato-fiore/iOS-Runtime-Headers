// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUZOOMABLEGRIDVIEWCONTROLLERSPEC_H
#define PUZOOMABLEGRIDVIEWCONTROLLERSPEC_H


#import <Foundation/Foundation.h>

#import "PUPhotosGridViewControllerSpec.h"

@interface PUZoomableGridViewControllerSpec : NSObject

@property (readonly, nonatomic) BOOL canDisplayMultipleRightBarButtonItems; // ivar: _canDisplayMultipleRightBarButtonItems
@property (readonly, nonatomic) NSInteger collectionsLevelCellFillMode;
@property (readonly, nonatomic) UIEdgeInsets collectionsLevelSectionHeaderHighlightInset; // ivar: _collectionsLevelSectionHeaderHighlightInset
@property (readonly, nonatomic) CGSize collectionsLevelThumbnailSize;
@property (readonly, nonatomic) NSInteger collectionsSectionHeaderStyle; // ivar: _collectionsSectionHeaderStyle
@property (readonly, nonatomic) NSInteger fullMomentsLevelCellFillMode;
@property (readonly, nonatomic) UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset; // ivar: _fullMomentsLevelSectionHeaderHighlightInset
@property (readonly, nonatomic) CGSize fullMomentsLevelThumbnailSize; // ivar: _fullMomentsLevelThumbnailSize
@property (readonly, nonatomic) NSInteger fullMomentsSectionHeaderStyle; // ivar: _fullMomentsSectionHeaderStyle
@property (retain, nonatomic, setter=_setGridSpec:) PUPhotosGridViewControllerSpec *gridSpec; // ivar: _gridSpec
@property (nonatomic) UIEdgeInsets magnifiedDragEdgeInsets; // ivar: _magnifiedDragEdgeInsets
@property (readonly, nonatomic) CGSize magnifiedImageSize; // ivar: _magnifiedImageSize
@property (nonatomic) CGFloat magnifiedYOffset; // ivar: _magnifiedYOffset
@property (readonly, nonatomic) NSInteger yearsLevelCellFillMode;
@property (readonly, nonatomic) UIEdgeInsets yearsLevelSectionHeaderHighlightInset; // ivar: _yearsLevelSectionHeaderHighlightInset
@property (readonly, nonatomic) CGSize yearsLevelThumbnailSize;
@property (readonly, nonatomic) NSInteger yearsSectionHeaderStyle; // ivar: _yearsSectionHeaderStyle


-(BOOL)dynamicLayoutEnabled;
-(id)newGridSpec;
-(void)configureCollectionsLevelGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureFullMomentsLevelGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureYearsLevelGridLayout:(id)arg0 forWidth:(CGFloat)arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif