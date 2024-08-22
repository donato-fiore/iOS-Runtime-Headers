// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGUPNEXTMEMORYBASEDMATCHINGINFO_H
#define PGUPNEXTMEMORYBASEDMATCHINGINFO_H

@class NSString, NSDate, CLLocation;
@protocol PGUpNextMatchingTarget;


#import "PGUpNextMomentCollectionBasedMatchingInfo.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphMemoryNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphSceneNodeCollection.h"

@interface PGUpNextMemoryBasedMatchingInfo : PGUpNextMomentCollectionBasedMatchingInfo <PGUpNextMatchingTarget>

 {
    PGGraphFeatureNodeCollection *_memoryFeatureNodes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTripMemory;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) PGGraphMemoryNodeCollection *memoryNodeAsCollection; // ivar: _memoryNodeAsCollection
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) NSUInteger nodeIdentifier;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) CLLocation *representativeLocation;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;


+(id)matchingInfosWithMemoryNodes:(id)arg0 ;
-(BOOL)_implIsTripMemory;
-(id)initWithMemoryNodeAsCollection:(id)arg0 ;
-(id)initWithMemoryNodeAsCollection:(id)arg0 momentNodes:(id)arg1 ;
-(id)initWithMemoryNodeAsCollection:(id)arg0 momentNodes:(id)arg1 personNodes:(id)arg2 sceneNodes:(id)arg3 meaningNodes:(id)arg4 isTripMemory:(BOOL)arg5 representativeLocation:(id)arg6 representativeDate:(id)arg7 memoryFeatureNodes:(id)arg8 ;


@end


#endif