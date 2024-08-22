// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMOMENTFEATURESEDGE_H
#define PGGRAPHMOMENTFEATURESEDGE_H

@class NSString;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphMomentFeaturesEdge : PGGraphOptimizedEdge {
    NSString *_allAssetUUIDs;
    BOOL _numberOfRelevantAssets;
}




+(id)filter;
+(id)relevantAssetUUIDsFromAllAssetUUIDs:(id)arg0 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initFromMomentNode:(id)arg0 toFeatureNode:(id)arg1 numberOfRelevantAssets:(NSUInteger)arg2 allAssetUUIDs:(id)arg3 ;
-(id)initFromMomentNode:(id)arg0 toFeatureNode:(id)arg1 numberOfRelevantAssets:(NSUInteger)arg2 relevantAssetUUIDs:(id)arg3 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif