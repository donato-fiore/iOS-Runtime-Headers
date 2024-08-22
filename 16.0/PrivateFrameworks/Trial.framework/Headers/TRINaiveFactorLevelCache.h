// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRINAIVEFACTORLEVELCACHE_H
#define TRINAIVEFACTORLEVELCACHE_H

@class NSDictionary;
@protocol TRIFactorLevelCaching;

#import <Foundation/Foundation.h>


@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching>

 {
    NSDictionary *_factorLevels;
}




-(id)init;
-(id)initWithFactorLevels:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateFactorLevelsUsingBlock:(id)arg0 ;


@end


#endif