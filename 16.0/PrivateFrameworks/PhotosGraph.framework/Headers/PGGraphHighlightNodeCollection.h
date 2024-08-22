// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHHIGHLIGHTNODECOLLECTION_H
#define PGGRAPHHIGHLIGHTNODECOLLECTION_H

@class NSString, NSSet;
@protocol PGGraphEventCollection, PGGraphScenedEventCollection, PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphHighlightGroupNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphHighlightNodeCollection.h"

@interface PGGraphHighlightNodeCollection : PGGraphNodeCollection <PGGraphEventCollection, PGGraphScenedEventCollection, PGAssetCollectionFeatureNodeCollection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *subsetWithBothPrivateAndSharedAssets;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *subsetWithPrivateAssets;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *subsetWithSharedAssets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *uuids;


+(Class)nodeClass;
+(id)dayHighlightNodesInGraph:(id)arg0 ;
+(id)highlightNodeAsCollectionByHighlightUUIDForArrayOfHighlightUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)highlightNodeAsCollectionByHighlightUUIDForHighlightUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)highlightNodeForUUID:(id)arg0 inGraph:(id)arg1 ;
+(id)highlightNodesForArrayOfUUIDs:(id)arg0 inGraph:(id)arg1 ;
+(id)highlightNodesForUUIDs:(id)arg0 inGraph:(id)arg1 ;
-(id)eventMomentNodes;
-(id)highConfidenceSceneNodes;
-(id)highlightNodeAsCollectionByHighlightUUID;
-(id)highlightNodeByHighlightUUID;
-(id)sceneNodes;
-(id)searchConfidenceSceneNodes;
-(void)enumerateUUIDs:(id)arg0 ;


@end


#endif