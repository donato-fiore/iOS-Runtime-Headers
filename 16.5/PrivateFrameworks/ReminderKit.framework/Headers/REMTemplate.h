// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMTEMPLATE_H
#define REMTEMPLATE_H

@class NSString, NSDate, NSData;
@protocol REMObjectIDProviding, REMSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMObjectID.h"
#import "REMListBadge.h"
#import "REMColor.h"
#import "REMTemplatePublicLink.h"
#import "REMResolutionTokenMap.h"
#import "REMTemplateStorage.h"
#import "REMStore.h"

@interface REMTemplate : NSObject <REMObjectIDProviding, REMSupportedVersionProviding>



@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, nonatomic) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *parentAccountID;
@property (readonly, nonatomic) REMTemplatePublicLink *publicLink;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) BOOL showingLargeAttachments;
@property (readonly, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) REMTemplateStorage *storage; // ivar: _storage
@property (readonly, nonatomic) REMStore *store; // ivar: _store


+(id)cdEntityName;
+(id)cdEntityNameForSavedAttachment;
+(id)cdEntityNameForSavedReminder;
+(id)newObjectID;
+(id)newObjectIDForSavedAttachment;
+(id)newObjectIDForSavedReminder;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithStore:(id)arg0 storage:(id)arg1 ;
-(id)optionalObjectID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif