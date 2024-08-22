// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLOCALCHANGEEVENTBUILDER_H
#define PLLOCALCHANGEEVENTBUILDER_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLLocalChangeEventBuilder : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    NSMutableArray *_deletedAssetCloudGUIDs;
    NSMutableArray *_deletedAlbumCloudGUIDs;
    NSMutableArray *_deletedMemoryCloudGUIDs;
    NSMutableArray *_deletedPersonCloudGUIDs;
    NSMutableArray *_deletedFaceCropCloudGUIDs;
    NSMutableArray *_deletedOwnedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSubscribedMomentShareCloudGUIDs;
    NSMutableArray *_deletedSuggestionCloudGUIDs;
    NSMutableArray *_deletedUserFeedbackCloudGUIDs;
    NSMutableArray *_deletedInternalResourceUUIDToResourceTypeMappings;
    NSMutableArray *_deletedOwnedLibraryScopeCloudGUIDs;
    NSMutableArray *_deletedSubscribedLibraryScopeCloudGUIDs;
}


@property (nonatomic, getter=isCoalescedEvent) BOOL coalescedEvent; // ivar: _coalescedEvent
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic, getter=isSyncChange) BOOL syncChange; // ivar: _syncChange
@property (copy, nonatomic) id *transactionFilter; // ivar: _transactionFilter
@property (nonatomic, getter=isUnknownMergeEvent) BOOL unknownMergeEvent; // ivar: _unknownMergeEvent
@property (copy, nonatomic) id *updatedPropertyFilter; // ivar: _updatedPropertyFilter


+(id)localEventFromTransaction:(id)arg0 ;
+(id)localEventWithBuilderBlock:(id)arg0 ;
-(BOOL)_isCloudStateDeletedOnTombstone:(id)arg0 ;
-(BOOL)_shouldRecordTransaction:(id)arg0 ;
-(Class)_cloudDeletableEntityFromObjectID:(id)arg0 ;
-(id)_filteredUpdatedPropertiesFromChange:(id)arg0 ;
-(id)buildLocalEvent;
-(id)init;
-(id)recordChangedObjectIDBlockForChangeKey:(SEL)arg0 ;
-(id)recordDeletedCloudGUIDBlockForChangeKey:(SEL)arg0 ;
-(void)_recordCloudDeleteForChange:(id)arg0 ;
-(void)_recordDeleteChange:(id)arg0 ;
-(void)_recordInsertChange:(id)arg0 ;
-(void)_recordUpdateChange:(id)arg0 ;
-(void)recordAllTransactionsFromIterator:(id)arg0 ;
-(void)recordChange:(id)arg0 ;
-(void)recordDeletedCloudGUID:(id)arg0 forType:(NSInteger)arg1 ;
-(void)recordDeletedObjectID:(id)arg0 ;
-(void)recordInsertedObjectID:(id)arg0 ;
-(void)recordTransaction:(id)arg0 ;
-(void)recordUpdatedAttributes:(NSUInteger)arg0 andRelationships:(NSUInteger)arg1 forObjectID:(id)arg2 ;
-(void)recordUpdatedObjectID:(id)arg0 ;


@end


#endif