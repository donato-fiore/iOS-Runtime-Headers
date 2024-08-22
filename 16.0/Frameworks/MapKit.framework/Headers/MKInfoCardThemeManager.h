// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKINFOCARDTHEMEMANAGER_H
#define MKINFOCARDTHEMEMANAGER_H

@class NSDictionary, UIColor, NSString;
@protocol MKInfoCardTheme;

#import <Foundation/Foundation.h>


@interface MKInfoCardThemeManager : NSObject <MKInfoCardTheme>

 {
    BOOL _themeWasExplicitySet;
    NSDictionary *_colors;
    id *_tintColorProvider;
}


@property (readonly, nonatomic) UIColor *buttonHighlightedColor;
@property (readonly, nonatomic) UIColor *buttonNormalColor;
@property (readonly, nonatomic) UIColor *cardBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *disabledActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *disabledActionRowTextColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonHighlightedColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonNormalColor;
@property (readonly, nonatomic) UIColor *highlightedTintColor;
@property (readonly, nonatomic) BOOL isDarkTheme;
@property (readonly, nonatomic) NSString *javaScriptName;
@property (readonly, nonatomic) UIColor *lightTextColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundPressedColor;
@property (readonly, nonatomic) UIColor *normalBackgroundColor;
@property (readonly, nonatomic) UIColor *ratingBarBackgroundColor;
@property (readonly, nonatomic) UIColor *ratingBarEndColor;
@property (readonly, nonatomic) UIColor *ratingBarStartColor;
@property (readonly, nonatomic) UIColor *rowColor;
@property (readonly, nonatomic) UIColor *selectedRowColor;
@property (readonly, nonatomic) UIColor *separatorLineColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tertiaryTextColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSUInteger themeType; // ivar: _themeType
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *transitChevronBackgroundColor;
@property (readonly, nonatomic) UIColor *transitDelayedTextColor;
@property (readonly, nonatomic) UIColor *transitIncidentBackgroundColor;
@property (readonly, nonatomic) UIColor *transitOntimeTextColor;
@property (nonatomic) BOOL useSmallFont; // ivar: _useSmallFont


+(id)currentTheme;
+(id)themeWithThemeType:(NSUInteger)arg0 ;
+(void)setTheme:(NSUInteger)arg0 ;
-(BOOL)_isInSpotlightContext;
-(NSUInteger)_currentSystemTheme;
-(id)_initWithThemeType:(NSUInteger)arg0 ;
-(id)init;
-(void)_setTheme:(NSUInteger)arg0 ;


@end


#endif