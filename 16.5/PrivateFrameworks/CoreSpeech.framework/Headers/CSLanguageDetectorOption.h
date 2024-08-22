// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLANGUAGEDETECTOROPTION_H
#define CSLANGUAGEDETECTOROPTION_H

@class NSArray, NSString, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface CSLanguageDetectorOption : NSObject

@property (retain, nonatomic) NSArray *conversationalMessages; // ivar: _conversationalMessages
@property (retain, nonatomic) NSString *currentKeyboard; // ivar: _currentKeyboard
@property (retain, nonatomic) NSDictionary *dictationLanguagePriors; // ivar: _dictationLanguagePriors
@property (retain, nonatomic) NSSet *dictationLanguages; // ivar: _dictationLanguages
@property (retain, nonatomic) NSString *globalLastKeyboardUsed; // ivar: _globalLastKeyboardUsed
@property (retain, nonatomic) NSDictionary *keyboardConvoLanguagePriors; // ivar: _keyboardConvoLanguagePriors
@property (retain, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // ivar: _keyboardGlobalLanguagePriors
@property (retain, nonatomic) NSArray *multilingualKeyboardLanguages; // ivar: _multilingualKeyboardLanguages
@property (retain, nonatomic) NSString *previousMessageLanguage; // ivar: _previousMessageLanguage
@property (nonatomic) float samplingRate; // ivar: _samplingRate
@property (nonatomic) BOOL wasLanguageToggled; // ivar: _wasLanguageToggled


-(id)languageDetectorRequestContext;


@end


#endif