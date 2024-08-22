// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMSMARTLISTCHANGEITEM_H
#define REMSMARTLISTCHANGEITEM_H

@class NSString, NSData;
@protocol REMConflictResolving, REMSaveRequestTrackedValue, REMMergeableOrderingNode, REMSupportedVersionProviding, REMSupportedVersionUpdating;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMChangedKeysObserver.h"
#import "REMColor.h"
#import "REMSmartListCustomContextChangeItem.h"
#import "REMManualOrdering.h"
#import "REMAccount.h"
#import "REMResolutionTokenMap.h"
#import "REMSaveRequest.h"
#import "REMSmartListStorage.h"

@interface REMSmartListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMMergeableOrderingNode, REMSupportedVersionProviding, REMSupportedVersionUpdating>



@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // ivar: _changedKeysObserver
@property (retain, nonatomic) REMColor *color;
@property (readonly, nonatomic) REMSmartListCustomContextChangeItem *customContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (retain, nonatomic) NSData *filterData;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPersisted;
@property (retain, nonatomic) REMManualOrdering *manualOrdering;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMAccount *parentAccount; // ivar: _parentAccount
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (retain, nonatomic) REMObjectID *parentOwnerID;
@property (retain, nonatomic) REMObjectID *parentSubContainerID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (nonatomic) BOOL showingLargeAttachments;
@property (copy, nonatomic) NSString *smartListType;
@property (copy, nonatomic) NSString *sortingStyle;
@property (readonly, copy, nonatomic) REMSmartListStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(void)initialize;
-(BOOL)isSubContainer;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)changedKeys;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCustomSmartListObjectID:(id)arg0 insertIntoAccountChangeItem:(id)arg1 ;
-(id)initWithCustomSmartListObjectID:(id)arg0 insertIntoAccountChangeItem:(id)arg1 withParentListChangeItem:(id)arg2 ;
-(id)initWithCustomSmartListObjectID:(id)arg0 insertIntoListSublistContextChangeItem:(id)arg1 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 changedKeysObserver:(id)arg2 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 observeInitialValues:(BOOL)arg2 ;
-(id)removeFromParentAllowingUndoWithAccountChangeItem:(id)arg0 ;
-(id)resolutionTokenKeyForChangedKey:(id)arg0 ;
-(id)shallowCopyWithSaveRequest:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)assertIsCustomSmartListWithAction:(id)arg0 ;
-(void)removeFromParentWithAccountChangeItem:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)updateManualOrdering:(id)arg0 ;


@end


#endif