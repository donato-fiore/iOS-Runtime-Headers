// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGASSETCOLLECTIONFEATUREINSTANCE_H
#define PGASSETCOLLECTIONFEATUREINSTANCE_H


#import <Foundation/Foundation.h>

#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNode.h"
#import "PGAssetCollectionFeatureSpecification.h"

@interface PGAssetCollectionFeatureInstance : NSObject

@property (readonly) PGGraphFeatureNodeCollection *featureNodes; // ivar: _featureNodes
@property (readonly) PGGraphMomentNode *momentNode; // ivar: _momentNode
@property (readonly) PGAssetCollectionFeatureSpecification *specification; // ivar: _specification


-(id)initWithSpecification:(id)arg0 momentNode:(id)arg1 ;
-(id)initWithSpecification:(id)arg0 momentNode:(id)arg1 featureNodes:(id)arg2 ;


@end


#endif