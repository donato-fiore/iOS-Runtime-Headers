// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDMEMORYBASEDPROVIDER_H
#define AMDMEMORYBASEDPROVIDER_H

@class NSMutableDictionary;


#import "AMDFeatureProvider.h"

@interface AMDMemoryBasedProvider : AMDFeatureProvider

@property (retain, nonatomic) NSMutableDictionary *featureStore; // ivar: _featureStore


+(BOOL)isValidFeatureObject:(id)arg0 ;
+(BOOL)isValidMultiArray:(id)arg0 ;
+(id)sharedProvider;
-(id)getFeatureWithName:(id)arg0 error:(*id)arg1 ;
-(void)storeFeatureData:(id)arg0 error:(*id)arg1 ;


@end


#endif