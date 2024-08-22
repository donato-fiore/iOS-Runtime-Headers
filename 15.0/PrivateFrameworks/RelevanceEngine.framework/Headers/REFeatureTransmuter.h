// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REFEATURETRANSMUTER_H
#define REFEATURETRANSMUTER_H

@class NSArray, NSMutableOrderedSet, NSLock;

#import <Foundation/Foundation.h>

#import "REFeatureSet.h"
#import "REFeatureMapGenerator.h"
#import "REFeatureMap.h"

@interface REFeatureTransmuter : NSObject {
    REFeatureSet *_inputSet;
    REFeatureSet *_outputSet;
    NSArray *_orderedFeatures;
    REFeatureMapGenerator *_orderedFeatureMapGenerator;
    REFeatureMap *_scratchValues;
    *NSUInteger _scratchTaggedValues;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    NSMutableOrderedSet *_featureValuesCache;
    NSLock *_featureValuesCacheLock;
}


@property (readonly, nonatomic) REFeatureSet *inputFeatures;
@property (readonly, nonatomic) REFeatureSet *outputFeatures;


-(BOOL)_supportedFeature:(id)arg0 ;
-(id)_buildGraph;
-(id)initWithInputFeatures:(id)arg0 outputFeatures:(id)arg1 outputFeatureMapGenerator:(id)arg2 ;
-(id)transformFeatureMaps:(id)arg0 ;
-(void)dealloc;


@end


#endif