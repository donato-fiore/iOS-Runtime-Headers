// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POKEYCHAINHELPER_H
#define POKEYCHAINHELPER_H


#import <Foundation/Foundation.h>


@interface POKeychainHelper : NSObject



-(int)addTokens:(id)arg0 metaData:(id)arg1 toKeychainForService:(id)arg2 username:(id)arg3 ;
-(int)removeTokensFromKeychainWithService:(id)arg0 username:(id)arg1 ;
-(int)retrieveTokensFromKeychainForService:(id)arg0 username:(id)arg1 returningTokens:(*id)arg2 metaData:(*id)arg3 ;


@end


#endif