// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGCRITERIAMOMENTNODECACHE_H
#define PGMEANINGCRITERIAMOMENTNODECACHE_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNode.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphMeNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphPublicEventCategoryNodeCollection.h"

@interface PGMeaningCriteriaMomentNodeCache : NSObject {
    PGGraphMomentNode *_momentNode;
    NSArray *_sceneEdges;
    PGGraphMomentNodeCollection *_momentNodeAsCollection;
    PGGraphMeNodeCollection *_meNodeAsCollection;
    PGGraphAddressNodeCollection *_preciseAddressNodeCollection;
    char _hasAddressNodes;
    char _happensPartiallyAtMyHome;
    char _happensPartiallyAtMyWork;
    char _happensAtFrequentLocation;
    char _happensPartiallyAtMyHomeOrWork;
    NSUInteger _partsOfDay;
    NSUInteger _significantPartsOfDay;
}


@property (readonly) BOOL happensAtFrequentLocation;
@property (readonly) BOOL happensPartiallyAtMyHome;
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork;
@property (readonly) BOOL happensPartiallyAtMyWork;
@property (readonly) BOOL hasAddressNodes;
@property (readonly) NSUInteger partsOfDay;
@property (readonly) NSSet *personNodes; // ivar: _personNodes
@property (readonly) NSSet *poiNodes; // ivar: _poiNodes
@property (readonly) NSSet *preciseAddressNodes; // ivar: _preciseAddressNodes
@property (readonly) NSSet *preciseAreaNodes; // ivar: _preciseAreaNodes
@property (readonly) PGGraphPublicEventCategoryNodeCollection *publicEventCategoryNodes; // ivar: _publicEventCategoryNodes
@property (readonly) NSSet *roiNodes; // ivar: _roiNodes
@property (readonly) NSUInteger significantPartsOfDay;
@property (readonly) NSSet *specialPOINodes; // ivar: _specialPOINodes


-(id)initWithMomentNode:(id)arg0 ;
-(id)preciseAddressNodeCollection;
-(void)_computeHomeWork;
-(void)enumerateSceneEdgesAndNodesUsingBlock:(id)arg0 ;


@end


#endif