// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISSLOTSTYLE_H
#define UISSLOTSTYLE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISSlotStyle : NSObject <NSCopying, NSSecureCoding>

 {
    ? _fields;
}


@property (readonly, nonatomic) NSUInteger accessibilityButtonShapes;
@property (readonly, nonatomic) NSUInteger accessibilityContrast;
@property (readonly, nonatomic) NSArray *assetAppearanceNames;
@property (readonly, nonatomic) NSInteger assetDeviceIdiom;
@property (readonly, nonatomic) NSInteger assetLayoutDirection;
@property (readonly, nonatomic) CGFloat assetScaleFactor;
@property (readonly, nonatomic) NSUInteger displayRange;
@property (readonly, nonatomic) unsigned char displayScale;
@property (readonly, nonatomic) *__CFString fontContentSizeCategory;
@property (readonly, nonatomic) NSInteger fontLegibilityWeight;
@property (readonly, nonatomic) CGFloat graphicsDisabledAlpha;
@property (readonly, nonatomic) BOOL hasAccessibilityContentSizeCategory;
@property (readonly, nonatomic) NSUInteger layoutDirection;
@property (readonly, nonatomic) NSUInteger legibilityWeight;
@property (readonly, nonatomic) NSString *localization; // ivar: _localization
@property (readonly, nonatomic) NSUInteger preferredContentSizeCategory;
@property (readonly, nonatomic) *CGColor tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSUInteger userInterfaceIdiom;
@property (readonly, nonatomic) NSUInteger userInterfaceStyle;


+(BOOL)supportsSecureCoding;
+(id)slotStyleWithAccessibilityButtonShapes:(NSUInteger)arg0 accessibilityContrast:(NSUInteger)arg1 displayRange:(NSUInteger)arg2 displayScale:(unsigned char)arg3 layoutDirection:(NSUInteger)arg4 legibilityWeight:(NSUInteger)arg5 localization:(id)arg6 preferredContentSizeCategory:(NSUInteger)arg7 tintColor:(struct CGColor *)arg8 userInterfaceIdiom:(NSUInteger)arg9 userInterfaceStyle:(NSUInteger)arg10 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)gradeWithOnlyFails:(NSUInteger)arg0 allowedLocalizations:(id)arg1 ;
-(NSUInteger)hash;
-(id)assetGlyphWithName:(id)arg0 glyphSize:(NSInteger)arg1 glyphWeight:(NSInteger)arg2 glyphPointSize:(CGFloat)arg3 ;
-(id)assetGlyphWithName:(id)arg0 glyphSize:(NSInteger)arg1 textStyle:(struct __CFString *)arg2 ;
-(id)copyWithChangeBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessibilityButtonShapes:(NSUInteger)arg0 accessibilityContrast:(NSUInteger)arg1 displayRange:(NSUInteger)arg2 displayScale:(unsigned char)arg3 layoutDirection:(NSUInteger)arg4 legibilityWeight:(NSUInteger)arg5 localization:(id)arg6 preferredContentSizeCategory:(NSUInteger)arg7 tintColor:(struct CGColor *)arg8 userInterfaceIdiom:(NSUInteger)arg9 userInterfaceStyle:(NSUInteger)arg10 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(id)arg0 ;
-(struct __CTFont *)newFontForTextStyle:(struct __CFString *)arg0 attributes:(struct __CFDictionary *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif