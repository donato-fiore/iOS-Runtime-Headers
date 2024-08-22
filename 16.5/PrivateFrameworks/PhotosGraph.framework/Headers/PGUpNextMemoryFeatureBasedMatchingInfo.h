// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGUPNEXTMEMORYFEATUREBASEDMATCHINGINFO_H
#define PGUPNEXTMEMORYFEATUREBASEDMATCHINGINFO_H

@class NSString, NSDate, CLLocation;
@protocol PGUpNextMatchingTarget;

#import <Foundation/Foundation.h>

#import "PGGraphMemoryNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphSceneNodeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGUpNextMemoryFeatureBasedMatchingInfo : NSObject <PGUpNextMatchingTarget>

 {
    PGGraphMemoryNodeCollection *_memoryNodeAsCollection;
    PGGraphFeatureNodeCollection *_memoryFeatureNodes;
    PGGraphPersonNodeCollection *_personNodes;
    PGGraphSceneNodeCollection *_sceneNodes;
    BOOL _isTripMemory;
    BOOL _isTripMemoryIsResolved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTripMemory;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *meaningNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) NSUInteger nodeIdentifier;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) CLLocation *representativeLocation;
@property (readonly, nonatomic) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;


+(id)matchingInfosWithMemoryNodes:(id)arg0 ;
+(id)representativeSceneNodesForMemoryFeatureNodes:(id)arg0 ;
-(id)initWithMemoryNodeAsCollection:(id)arg0 ;


@end


#endif