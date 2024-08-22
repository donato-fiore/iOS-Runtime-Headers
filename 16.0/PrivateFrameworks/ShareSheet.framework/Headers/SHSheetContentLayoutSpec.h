// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETCONTENTLAYOUTSPEC_H
#define SHSHEETCONTENTLAYOUTSPEC_H

@class UIImageSymbolConfiguration, UIColor, UITraitCollection;

#import <Foundation/Foundation.h>


@interface SHSheetContentLayoutSpec : NSObject

@property (readonly, nonatomic) CGFloat actionInterGroupInset; // ivar: _actionInterGroupInset
@property (readonly, nonatomic) UIImageSymbolConfiguration *activityImageSymbolConfiguration;
@property (readonly, nonatomic) CGFloat customViewSectionHeight; // ivar: _customViewSectionHeight
@property (nonatomic) CGFloat customViewVerticalInset; // ivar: _customViewVerticalInset
@property (readonly, nonatomic) UIColor *editTintColor;
@property (readonly, nonatomic) CGFloat estimatedActionFooterHeight; // ivar: _estimatedActionFooterHeight
@property (readonly, nonatomic) CGFloat estimatedFooterHeight; // ivar: _estimatedFooterHeight
@property (readonly, nonatomic) CGFloat estimatedHeaderHeight; // ivar: _estimatedHeaderHeight
@property (readonly, nonatomic) UIColor *footerBackgroundColor; // ivar: _footerBackgroundColor
@property (readonly, nonatomic) CGFloat heroActionItemSpacing; // ivar: _heroActionItemSpacing
@property (nonatomic) CGFloat horizontalCellWidth; // ivar: _horizontalCellWidth
@property (readonly, nonatomic) BOOL isAccessibilityContentSize;
@property (readonly, nonatomic) CGFloat peopleIconWidth; // ivar: _peopleIconWidth
@property (readonly, nonatomic) CGFloat peopleSectionHeight; // ivar: _peopleSectionHeight
@property (readonly, nonatomic) CGFloat sharingAppIconWidth; // ivar: _sharingAppIconWidth
@property (readonly, nonatomic) NSDirectionalEdgeInsets topContentSectionHeaderInsets; // ivar: _topContentSectionHeaderInsets
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)shouldUseNarrowLayoutForHeroActionsWithContainerWidth:(CGFloat)arg0 ;
-(CGFloat)horizontalCellWidthForContentWidth:(CGFloat)arg0 sizeOffset:(CGFloat)arg1 ;
-(NSInteger)numberOfHorizontalItemsPerGroupForContentWidth:(CGFloat)arg0 ;
-(id)actionsLayoutSectionConfigurationWithEnvironment:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 ;


@end


#endif