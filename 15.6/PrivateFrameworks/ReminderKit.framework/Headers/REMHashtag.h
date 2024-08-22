// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMHASHTAG_H
#define REMHASHTAG_H

@class NSDate, NSString;
@protocol REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding, REMHashtagProtocol;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMHashtag : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding, REMHashtagProtocol>



@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMObjectID *reminderID; // ivar: _reminderID
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)isChangeTrackableFetchableModel;
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
-(BOOL)isEqualToHashtag:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 type:(NSInteger)arg3 name:(id)arg4 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 type:(NSInteger)arg3 name:(id)arg4 creationDate:(id)arg5 ;
-(id)objectIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif