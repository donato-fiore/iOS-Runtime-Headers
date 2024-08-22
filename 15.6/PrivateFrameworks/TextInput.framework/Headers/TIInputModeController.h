// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIINPUTMODECONTROLLER_H
#define TIINPUTMODECONTROLLER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TIInputModeController : NSObject {
    NSArray *_supportedInputModeIdentifiers;
    NSArray *_supportedInputModeLanguageAndRegions;
}


@property (copy, nonatomic) NSString *currentLocale; // ivar: currentLocale
@property (copy, nonatomic) NSArray *defaultInputModes; // ivar: defaultInputModes
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (copy, nonatomic) NSArray *enabledInputModes; // ivar: enabledInputModes
@property (copy, nonatomic) NSArray *inputModesForTesting; // ivar: inputModesForTesting
@property (copy, nonatomic) NSArray *preferredLanguages; // ivar: preferredLanguages
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (readonly) NSArray *supportedInputModeLanguageAndRegions;


+(id)_inputModesForLocale:(id)arg0 language:(id)arg1 modeFetcher:(id)arg2 ;
+(id)sharedInputModeController;
-(BOOL)identifierIsValidSystemInputMode:(id)arg0 ;
-(id)defaultDictationLanguagesForKeyboardLanguage:(id)arg0 ;
-(id)defaultEnabledInputModesForCurrentLocale;
-(id)suggestedDictationLanguageForDeviceLanguage;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(void)setInputModeIdentifiersForTesting:(id)arg0 ;


@end


#endif