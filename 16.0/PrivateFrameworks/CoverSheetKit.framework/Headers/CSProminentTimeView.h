// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPROMINENTTIMEVIEW_H
#define CSPROMINENTTIMEVIEW_H

@class UIFont, NSString, NSDateFormatter;


#import "CSProminentTextElementView.h"

@interface CSProminentTimeView : CSProminentTextElementView

@property (retain, nonatomic) UIFont *baseFont; // ivar: _baseFont
@property (copy, nonatomic) NSString *numberingSystem; // ivar: _numberingSystem
@property (retain, nonatomic) NSDateFormatter *timeFormatter; // ivar: _timeFormatter
@property (nonatomic) BOOL usesLandscapeTimeFontVariant; // ivar: _usesLandscapeTimeFontVariant
@property (nonatomic) BOOL usesLightTimeFontVariant; // ivar: _usesLightTimeFontVariant


+(NSUInteger)elementType;
+(id)_lightVariantForBaseFont:(id)arg0 size:(CGFloat)arg1 ;
+(id)_prominentFontFromBaseFont:(id)arg0 usingLightVariant:(BOOL)arg1 usingLandscapeVariant:(BOOL)arg2 ;
-(BOOL)_isLandscape;
-(id)_correctedDateFormat;
-(id)_localeAccountingForNumberingSystem:(BOOL)arg0 ;
-(id)_timeString;
-(id)initWithDate:(id)arg0 baseFont:(id)arg1 textColor:(id)arg2 ;
-(id)initWithDate:(id)arg0 font:(id)arg1 textColor:(id)arg2 ;
-(void)_updateTimeFormatter;
-(void)_updateTimeFormatterNumberingSystem;
-(void)_updateTimeString;
-(void)currentLocaleDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setDate:(id)arg0 ;


@end


#endif