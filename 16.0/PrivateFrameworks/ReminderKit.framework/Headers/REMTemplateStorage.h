// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTEMPLATESTORAGE_H
#define REMTEMPLATESTORAGE_H

@class NSString, NSDate, NSData;
@protocol NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMObjectID.h"
#import "REMColor.h"
#import "REMTemplateConfiguration.h"
#import "REMTemplatePublicLink.h"
#import "REMResolutionTokenMap.h"
#import "REMManualOrdering.h"

@interface REMTemplateStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding>

 {
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
    NSInteger minimumSupportedVersion;
    NSInteger effectiveMinimumSupportedVersion;
}


@property (retain, nonatomic) REMAccountCapabilities *accountCapabilities; // ivar: _accountCapabilities
@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *badgeEmblem; // ivar: _badgeEmblem
@property (retain, nonatomic) REMColor *color; // ivar: _color
@property (retain, nonatomic) REMTemplateConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (nonatomic) BOOL isPersisted; // ivar: _isPersisted
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (retain, nonatomic) NSDate *mostRecentPublicLinkUpdateRequestDate; // ivar: _mostRecentPublicLinkUpdateRequestDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) REMObjectID *parentAccountID; // ivar: _parentAccountID
@property (retain, nonatomic) REMTemplatePublicLink *publicLink; // ivar: _publicLink
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // ivar: _resolutionTokenMap
@property (retain, nonatomic) NSData *resolutionTokenMapData; // ivar: _resolutionTokenMapData
@property (nonatomic) BOOL showingLargeAttachments; // ivar: _showingLargeAttachments
@property (copy, nonatomic) NSString *sortingStyle; // ivar: _sortingStyle
@property (retain, nonatomic) REMManualOrdering *unsavedManualOrdering; // ivar: _unsavedManualOrdering


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(NSUInteger)hash;
-(NSUInteger)storeGeneration;
-(id)cdKeyToStorageKeyMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 name:(id)arg2 ;
-(id)optionalObjectID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setStoreGenerationIfNeeded:(NSUInteger)arg0 ;


@end


#endif