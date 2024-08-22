// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPASSPHRASESTRATEGYUTILITIES_H
#define ICPASSPHRASESTRATEGYUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICPassphraseStrategyUtilities : NSObject



+(BOOL)canKey:(id)arg0 decryptObject:(id)arg1 ;
+(BOOL)hasPassphraseSetForObject:(id)arg0 ;
+(BOOL)isPassphraseCorrect:(id)arg0 forObject:(id)arg1 usingKeysFromObject:(id)arg2 ;
+(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 forAccount:(id)arg2 rewrapNoteBlock:(id)arg3 ;


@end


#endif