// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKANNOTATIONTHEME_H
#define AKANNOTATIONTHEME_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface AKAnnotationTheme : NSObject

@property (readonly, nonatomic) int annotationStyle;
@property (readonly, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) BOOL isUnderline;
@property (readonly, nonatomic) UIColor *noteBorderColor;
@property (readonly, nonatomic) UIColor *noteFillColor;
@property (readonly, nonatomic) UIColor *noteMarkerBorderColor;
@property (readonly, nonatomic) UIColor *noteMarkerFillColor;
@property (readonly, nonatomic) UIColor *noteMarkerStrikethroughColor;
@property (readonly, nonatomic) UIColor *noteShadowColor;
@property (readonly, nonatomic) CGSize noteShadowOffset;
@property (readonly, nonatomic) CGFloat noteShadowOpacity;
@property (readonly, nonatomic) CGFloat noteShadowRadius;
@property (readonly, nonatomic) UIColor *noteTextColor;
@property (readonly, nonatomic) UIFont *noteTextFont;
@property (readonly, nonatomic) UIFont *noteTextFontInTable;
@property (readonly, nonatomic) UIColor *notesSidebarBarColor;
@property (readonly, nonatomic) UIColor *notesSidebarTextColor;
@property (nonatomic) int pageTheme; // ivar: _pageTheme


+(id)blueTheme:(int)arg0 ;
+(id)colorForAnnotationStyle:(int)arg0 propertyName:(id)arg1 pageTheme:(int)arg2 ;
+(id)colorForThemeItem:(id)arg0 pageTheme:(int)arg1 ;
+(id)greenTheme:(int)arg0 ;
+(id)highlightTextColor:(int)arg0 ;
+(id)pinkTheme:(int)arg0 ;
+(id)purpleTheme:(int)arg0 ;
+(id)theme:(int)arg0 ;
+(id)themeDescriptions;
+(id)themeForAnnotationStyle:(int)arg0 pageTheme:(int)arg1 ;
+(id)themeForAnnotationStyle:(int)arg0 pageTheme:(int)arg1 isUnderline:(BOOL)arg2 ;
+(id)themeItemForAnnotationStyle:(int)arg0 propertyName:(id)arg1 ;
+(id)underlineTheme:(int)arg0 ;
+(id)yellowTheme:(int)arg0 ;


@end


#endif