// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPERSONNODECOLLECTION_H
#define PGGRAPHPERSONNODECOLLECTION_H

@class NSString, NSSet;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphHomeWorkNodeCollection.h"
#import "PGGraphRelationshipEdgeCollection.h"
#import "PGGraphSocialGroupNodeCollection.h"

@interface PGGraphPersonNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphPersonNodeCollection *acquaintancePersonNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *authoredMomentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *brotherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *childPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *coworkerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *daughterPersonNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *familyPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *fatherPersonNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *friendPersonNodes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeOrWorkNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredAcquaintancePersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredBrotherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredChildPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredCoworkerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredDaughterPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredFamilyPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredFatherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredFriendPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredMotherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredParentPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredPartnerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredSisterPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredSonPersonNodes;
@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithPresence;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *motherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *parentPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *partnerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *relatedPersonNodes;
@property (readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipEdges;
@property (readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipInEdges;
@property (readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipOutEdges;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *sisterPersonNodes;
@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *socialGroupNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *sonPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *subsetExcludingMe;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *uuids;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *workNodes;


+(Class)nodeClass;
+(id)favoritedPersonNodesExcludingMeInGraph:(id)arg0 ;
+(id)favoritedPersonNodesIncludingMeInGraph:(id)arg0 ;
+(id)namedPersonNodesInGraph:(id)arg0 ;
+(id)personNodesExcludingMeInGraph:(id)arg0 ;
+(id)personNodesForArrayOfLocalIdentifiers:(id)arg0 inGraph:(id)arg1 ;
+(id)personNodesForContactIdentifiers:(id)arg0 inGraph:(id)arg1 ;
+(id)personNodesForLocalIdentifier:(id)arg0 inGraph:(id)arg1 ;
+(id)personNodesForLocalIdentifiers:(id)arg0 inGraph:(id)arg1 ;
+(id)personNodesForShareParticipantIdentifiers:(id)arg0 inGraph:(id)arg1 ;
+(id)personNodesForSharedLibraryParticipantsInGraph:(id)arg0 ;
+(id)personNodesInAgeCategories:(id)arg0 includingMe:(BOOL)arg1 inGraph:(id)arg2 ;
+(id)personNodesIncludingMeInGraph:(id)arg0 ;
+(id)personNodesWithName:(id)arg0 inGraph:(id)arg1 ;
+(id)personNodesWithNames:(id)arg0 inGraph:(id)arg1 ;
+(id)unnamedPersonNodesInGraph:(id)arg0 ;
-(BOOL)containsMeNode;
-(id)personNodeByLocalIdentifier;
-(void)enumerateBiologicalSexUsingBlock:(id)arg0 ;


@end


#endif