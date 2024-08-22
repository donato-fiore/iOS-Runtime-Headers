// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCOLLECTIONGRIDLAYOUT_H
#define GKCOLLECTIONGRIDLAYOUT_H

@class NSDictionary, NSIndexSet;


#import "GKCollectionFocusingLayout.h"

@interface GKCollectionGridLayout : GKCollectionFocusingLayout

@property (nonatomic) NSInteger autoWidthColumns; // ivar: _autoWidthColumns
@property (nonatomic) BOOL centersItemsInExcessSpace; // ivar: _centersItemsInExcessSpace
@property (nonatomic) BOOL didPerformInitialContentInsetScroll; // ivar: _didPerformInitialContentInsetScroll
@property (nonatomic) CGFloat extraSectionHeaderToCellSpace; // ivar: _extraSectionHeaderToCellSpace
@property (retain, nonatomic) NSDictionary *footerAttributes; // ivar: _footerAttributes
@property (retain, nonatomic) NSDictionary *headerAttributes; // ivar: _headerAttributes
@property (retain, nonatomic) NSDictionary *itemAttributes; // ivar: _itemAttributes
@property (nonatomic) BOOL sectionInsetRelativeWithContentInset; // ivar: _sectionInsetRelativeWithContentInset
@property (retain, nonatomic) NSIndexSet *sectionsThatShowFootersWhenEmpty; // ivar: _sectionsThatShowFootersWhenEmpty
@property (retain, nonatomic) NSIndexSet *sectionsThatShowHeaderWhenEmpty; // ivar: _sectionsThatShowHeaderWhenEmpty
@property (nonatomic) BOOL shouldPerformInitialScrollToContentInsetTop; // ivar: _shouldPerformInitialScrollToContentInsetTop


-(NSInteger)lastValidSection;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)applyDefaults;
-(void)prepareLayout;


@end


#endif