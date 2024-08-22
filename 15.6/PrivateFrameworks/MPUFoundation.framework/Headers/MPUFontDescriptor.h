// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPUFONTDESCRIPTOR_H
#define MPUFONTDESCRIPTOR_H

@class UIFont;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "MPULayoutInterpolator.h"

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying>

 {
    UIFont *_preferredFont;
    ? _preferredFontMetrics;
    UIFont *_defaultFont;
    ? _defaultFontMetrics;
    MPULayoutInterpolator *_customFontPointSizeLayoutInterpolator;
}


@property (readonly, nonatomic) UIFont *defaultFont;
@property (readonly, nonatomic) CGFloat defaultFontLineHeight;
@property (readonly, nonatomic) CGFloat defaultPointSizeAdjustment; // ivar: _defaultPointSizeAdjustment
@property (readonly, nonatomic) NSInteger leadingAdjustment; // ivar: _leadingAdjustment
@property (readonly, nonatomic) UIFont *preferredFont;
@property (readonly, nonatomic) CGFloat preferredFontAscender;
@property (readonly, nonatomic) CGFloat preferredFontBodyLeading;
@property (readonly, nonatomic) CGFloat preferredFontCapHeight;
@property (readonly, nonatomic) CGFloat preferredFontDescender;
@property (readonly, nonatomic) CGFloat preferredFontLineHeight;
@property (readonly, nonatomic) CGFloat systemFontSize; // ivar: _systemFontSize
@property (readonly, nonatomic) NSInteger textStyle; // ivar: _textStyle
@property (readonly, nonatomic) BOOL usesCondensedMetrics; // ivar: _usesCondensedMetrics
@property (readonly, nonatomic) BOOL usesItalic; // ivar: _usesItalic
@property (readonly, nonatomic) BOOL wantsMonospaceNumbers; // ivar: _wantsMonospaceNumbers
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight


+(CGFloat)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)arg0 ;
+(id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg0 forCustomTextStyle:(NSInteger)arg1 ;
+(id)_baseNativeTextStyleForTextStyle:(NSInteger)arg0 ;
+(id)_fontDescriptorWithTextStyle:(NSInteger)arg0 leadingAdjustment:(NSInteger)arg1 weight:(NSInteger)arg2 systemFontSize:(CGFloat)arg3 defaultPointSizeAdjustment:(CGFloat)arg4 ;
+(id)_fontPointSizeLayoutInterpolatorForTextStyle:(NSInteger)arg0 ;
+(id)fontDescriptorWithSystemFontSize:(CGFloat)arg0 ;
+(id)fontDescriptorWithSystemFontSize:(CGFloat)arg0 leadingAdjustment:(NSInteger)arg1 ;
+(id)fontDescriptorWithSystemFontSize:(CGFloat)arg0 leadingAdjustment:(NSInteger)arg1 weight:(NSInteger)arg2 ;
+(id)fontDescriptorWithSystemFontSize:(CGFloat)arg0 weight:(NSInteger)arg1 ;
+(id)fontDescriptorWithTextStyle:(NSInteger)arg0 ;
+(id)fontDescriptorWithTextStyle:(NSInteger)arg0 leadingAdjustment:(NSInteger)arg1 ;
+(id)fontDescriptorWithTextStyle:(NSInteger)arg0 leadingAdjustment:(NSInteger)arg1 weight:(NSInteger)arg2 ;
+(id)fontDescriptorWithTextStyle:(NSInteger)arg0 leadingAdjustment:(NSInteger)arg1 weight:(NSInteger)arg2 defaultPointSizeAdjustment:(CGFloat)arg3 ;
+(id)fontDescriptorWithTextStyle:(NSInteger)arg0 weight:(NSInteger)arg1 ;
+(id)invalidationHandler;
+(unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(NSInteger)arg0 ;
+(unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(BOOL)arg0 isCondensedMetrics:(BOOL)arg1 ;
+(void)_getNativeFontDescriptorSymbolicTraits:(*unsigned int)arg0 nativeTextStyleAttribute:(*id)arg1 forWeight:(NSInteger)arg2 textStyle:(NSInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)scaledValueForValue:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)_defaultFontDescriptorForTextStyle:(NSInteger)arg0 ;
-(id)_fontPointSizeLayoutInterpolator;
-(id)_fontWithBaseNativeFontDescriptorProvider:(id)arg0 ;
-(id)_preferredFontDescriptorForTextStyle:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)arg0 ;
-(void)_invalidateCachedFontsAndMetrics;
-(void)_resetToDefaultValues;
-(void)dealloc;


@end


#endif