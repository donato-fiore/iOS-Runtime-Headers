// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGUPNEXTMOMENTCOLLECTIONBASEDMATCHINGINFO_H
#define PGUPNEXTMOMENTCOLLECTIONBASEDMATCHINGINFO_H

@class CLLocation, NSDate, NSString;
@protocol PGUpNextMatchingInfo;

#import <Foundation/Foundation.h>

#import "PGGraphPersonNodeCollection.h"
#import "PGGraphSceneNodeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGUpNextMomentCollectionBasedMatchingInfo : NSObject <PGUpNextMatchingInfo>

 {
    PGGraphPersonNodeCollection *_personNodes;
    PGGraphSceneNodeCollection *_sceneNodes;
    PGGraphMeaningNodeCollection *_meaningNodes;
    BOOL _isTripMemory;
    CLLocation *_representativeLocation;
    NSDate *_representativeDate;
    BOOL _isTripMemoryIsResolved;
    BOOL _representativeLocationIsResolved;
    BOOL _representativeDateIsResolved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTripMemory;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes; // ivar: _momentNodes
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) CLLocation *representativeLocation;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;


+(id)representativeDateForMomentNodes:(id)arg0 ;
+(id)representativeDateForMomentNodesUniversalDateInterval:(id)arg0 ;
+(id)representativeLocationForLocations:(id)arg0 ;
+(id)representativeLocationForMomentNodes:(id)arg0 ;
+(id)representativeMeaningNodesForEligibleMeaningNodesByMomentNode:(id)arg0 ;
+(id)representativeMeaningNodesForMomentNodes:(id)arg0 ;
+(id)representativePersonNodesForMomentNodes:(id)arg0 ;
+(id)representativePersonNodesForPersonNodesByMomentNode:(id)arg0 ;
+(id)representativeSceneNodesForMomentNodes:(id)arg0 ;
+(id)representativeSceneNodesForSceneNodesByMomentNode:(id)arg0 ;
-(BOOL)_implIsTripMemory;
-(id)initWithMomentNodes:(id)arg0 ;
-(id)initWithMomentNodes:(id)arg0 personNodes:(id)arg1 sceneNodes:(id)arg2 meaningNodes:(id)arg3 isTripMemory:(BOOL)arg4 representativeLocation:(id)arg5 representativeDate:(id)arg6 ;


@end


#endif