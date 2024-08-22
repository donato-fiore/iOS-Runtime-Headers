// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEPROVIDER_H
#define RERELEVANCEPROVIDER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RERelevanceProviderEnvironment.h"

@interface RERelevanceProvider : NSObject <NSCopying>

 {
    NSUInteger _cachedHash;
    NSUInteger _priority;
    RERelevanceProviderEnvironment *_environment;
}




+(id)customRelevanceProviderForFeature:(id)arg0 withValue:(id)arg1 ;
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(NSUInteger)hash;
-(NSUInteger)relevancePriority;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryEncoding;
-(id)environment;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)providerWithPriority:(NSUInteger)arg0 ;
-(void)setEnvironment:(id)arg0 ;


@end


#endif