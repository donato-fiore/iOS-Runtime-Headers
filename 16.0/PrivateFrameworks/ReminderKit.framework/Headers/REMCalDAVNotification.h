// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMCALDAVNOTIFICATION_H
#define REMCALDAVNOTIFICATION_H

@class NSString, NSURL;
@protocol REMDAChangeTrackableModel, _REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMCalDAVNotification : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding>



@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *daPushKey; // ivar: daPushKey
@property (copy, nonatomic) NSString *daSyncToken; // ivar: daSyncToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: externalIdentifier
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (copy, nonatomic) NSString *externalModificationTag; // ivar: externalModificationTag
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *hostURL; // ivar: _hostURL
@property (readonly, nonatomic) REMObjectID *listID; // ivar: _listID
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


+(BOOL)isChangeTrackableModel;
+(BOOL)rem_DA_supportsConcealedObjects;
+(BOOL)rem_DA_supportsFetching;
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)rem_DA_deletedKeyFromConcealedModelObjectBlock:(SEL)arg0 ;
+(id)rem_DA_deletedKeyFromTombstoneBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDsBlock:(SEL)arg0 ;
+(id)rem_DA_propertiesAffectingIsConcealed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldUseExternalIdentifierAsDeletionKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initCalDAVNotificationWithObjectID:(id)arg0 accountID:(id)arg1 listID:(id)arg2 uuidString:(id)arg3 hostURL:(id)arg4 externalIdentifier:(id)arg5 externalModificationTag:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif