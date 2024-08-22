// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGOBFUSCATION_H
#define PGOBFUSCATION_H


#import <Foundation/Foundation.h>


@interface PGObfuscation : NSObject



+(id)obfuscatedStringFromPlaintextDate:(id)arg0 usingDateFormatter:(id)arg1 ;
+(id)obfuscatedStringFromPlaintextNumber:(id)arg0 ;
+(id)obfuscatedStringFromPlaintextString:(id)arg0 ;
+(id)plaintextDateFromObfuscatedString:(id)arg0 usingDateFormatter:(id)arg1 ;
+(id)plaintextNumberFromObfuscatedString:(id)arg0 ;
+(id)plaintextStringFromObfuscatedString:(id)arg0 ;


@end


#endif