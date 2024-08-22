// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSNIPPETENVIRONMENT_H
#define LNSNIPPETENVIRONMENT_H

@class NSLocale;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNSnippetEnvironment : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL accessibilityDifferentiateWithoutColor; // ivar: _accessibilityDifferentiateWithoutColor
@property (readonly, nonatomic) BOOL accessibilityInvertColors; // ivar: _accessibilityInvertColors
@property (readonly, nonatomic) BOOL accessibilityReduceMotion; // ivar: _accessibilityReduceMotion
@property (readonly, nonatomic) BOOL accessibilityReduceTransparency; // ivar: _accessibilityReduceTransparency
@property (readonly, nonatomic) NSInteger colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) NSInteger colorSchemeContrast; // ivar: _colorSchemeContrast
@property (readonly, nonatomic) NSInteger displayGamut; // ivar: _displayGamut
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) NSInteger dynamicTypeSize; // ivar: _dynamicTypeSize
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) NSInteger legibilityWeight; // ivar: _legibilityWeight
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 locale:(id)arg1 dynamicTypeSize:(NSInteger)arg2 legibilityWeight:(NSInteger)arg3 layoutDirection:(NSInteger)arg4 colorScheme:(NSInteger)arg5 colorSchemeContrast:(NSInteger)arg6 displayScale:(CGFloat)arg7 displayGamut:(NSInteger)arg8 accessibilityDifferentiateWithoutColor:(BOOL)arg9 accessibilityInvertColors:(BOOL)arg10 accessibilityReduceMotion:(BOOL)arg11 accessibilityReduceTransparency:(BOOL)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif