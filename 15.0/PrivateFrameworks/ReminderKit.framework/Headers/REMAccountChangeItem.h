// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMACCOUNTCHANGEITEM_H
#define REMACCOUNTCHANGEITEM_H

@class NSString, NSSet, NSData;
@protocol REMConflictResolving, REMPersonIDProviding, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMChangedKeysObserver.h"
#import "REMAccountGroupContextChangeItem.h"
#import "REMCRMergeableOrderedSet.h"
#import "REMObjectID.h"
#import "REMResolutionTokenMap.h"
#import "REMSaveRequest.h"
#import "REMAccountStorage.h"

@interface REMAccountChangeItem : NSObject <REMConflictResolving, REMPersonIDProviding, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>



@property (readonly, nonatomic) REMAccountCapabilities *capabilities;
@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // ivar: _changedKeysObserver
@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (retain, nonatomic) NSString *daConstraintsDescriptionPath;
@property (copy, nonatomic) NSString *daPushKey;
@property (nonatomic) BOOL daSupportsSharedCalendars;
@property (copy, nonatomic) NSString *daSyncToken;
@property (nonatomic) BOOL daWasMigrated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didChooseToMigrateLocally;
@property (nonatomic) BOOL didFinishMigration;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) REMAccountGroupContextChangeItem *groupContext;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inactive;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (nonatomic) BOOL listsDADisplayOrderChanged;
@property (nonatomic) BOOL markedForRemoval;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) NSInteger persistenceCloudSchemaVersion;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (retain, nonatomic) NSSet *smartListIDsToUndelete;
@property (readonly, copy, nonatomic) REMAccountStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(id)_emptyListIDsOrderingWithAccountID:(id)arg0 ;
+(void)initialize;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)changedKeys;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObjectID:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 insertIntoSaveRequest:(id)arg3 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 capabilities:(id)arg2 changedKeysObserver:(id)arg3 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 capabilities:(id)arg2 observeInitialValues:(BOOL)arg3 ;
-(id)lowLevelRemoveMergeableOrderingNodeIDFromOrdering:(id)arg0 ;
-(id)mergeableOrderingNodesByOrderingMergeableOrderingNodes:(id)arg0 ;
-(id)resolutionTokenKeyForChangedKey:(id)arg0 ;
-(id)shallowCopyWithSaveRequest:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_editListIDsOrderingUsingBlock:(id)arg0 ;
-(void)_lowLevelAddMergeableOrderingNodeToOrdering:(id)arg0 atIndexOfSibling:(id)arg1 isAfter:(BOOL)arg2 withParentMergeableOrderingNode:(id)arg3 ;
-(void)_lowLevelApplyUndoToOrdering:(id)arg0 ;
-(void)_reassignMergeableOrderingNode:(id)arg0 withParentListChangeItem:(id)arg1 ;
-(void)addListChangeItem:(id)arg0 ;
-(void)addMergeableOrderingNode:(id)arg0 ;
-(void)addSmartListChangeItem:(id)arg0 ;
-(void)insertListChangeItem:(id)arg0 afterListChangeItem:(id)arg1 ;
-(void)insertListChangeItem:(id)arg0 beforeListChangeItem:(id)arg1 ;
-(void)insertMergeableOrderingNode:(id)arg0 adjacentToMergeableOrderingNode:(id)arg1 isAfter:(BOOL)arg2 withParentMergeableOrderingNode:(id)arg3 ;
-(void)insertMergeableOrderingNode:(id)arg0 afterMergeableOrderingNode:(id)arg1 ;
-(void)insertMergeableOrderingNode:(id)arg0 beforeMergeableOrderingNode:(id)arg1 ;
-(void)insertSmartListChangeItem:(id)arg0 afterSmartListChangeItem:(id)arg1 ;
-(void)insertSmartListChangeItem:(id)arg0 beforeSmartListChangeItem:(id)arg1 ;
-(void)lowLevelAddMergeableOrderingNodeIDToOrdering:(id)arg0 withParentMergeableOrderingNode:(id)arg1 ;
-(void)removeFromStore;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)test_lowLevelEditOrderingByMovingListObjectID:(id)arg0 toTarget:(NSUInteger)arg1 ;
-(void)undeleteListWithID:(id)arg0 usingUndo:(id)arg1 ;
-(void)undeleteSmartListWithID:(id)arg0 usingUndo:(id)arg1 ;


@end


#endif