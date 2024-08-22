// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSSETTINGSHELPER_H
#define VOSSETTINGSHELPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VOSSettingsHelper : NSObject

@property (retain, nonatomic) NSArray *enabledLanguageCodes; // ivar: _enabledLanguageCodes
@property (nonatomic, getter=isSlideToTypeEnabled) BOOL slideToTypeEnabled;


+(id)activitiesFormatter:(SEL)arg0 ;
+(id)brailleInputOutputFormatter:(SEL)arg0 ;
+(id)brailleTableFormatter:(SEL)arg0 ;
+(id)durationFormatter:(SEL)arg0 ;
+(id)gestureDirectionFormatter:(SEL)arg0 ;
+(id)languageFormatterForEnabledLanguageCodes:(SEL)arg0 ;
+(id)mediaDescriptionsFormatter:(SEL)arg0 ;
+(id)navigateImagesFormatter:(SEL)arg0 ;
+(id)navigationStyleFormatter:(SEL)arg0 ;
+(id)percentageFormatter:(SEL)arg0 ;
+(id)phoneticFeedbackFormatter:(SEL)arg0 ;
+(id)punctuationFormatter:(SEL)arg0 ;
+(id)sharedInstance;
+(id)typingFeedbackFormatter:(SEL)arg0 ;
+(id)typingStyleFormatter:(SEL)arg0 ;
-(BOOL)isItemSupported:(id)arg0 ;
-(id)_formatterForItem:(SEL)arg0 ;
-(id)_init;
-(id)formattedValue:(id)arg0 withItem:(id)arg1 ;
-(id)identifierForItem:(id)arg0 ;
-(id)nameForItem:(id)arg0 ;
-(id)possibleValuesForSettingsItem:(id)arg0 ;
-(id)scaledValue:(id)arg0 withItem:(id)arg1 ;
-(id)userSettingsItems;
-(id)valueForSettingsItem:(id)arg0 ;
-(void)saveUserSettingsItems:(id)arg0 ;
-(void)setNextValueForItem:(id)arg0 inDirection:(NSInteger)arg1 ;
-(void)setValue:(id)arg0 forSettingsItem:(id)arg1 ;


@end


#endif