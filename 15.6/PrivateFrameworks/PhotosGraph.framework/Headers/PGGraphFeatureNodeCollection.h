// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHFEATURENODECOLLECTION_H
#define PGGRAPHFEATURENODECOLLECTION_H

@class NSSet;


#import "PGGraphNodeCollection.h"
#import "PGGraphMemoryNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGGraphFeatureNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) NSSet *featureIdentifiers;
@property (readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;


+(id)featureNodeCollectionWithCollection:(id)arg0 ;
+(id)featureNodeCollectionWithFeatures:(id)arg0 inGraph:(id)arg1 ;
+(id)memoryOfFeature;
+(id)momentOfFeature;
-(id)allFeatures;


@end


#endif