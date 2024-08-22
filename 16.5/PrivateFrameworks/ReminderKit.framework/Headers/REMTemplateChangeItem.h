// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMTEMPLATECHANGEITEM_H
#define REMTEMPLATECHANGEITEM_H

@class NSString, NSDate, NSData;
@protocol REMConflictResolving, REMSaveRequestTrackedValue, REMObjectIDProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMObjectID.h"
#import "REMListBadge.h"
#import "REMChangedKeysObserver.h"
#import "REMColor.h"
#import "REMTemplateConfiguration.h"
#import "REMTemplatePublicLink.h"
#import "REMResolutionTokenMap.h"
#import "REMSaveRequest.h"
#import "REMTemplateStorage.h"
#import "REMManualOrdering.h"

@interface REMTemplateChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMObjectIDProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>



@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *accountID;
@property (copy, nonatomic) REMListBadge *badge;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // ivar: _changedKeysObserver
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) REMTemplateConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, nonatomic) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (readonly, nonatomic) REMTemplatePublicLink *publicLink;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (nonatomic) BOOL showingLargeAttachments;
@property (copy, nonatomic) NSString *sortingStyle;
@property (readonly, copy, nonatomic) REMTemplateStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) REMManualOrdering *unsavedManualOrdering;


+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(void)initialize;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)changedKeys;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 configuration:(id)arg2 insertIntoAccountChangeItem:(id)arg3 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 changedKeysObserver:(id)arg2 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 observeInitialValues:(BOOL)arg2 ;
-(id)resolutionTokenKeyForChangedKey:(id)arg0 ;
-(id)shallowCopyWithSaveRequest:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)removeFromParentAccount;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)updateManualOrdering:(id)arg0 ;


@end


#endif