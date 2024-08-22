// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDBARMETRICS_H
#define SFUNIFIEDBARMETRICS_H

@class UITraitCollection;

#import <Foundation/Foundation.h>


@interface SFUnifiedBarMetrics : NSObject {
    UITraitCollection *_traitCollection;
}


@property (readonly, nonatomic) CGFloat cutoutBorderWidth;
@property (readonly, nonatomic) CGFloat defaultItemHeight;
@property (readonly, nonatomic) CGFloat itemCornerRadius;
@property (readonly, nonatomic) CGFloat itemHeight; // ivar: _itemHeight
@property (readonly, nonatomic) CGFloat leadingTabIconInset;
@property (readonly, nonatomic) CGFloat maximumItemSpacing;
@property (nonatomic) NSInteger metricsCategory; // ivar: _metricsCategory
@property (readonly, nonatomic) CGFloat minimumItemSpacing;
@property (readonly, nonatomic) CGFloat squishedInlineBarHeight; // ivar: _squishedInlineBarHeight
@property (readonly, nonatomic) CGFloat tabCloseButtonWidth;


+(CGFloat)defaultSquishedContentSpacing;
+(CGFloat)minimumSquishScale;
+(CGFloat)separatorWidth;
+(CGFloat)transitioningItemScale;
-(BOOL)_updateWithContentSizeCategory:(id)arg0 legibilityWeight:(NSInteger)arg1 ;
-(BOOL)updateWithTraitCollection:(id)arg0 ;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(id)initWithTraitCollection:(id)arg0 ;
-(void)_updateMetrics;


@end


#endif