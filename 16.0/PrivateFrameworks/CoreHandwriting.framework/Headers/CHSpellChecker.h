// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSPELLCHECKER_H
#define CHSPELLCHECKER_H

@class AppleSpell;

#import <Foundation/Foundation.h>

#import "CHSpellCheckerErrorModel.h"

@interface CHSpellChecker : NSObject {
    AppleSpell *_spellServer;
}


@property (retain, nonatomic) CHSpellCheckerErrorModel *errorModel; // ivar: _errorModel


+(id)newErrorModel;
+(id)sharedSpellServer;
-(BOOL)isWordInUserDictionaries:(id)arg0 caseSensitive:(BOOL)arg1 ;
-(id)correctionsForString:(id)arg0 shouldUseErrorModel:(BOOL)arg1 forLocale:(id)arg2 ;
-(id)init;
-(id)topCorrectionForString:(id)arg0 contextBeforeToken:(id)arg1 contextSeparator:(id)arg2 shouldUseErrorModel:(BOOL)arg3 forLanguage:(id)arg4 ;


@end


#endif