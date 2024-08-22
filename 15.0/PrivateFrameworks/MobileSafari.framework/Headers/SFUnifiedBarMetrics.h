// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDBARMETRICS_H
#define SFUNIFIEDBARMETRICS_H

@class UITraitCollection;

#import <Foundation/Foundation.h>


@interface SFUnifiedBarMetrics : NSObject {
    UITraitCollection *_traitCollection;
}


@property (readonly, nonatomic) CGFloat itemHeight; // ivar: _itemHeight
@property (readonly, nonatomic) CGFloat leadingTabIconInset;
@property (nonatomic) NSInteger metricsCategory; // ivar: _metricsCategory
@property (readonly, nonatomic) CGFloat squishedBarHeight; // ivar: _squishedBarHeight
@property (readonly, nonatomic) CGFloat tabCloseButtonWidth;


+(CGFloat)cutoutBorderWidth;
+(CGFloat)defaultItemHeight;
+(CGFloat)itemCornerRadius;
+(CGFloat)itemSpacing;
+(CGFloat)minimumItemSpacing;
+(CGFloat)minimumSquishScale;
+(CGFloat)transitioningItemScale;
-(BOOL)_updateWithContentSizeCategory:(id)arg0 legibilityWeight:(NSInteger)arg1 ;
-(BOOL)updateWithTraitCollection:(id)arg0 ;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(CGFloat)squishVerticalOffsetForStatusBarHeight:(CGFloat)arg0 ;
-(id)init;
-(void)_updateMetrics;


@end


#endif