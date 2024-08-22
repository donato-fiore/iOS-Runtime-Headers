// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHUPDATE_H
#define PGGRAPHUPDATE_H

@class PHPhotoLibrary, NSSet, NSString, NSMutableSet, NSMutableDictionary, NSMutableArray, NSDictionary;
@protocol PGGraphUpdateInventory;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGGraphUpdateRelatedDetails.h"

@interface PGGraphUpdate : NSObject <PGGraphUpdateInventory>

 {
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
}


@property (copy, nonatomic) NSSet *additionalLocationsToPrefetch; // ivar: _additionalLocationsToPrefetch
@property (readonly, nonatomic) NSSet *consolidatedChanges; // ivar: _consolidatedChanges
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableSet *deletedHighlightUUIDsForValidityCheck; // ivar: _deletedHighlightUUIDsForValidityCheck
@property (readonly, nonatomic) NSMutableSet *deletedMomentUUIDsForValidityCheck; // ivar: _deletedMomentUUIDsForValidityCheck
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didProcessNodes;
@property (readonly, nonatomic) BOOL hasAnythingToDo;
@property (nonatomic) BOOL hasDeletedHighlightNodes; // ivar: _hasDeletedHighlightNodes
@property (nonatomic) BOOL hasDeletedMomentNodes; // ivar: _hasDeletedMomentNodes
@property (nonatomic) BOOL hasDeletedPersonNodes; // ivar: _hasDeletedPersonNodes
@property (readonly, nonatomic) BOOL hasHighlightDayGroupsToInsert;
@property (readonly, nonatomic) BOOL hasHighlightsToDelete;
@property (readonly, nonatomic) BOOL hasHighlightsToInsert;
@property (readonly, nonatomic) BOOL hasHighlightsToUpdate;
@property (readonly, nonatomic) BOOL hasInsertedHighlightNodes;
@property (readonly, nonatomic) BOOL hasInsertedMomentNodes;
@property (readonly, nonatomic) BOOL hasMomentsToDelete;
@property (readonly, nonatomic) BOOL hasMomentsToInsert;
@property (readonly, nonatomic) BOOL hasMomentsToUpdate;
@property (readonly, nonatomic) BOOL hasPersonsToDelete;
@property (readonly, nonatomic) BOOL hasPersonsToInsert;
@property (readonly, nonatomic) BOOL hasPersonsToUpdate;
@property (readonly, nonatomic) BOOL hasUpdatedHighlightNodes;
@property (readonly, nonatomic) BOOL hasUpdatedMomentNodes;
@property (nonatomic) BOOL hasUpdatedPersonNodes; // ivar: _hasUpdatedPersonNodes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *highlightByHighlightUUID; // ivar: _highlightByHighlightUUID
@property (readonly, nonatomic) NSSet *highlightDayGroupsToIngest;
@property (readonly, nonatomic) NSSet *highlightDaysToIngest;
@property (readonly, nonatomic) NSMutableDictionary *highlightsToInsertByHighlightKind; // ivar: _highlightsToInsertByHighlightKind
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (readonly, nonatomic) NSMutableArray *inputChanges; // ivar: _inputChanges
@property (readonly, nonatomic) NSSet *insertedAndUpdatedPersonNodes; // ivar: _insertedAndUpdatedPersonNodes
@property (copy, nonatomic) NSSet *insertedHighlightDayGroupNodes; // ivar: _insertedHighlightDayGroupNodes
@property (copy, nonatomic) NSSet *insertedHighlightNodes; // ivar: _insertedHighlightNodes
@property (copy, nonatomic) NSSet *insertedMomentNodes; // ivar: _insertedMomentNodes
@property (nonatomic) BOOL isResumingFullAnalysis; // ivar: _isResumingFullAnalysis
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) NSSet *localIdentifiersOfPersonsToDelete; // ivar: _localIdentifiersOfPersonsToDelete
@property (readonly, nonatomic) NSSet *localIdentifiersOfPersonsToInsert; // ivar: _localIdentifiersOfPersonsToInsert
@property (readonly, nonatomic) NSSet *localIdentifiersOfPersonsToUpdate; // ivar: _localIdentifiersOfPersonsToUpdate
@property (readonly, nonatomic) NSMutableDictionary *momentByMomentUUID; // ivar: _momentByMomentUUID
@property (readonly, nonatomic) NSUInteger momentUpdateTypes; // ivar: _momentUpdateTypes
@property (readonly, nonatomic) NSSet *momentsToIngest; // ivar: _momentsToIngest
@property (readonly, nonatomic) NSUInteger numberOfConsolidatedChanges;
@property (readonly, nonatomic) NSDictionary *registeredLocationOfInterestVisitsToResolveByMomentUUID; // ivar: _registeredLocationOfInterestVisitsToResolveByMomentUUID
@property (readonly, nonatomic) NSDictionary *registeredResolvableItemsByBusinessItemMuid; // ivar: _registeredResolvableItemsByBusinessItemMuid
@property (readonly, nonatomic) PGGraphUpdateRelatedDetails *relatedDetails; // ivar: _relatedDetails
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *updateHighlightNodesByUpdateType; // ivar: _updateHighlightNodesByUpdateType
@property (readonly, nonatomic) NSMutableDictionary *updateMomentNodesByUpdateType; // ivar: _updateMomentNodesByUpdateType
@property (nonatomic) NSInteger updateType; // ivar: _updateType
@property (readonly, nonatomic) NSMutableSet *uuidsOfDeletedHighlights; // ivar: _uuidsOfDeletedHighlights
@property (readonly, nonatomic) NSSet *uuidsOfHighlightsToDelete; // ivar: _uuidsOfHighlightsToDelete
@property (readonly, nonatomic) NSSet *uuidsOfHighlightsToInsert; // ivar: _uuidsOfHighlightsToInsert
@property (readonly, nonatomic) NSSet *uuidsOfHighlightsToUpdate; // ivar: _uuidsOfHighlightsToUpdate
@property (readonly, nonatomic) NSSet *uuidsOfMomentsToDelete; // ivar: _uuidsOfMomentsToDelete
@property (readonly, nonatomic) NSSet *uuidsOfMomentsToInsert; // ivar: _uuidsOfMomentsToInsert
@property (readonly, nonatomic) NSSet *uuidsOfMomentsToUpdate; // ivar: _uuidsOfMomentsToUpdate


-(id)_fetchMomentsWithUUIDs:(id)arg0 ;
-(id)_fetchedHighlightsWithHighlightUUIDs:(id)arg0 ;
-(id)cachedDataModelObjectForGraphChange:(id)arg0 ;
-(id)highlightForHighlightUUID:(id)arg0 ;
-(id)highlightsToProcessForKind:(unsigned short)arg0 withHighlightUpdateTypes:(NSUInteger)arg1 includeHighlightsToIngest:(BOOL)arg2 ;
-(id)initWithManager:(id)arg0 ;
-(id)initWithManager:(id)arg0 updateType:(NSInteger)arg1 ;
-(id)initWithManager:(id)arg0 updateType:(NSInteger)arg1 graph:(id)arg2 ;
-(id)momentNodesToProcessForMomentUpdateTypes:(NSUInteger)arg0 includeInsertedNodes:(BOOL)arg1 ;
-(id)momentsToProcessForMomentUpdateTypes:(NSUInteger)arg0 includeMomentsToIngest:(BOOL)arg1 ;
-(void)_consolidate;
-(void)_consolidateIfNeeded;
-(void)_registerHighlights:(id)arg0 ;
-(void)_registerMoments:(id)arg0 ;
-(void)_unregisterHighlightsForHighlightUUIDs:(id)arg0 ;
-(void)_unregisterMomentsForMomentUUIDs:(id)arg0 ;
-(void)addChange:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)clearInsertedAndUpdatedPersonNodes;
-(void)enumerateConsolidatedChanges:(id)arg0 ;
-(void)prepareForPostProcessing;
-(void)registerInsertedAndUpdatedPersonNodes:(id)arg0 ;
-(void)registerLocationOfInterestVisitToResolve:(id)arg0 forMomentUUID:(id)arg1 ;
-(void)registerPublicEventNode:(id)arg0 withConsolidatedAddress:(id)arg1 toResolveBusinessItemMuid:(NSUInteger)arg2 ;
-(void)setGraph:(id)arg0 ;
-(void)updatedHighlightNode:(id)arg0 forUpdateChangeType:(NSUInteger)arg1 ;
-(void)updatedMomentNode:(id)arg0 forUpdateChangeType:(NSUInteger)arg1 ;


@end


#endif