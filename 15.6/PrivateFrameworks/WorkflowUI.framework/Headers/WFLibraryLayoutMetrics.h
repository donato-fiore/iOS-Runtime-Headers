// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLIBRARYLAYOUTMETRICS_H
#define WFLIBRARYLAYOUTMETRICS_H

@class NSString, WFFloatingViewConfiguration, UITraitCollection, UIFont;
@protocol WFChicletViewMetrics, NSCopying;

#import <Foundation/Foundation.h>


@interface WFLibraryLayoutMetrics : NSObject <WFChicletViewMetrics, NSCopying>



@property (readonly, nonatomic) NSUInteger appIconFormat;
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFFloatingViewConfiguration *floatingViewConfiguration; // ivar: _floatingViewConfiguration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (readonly, nonatomic) NSUInteger itemsPerBanner; // ivar: _itemsPerBanner
@property (readonly, nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (readonly, nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) UIEdgeInsets workflowContentEdgeInsets;
@property (readonly, nonatomic) CGFloat workflowGlyphDimension;
@property (readonly, nonatomic) CGSize workflowGlyphSize;
@property (readonly, nonatomic) CGFloat workflowIconToLabelMargin;
@property (readonly, nonatomic) CGSize workflowPlusGlyphSize;
@property (readonly, nonatomic) CGSize workflowSize; // ivar: _workflowSize
@property (readonly, nonatomic) UIFont *workflowSubtitleFont; // ivar: _workflowSubtitleFont
@property (readonly, nonatomic) UIFont *workflowTitleFont; // ivar: _workflowTitleFont


+(id)metricsCompatibleWithTraitCollection:(id)arg0 viewWidth:(CGFloat)arg1 layoutMargins:(struct UIEdgeInsets )arg2 ;
+(id)metricsCompatibleWithTraitCollection:(id)arg0 viewWidth:(CGFloat)arg1 layoutMargins:(struct UIEdgeInsets )arg2 needsTopPadding:(BOOL)arg3 ;
+(id)workflowSubtitleFontCompatibleWithTraitCollection:(id)arg0 ;
+(id)workflowTitleFontCompatibleWithTraitCollection:(id)arg0 ;
-(CGFloat)scaledValueForValue:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTraitCollection:(id)arg0 viewWidth:(CGFloat)arg1 layoutMargins:(struct UIEdgeInsets )arg2 needsTopPadding:(BOOL)arg3 ;
-(struct UIEdgeInsets )capEdgeInsets:(struct UIEdgeInsets )arg0 min:(struct UIEdgeInsets )arg1 max:(struct UIEdgeInsets )arg2 ;
-(struct UIEdgeInsets )scaledEdgeInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif