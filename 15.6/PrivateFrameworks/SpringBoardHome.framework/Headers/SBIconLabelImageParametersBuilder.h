// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLABELIMAGEPARAMETERSBUILDER_H
#define SBICONLABELIMAGEPARAMETERSBUILDER_H

@class NSString, UIColor, UIFont, _UILegibilitySettings;
@protocol SBIconListLayoutProvider;

#import <Foundation/Foundation.h>

#import "SBIcon.h"
#import "SBIconView.h"

@interface SBIconLabelImageParametersBuilder : NSObject {
    BOOL _hasSetTextInsets;
}


@property (nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled; // ivar: _accessibilityReduceTransparencyEnabled
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (retain, nonatomic) UIColor *focusHighlightColor; // ivar: _focusHighlightColor
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) SBIcon *icon; // ivar: _icon
@property (readonly, nonatomic) CGSize iconImageSize;
@property (readonly, nonatomic) NSString *iconLocation; // ivar: _iconLocation
@property (retain, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) Class iconViewClass; // ivar: _iconViewClass
@property (nonatomic) NSInteger labelAccessoryType; // ivar: _labelAccessoryType
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (retain, nonatomic) NSString *overrideText; // ivar: _overrideText
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) UIEdgeInsets textInsets; // ivar: _textInsets


+(CGFloat)_normalFontSizeForSizeParameter:(NSInteger)arg0 ;
+(NSInteger)_fontSizeParameterForContentSizeCategory:(id)arg0 ;
+(id)defaultFontForContentSizeCategory:(id)arg0 languageInsets:(struct UIEdgeInsets *)arg1 ;
+(struct UIEdgeInsets )insetsForFont:(id)arg0 ;
-(BOOL)_canTightenLabel;
-(BOOL)_canTruncateLabel;
-(BOOL)_hasValidInputs;
-(id)_fontWithLanguageInsets:(struct UIEdgeInsets *)arg0 ;
-(id)buildParameters;
-(id)init;
-(id)listLayout;
-(struct CGSize )_maxSize;


@end


#endif