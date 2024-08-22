// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADGRAPHICFEATURECACHE_H
#define OADGRAPHICFEATURECACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "OITSUNoCopyDictionary.h"

@interface OADGraphicFeatureCache : NSObject {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}




-(NSUInteger)cacheFeature:(id)arg0 ;
-(id)countedFeatureAtIndex:(NSUInteger)arg0 ;
-(id)featuresSortedByUsageCount;
-(id)init;
-(void)dealloc;


@end


#endif