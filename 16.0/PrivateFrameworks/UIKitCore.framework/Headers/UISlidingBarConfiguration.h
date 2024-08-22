// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISLIDINGBARCONFIGURATION_H
#define UISLIDINGBARCONFIGURATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UISlidingBarConfiguration : NSObject <NSCopying>

 {
    ? _configurationFlags;
}


@property (nonatomic, setter=_setLeadingBackgroundStyle:) NSInteger _leadingBackgroundStyle; // ivar: __leadingBackgroundStyle
@property (nonatomic, setter=_setLeadingBorderWidthIsInPixels:) BOOL _leadingBorderWidthIsInPixels;
@property (nonatomic, setter=_setRawLeadingBorderWidth:) CGFloat _rawLeadingBorderWidth; // ivar: __rawLeadingBorderWidth
@property (nonatomic, setter=_setRawTrailingBorderWidth:) CGFloat _rawTrailingBorderWidth; // ivar: __rawTrailingBorderWidth
@property (nonatomic, setter=_setSupplementaryAdoptsPrimaryBackgroundStyle:) BOOL _supplementaryAdoptsPrimaryBackgroundStyle;
@property (nonatomic, setter=_setTrailingBackgroundStyle:) NSInteger _trailingBackgroundStyle; // ivar: __trailingBackgroundStyle
@property (nonatomic, setter=_setTrailingBorderWidthIsInPixels:) BOOL _trailingBorderWidthIsInPixels;
@property (nonatomic) BOOL allowMixedSideBySideAndOverlay;
@property (nonatomic) BOOL allowTotalWidthGreaterThanParent;
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) BOOL forceOverlay;
@property (nonatomic) BOOL leadingMayBeHidden;
@property (copy, nonatomic) NSArray *leadingWidths; // ivar: _leadingWidths
@property (nonatomic) CGFloat maximumMainWidth; // ivar: _maximumMainWidth
@property (nonatomic) CGFloat minimumMainWidthFraction; // ivar: _minimumMainWidthFraction
@property (nonatomic) CGFloat minimumMainWidthFractionForSecondColumn; // ivar: _minimumMainWidthFractionForSecondColumn
@property (nonatomic) CGFloat rubberBandExtension; // ivar: _rubberBandExtension
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (nonatomic) NSInteger supplementaryEdge; // ivar: _supplementaryEdge
@property (nonatomic) BOOL supplementaryMayBeHidden;
@property (copy, nonatomic) NSArray *supplementaryWidths; // ivar: _supplementaryWidths
@property (nonatomic) BOOL trailingMayBeHidden;
@property (copy, nonatomic) NSArray *trailingWidths; // ivar: _trailingWidths


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)leadingBorderWidthForScale:(CGFloat)arg0 ;
-(CGFloat)trailingBorderWidthForScale:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)setLeadingBorderWidthInPixels:(CGFloat)arg0 ;
-(void)setLeadingBorderWidthInPoints:(CGFloat)arg0 ;
-(void)setTrailingBorderWidthInPixels:(CGFloat)arg0 ;
-(void)setTrailingBorderWidthInPoints:(CGFloat)arg0 ;


@end


#endif