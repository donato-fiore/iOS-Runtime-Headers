// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMSHAREE_H
#define REMSHAREE_H

@class NSString, NSPersonNameComponents;
@protocol REMDAChangeTrackableModel, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMSharee : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>



@property (readonly, nonatomic) NSInteger accessLevel; // ivar: _accessLevel
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) REMObjectID *listID; // ivar: _listID
@property (readonly, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (readonly, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (readonly, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSPersonNameComponents *personNameComponents;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)isChangeTrackableModel;
+(BOOL)rem_DA_supportsConcealedObjects;
+(BOOL)rem_DA_supportsFetching;
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)nullifiedAssignmentOriginatorID;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)rem_DA_deletedKeyFromConcealedModelObjectBlock:(SEL)arg0 ;
+(id)rem_DA_deletedKeyFromTombstoneBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDsBlock:(SEL)arg0 ;
+(id)rem_DA_propertiesAffectingIsConcealed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharee:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedName;
-(id)formattedNameWithStyle:(NSInteger)arg0 ;
-(id)initShareeWithObjectID:(id)arg0 accountID:(id)arg1 listID:(id)arg2 displayName:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 address:(id)arg6 status:(NSInteger)arg7 accessLevel:(NSInteger)arg8 ;
-(id)initShareeWithObjectID:(id)arg0 accountID:(id)arg1 listID:(id)arg2 displayName:(id)arg3 firstName:(id)arg4 middleName:(id)arg5 lastName:(id)arg6 namePrefix:(id)arg7 nameSuffix:(id)arg8 nickname:(id)arg9 address:(id)arg10 status:(NSInteger)arg11 accessLevel:(NSInteger)arg12 ;
-(id)initShareeWithObjectID:(id)arg0 accountID:(id)arg1 listID:(id)arg2 personNameComponents:(id)arg3 address:(id)arg4 status:(NSInteger)arg5 accessLevel:(NSInteger)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif