// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGUPNEXTHIGHLIGHTBASEDMATCHINGINFO_H
#define PGUPNEXTHIGHLIGHTBASEDMATCHINGINFO_H

@class NSString, NSDate, CLLocation;
@protocol PGUpNextMatchingTarget;


#import "PGUpNextMomentCollectionBasedMatchingInfo.h"
#import "PGGraphHighlightNodeCollection.h"
#import "PGGraphMeaningNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphSceneNodeCollection.h"

@interface PGUpNextHighlightBasedMatchingInfo : PGUpNextMomentCollectionBasedMatchingInfo <PGUpNextMatchingTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodeAsCollection; // ivar: _highlightNodeAsCollection
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


+(id)matchingInfosWithHighlightNodes:(id)arg0 ;
-(id)initWithHighlightNodeAsCollection:(id)arg0 ;
-(id)initWithHighlightNodeAsCollection:(id)arg0 momentNodes:(id)arg1 ;


@end


#endif