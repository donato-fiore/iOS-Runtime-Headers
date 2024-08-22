// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPARAMETERUTILS_H
#define MLPARAMETERUTILS_H


#import <Foundation/Foundation.h>


@interface MLParameterUtils : NSObject



+(id)deScopeParameters:(id)arg0 byDeletingPrefixingScope:(id)arg1 ;
+(id)numberForKey:(id)arg0 inDictionary:(id)arg1 ;
+(id)objectForKey:(id)arg0 class:(Class)arg1 dictionary:(id)arg2 ;
+(id)stringForKey:(id)arg0 inDictionary:(id)arg1 ;
+(void)appendParameterDescriptions:(id)arg0 toModelDescription:(id)arg1 ;


@end


#endif