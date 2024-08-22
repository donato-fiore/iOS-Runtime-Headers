// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSMARTLISTSTORAGE_H
#define REMSMARTLISTSTORAGE_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMColor.h"
#import "REMManualOrdering.h"
#import "REMResolutionTokenMap.h"

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding>

 {
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
    NSInteger minimumSupportedVersion;
    NSInteger effectiveMinimumSupportedVersion;
}


@property (retain, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (retain, nonatomic) NSString *badgeEmblem; // ivar: _badgeEmblem
@property (retain, nonatomic) REMColor *color; // ivar: _color
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (retain, nonatomic) NSData *filterData; // ivar: _filterData
@property (nonatomic) BOOL isPersisted; // ivar: _isPersisted
@property (retain, nonatomic) REMManualOrdering *manualOrdering; // ivar: _manualOrdering
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) REMObjectID *parentAccountID; // ivar: _parentAccountID
@property (retain, nonatomic) REMObjectID *parentListID; // ivar: _parentListID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // ivar: _resolutionTokenMap
@property (retain, nonatomic) NSData *resolutionTokenMapData; // ivar: _resolutionTokenMapData
@property (nonatomic) BOOL showingLargeAttachments; // ivar: _showingLargeAttachments
@property (copy, nonatomic) NSString *smartListType; // ivar: _smartListType
@property (copy, nonatomic) NSString *sortingStyle; // ivar: sortingStyle


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
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 smartListType:(id)arg2 ;
-(id)optionalObjectID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setStoreGenerationIfNeeded:(NSUInteger)arg0 ;


@end


#endif