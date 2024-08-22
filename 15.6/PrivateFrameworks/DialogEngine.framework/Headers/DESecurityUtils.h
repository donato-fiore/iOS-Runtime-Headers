// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESECURITYUTILS_H
#define DESECURITYUTILS_H


#import <Foundation/Foundation.h>


@interface DESecurityUtils : NSObject



+(BOOL)verify:(id)arg0 expected:(id)arg1 publicKey:(id)arg2 ;
+(id)getKeyFromData:(id)arg0 ;
+(id)getRandomIV;
+(id)getRandomKey;
+(id)randomDataOfLength:(NSUInteger)arg0 ;
+(id)sign:(id)arg0 privateKey:(id)arg1 ;


@end


#endif