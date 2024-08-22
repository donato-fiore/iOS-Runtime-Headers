// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHMOMENTFEATURESEDGECOLLECTION_H
#define PGGRAPHMOMENTFEATURESEDGECOLLECTION_H

@class NSSet;


#import "PGGraphEdgeCollection.h"

@interface PGGraphMomentFeaturesEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) NSSet *allRelevantAssetLocalIdentifiers;
@property (readonly, nonatomic) NSSet *allRelevantAssetUUIDs;
@property (readonly) NSUInteger numberOfRelevantAssets;


+(Class)edgeClass;
+(id)momentFeaturesEdgesFromMomentNodes:(id)arg0 toFeatureNodes:(id)arg1 ;


@end


#endif