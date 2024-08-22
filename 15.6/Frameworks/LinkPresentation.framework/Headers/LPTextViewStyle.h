// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPTEXTVIEWSTYLE_H
#define LPTEXTVIEWSTYLE_H

@class UIColor, NSString, UIFont;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPGlyphStyle.h"
#import "LPPadding.h"

@interface LPTextViewStyle : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *compositingFilter; // ivar: _compositingFilter
@property (retain, nonatomic) LPPointUnit *firstLineLeading; // ivar: _firstLineLeading
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat fontScalingFactor; // ivar: _fontScalingFactor
@property (retain, nonatomic) LPPointUnit *lastLineDescent; // ivar: _lastLineDescent
@property (retain, nonatomic) LPGlyphStyle *leadingGlyph; // ivar: _leadingGlyph
@property (nonatomic) unsigned int maximumCharacters; // ivar: _maximumCharacters
@property (nonatomic) unsigned int maximumLines; // ivar: _maximumLines
@property (readonly, retain, nonatomic) LPPadding *padding; // ivar: _padding
@property (retain, nonatomic) LPPointUnit *paragraphSpacing; // ivar: _paragraphSpacing
@property (nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType; // ivar: _shouldScaleMaximumLinesWithDynamicType
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(id)adjustedForString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPlatform:(NSInteger)arg0 fontScalingFactor:(CGFloat)arg1 ;
-(void)_adjustForString:(id)arg0 ;


@end


#endif