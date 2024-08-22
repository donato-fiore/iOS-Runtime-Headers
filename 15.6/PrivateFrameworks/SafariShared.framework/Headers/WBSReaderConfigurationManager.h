// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSREADERCONFIGURATIONMANAGER_H
#define WBSREADERCONFIGURATIONMANAGER_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "WBSReaderFontManager.h"

@interface WBSReaderConfigurationManager : NSObject {
    NSInteger _textZoomIndex;
    NSInteger _theme;
    NSInteger _darkModeTheme;
    NSMutableDictionary *_fontFamilyNameForLanguageTag;
    WBSReaderFontManager *_fontManager;
    BOOL _prefersLargerDefaultFontSize;
}


@property (readonly, nonatomic) BOOL canMakeTextBigger;
@property (readonly, nonatomic) BOOL canMakeTextSmaller;
@property (readonly, nonatomic) NSDictionary *configurationToSave;
@property (readonly, nonatomic) NSDictionary *configurationToSendToWebPage;
@property (nonatomic) BOOL darkModeEnabled; // ivar: _darkModeEnabled
@property (nonatomic) BOOL isOLEDDisplay; // ivar: _isOLEDDisplay
@property (nonatomic) BOOL javaScriptEnabled; // ivar: _javaScriptEnabled
@property (readonly, nonatomic) BOOL resettingTextSizeWouldHaveEffect;


-(NSInteger)_defaultTextZoomIndex;
-(NSInteger)_defaultThemeForAppearance:(NSInteger)arg0 ;
-(NSInteger)_effectiveTextZoomIndex;
-(NSInteger)themeForAppearance:(NSInteger)arg0 ;
-(id)fontForLanguageTag:(id)arg0 ;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg0 fontManager:(id)arg1 ;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg0 fontManager:(id)arg1 prefersLargerDefaultFontSize:(BOOL)arg2 ;
-(void)_migrateToVersion5IfNecessary;
-(void)makeTextBigger;
-(void)makeTextSmaller;
-(void)resetTextSize;
-(void)setFont:(id)arg0 forLanguageTag:(id)arg1 ;
-(void)setTheme:(NSInteger)arg0 forAppearance:(NSInteger)arg1 ;


@end


#endif