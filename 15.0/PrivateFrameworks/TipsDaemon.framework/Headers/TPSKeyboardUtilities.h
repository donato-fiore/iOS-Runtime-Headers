// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSKEYBOARDUTILITIES_H
#define TPSKEYBOARDUTILITIES_H


#import <Foundation/Foundation.h>


@interface TPSKeyboardUtilities : NSObject



+(BOOL)isDictationEnabled;
+(BOOL)isDictationSelectedForLanguage:(id)arg0 ;
+(BOOL)isExtendedSuggestionSupportedForInputMode:(id)arg0 ;
+(BOOL)isHandwritingEnabledForInputMode:(id)arg0 ;
+(BOOL)isInputModeInstalledForLanguage:(id)arg0 ;
+(id)_variantForInputMode:(id)arg0 ;
+(id)enabledDictationLanguages;
+(id)installedInputModes;


@end


#endif