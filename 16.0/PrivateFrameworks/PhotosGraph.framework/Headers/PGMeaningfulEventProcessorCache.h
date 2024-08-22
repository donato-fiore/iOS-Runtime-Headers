// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGFULEVENTPROCESSORCACHE_H
#define PGMEANINGFULEVENTPROCESSORCACHE_H

@class MABinaryAdjacency;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNodeCollection.h"

@interface PGMeaningfulEventProcessorCache : NSObject {
    os_unfair_lock_s _lock;
    MABinaryAdjacency *_sceneNodesByMomentNode;
    MABinaryAdjacency *_reliableSceneNodesByMomentNode;
    MABinaryAdjacency *_poiNodesByMomentNode;
    MABinaryAdjacency *_roiNodesByMomentNode;
    MABinaryAdjacency *_addressNodesByMomentNode;
    MABinaryAdjacency *_preciseAddressNodesByMomentNode;
    MABinaryAdjacency *_dateNodesByMomentNode;
    MABinaryAdjacency *_personNodesByMomentNode;
    MABinaryAdjacency *_socialGroupNodesByMomentNode;
    MABinaryAdjacency *_publicEventCategoryNodesByMomentNode;
    MABinaryAdjacency *_partOfDayNodesByMomentNode;
    MABinaryAdjacency *_significantPartOfDayNodesByMomentNode;
    MABinaryAdjacency *_mobilityNodesByMomentNode;
}


@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes; // ivar: _momentNodes


-(NSUInteger)partsOfDayForMomentNodes:(id)arg0 ;
-(NSUInteger)significantPartsOfDayForMomentNodes:(id)arg0 ;
-(id)addressNodesForMomentNodes:(id)arg0 ;
-(id)dateNodesForMomentNodes:(id)arg0 ;
-(id)initWithMomentNodes:(id)arg0 ;
-(id)mobilityNodesForMomentNodes:(id)arg0 ;
-(id)peopleNodesForMomentNodes:(id)arg0 ;
-(id)poiNodesWithNonzeroConfidenceForMomentNodes:(id)arg0 ;
-(id)preciseAddressNodesForMomentNodes:(id)arg0 ;
-(id)publicEventCategoryNodesForMomentNodes:(id)arg0 ;
-(id)reliableSceneNodesForMomentNodes:(id)arg0 ;
-(id)roiNodesWithNonzeroConfidenceForMomentNodes:(id)arg0 ;
-(id)sceneNodesForMomentNodes:(id)arg0 ;
-(id)socialGroupNodesForMomentNodes:(id)arg0 ;


@end


#endif