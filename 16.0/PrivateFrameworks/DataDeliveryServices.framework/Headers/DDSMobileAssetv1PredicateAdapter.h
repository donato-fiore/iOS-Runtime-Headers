// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSMOBILEASSETV1PREDICATEADAPTER_H
#define DDSMOBILEASSETV1PREDICATEADAPTER_H


#import <Foundation/Foundation.h>


@interface DDSMobileAssetv1PredicateAdapter : NSObject



+(id)compatibilityPredicateForCompatabilityVersion:(NSUInteger)arg0 internalInstall:(BOOL)arg1 ;
+(id)extractRegionDictFromFilter:(id)arg0 ;
+(id)predicateForAssetQuery:(id)arg0 compatiblilityVersion:(NSUInteger)arg1 ;
+(id)predicateForKey:(id)arg0 matchingAnyDictionaryIn:(id)arg1 acceptUnspecifiedValue:(BOOL)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4 ;
+(id)predicateForKey:(id)arg0 matchingAnyStringIn:(id)arg1 ;
+(id)predicateForKey:(id)arg0 matchingString:(id)arg1 ;
+(id)predicateForQuery:(id)arg0 compatibilityVersion:(NSUInteger)arg1 internalInstall:(BOOL)arg2 ;
+(id)regionKeys;


@end


#endif