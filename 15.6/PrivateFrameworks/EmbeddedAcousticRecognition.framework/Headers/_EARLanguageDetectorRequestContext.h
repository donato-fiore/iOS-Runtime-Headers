// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARLANGUAGEDETECTORREQUESTCONTEXT_H
#define _EARLANGUAGEDETECTORREQUESTCONTEXT_H

@class NSString, NSDictionary, NSSet, NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARLanguageDetectorRequestContext : NSObject <NSCopying>



@property ? LDContext;
@property (copy, nonatomic) NSString *currentDictationLanguage; // ivar: _currentDictationLanguage
@property (copy, nonatomic) NSDictionary *dictationLanguagePriors; // ivar: _dictationLanguagePriors
@property (copy, nonatomic) NSSet *dictationLanguages; // ivar: _dictationLanguages
@property (copy, nonatomic) NSString *globalLastKeyboardUsed; // ivar: _globalLastKeyboardUsed
@property (copy, nonatomic) NSDictionary *keyboardConvoLanguagePriors; // ivar: _keyboardConvoLanguagePriors
@property (copy, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // ivar: _keyboardGlobalLanguagePriors
@property (copy, nonatomic) NSDictionary *languagePriors; // ivar: _languagePriors
@property (copy, nonatomic) NSArray *multilingualKeyboardLanguages; // ivar: _multilingualKeyboardLanguages
@property (copy, nonatomic) NSString *previousMessageLanguage; // ivar: _previousMessageLanguage
@property (copy, nonatomic) NSArray *recentMessages; // ivar: _recentMessages
@property (copy, nonatomic) NSNumber *wasLanguageToggled; // ivar: _wasLanguageToggled


+(id)contextFromLDContext:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif