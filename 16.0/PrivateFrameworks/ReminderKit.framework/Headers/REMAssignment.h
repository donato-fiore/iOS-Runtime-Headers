// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMASSIGNMENT_H
#define REMASSIGNMENT_H

@class NSDate, NSString;
@protocol REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMAssignment : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>



@property (nonatomic) BOOL _debug_cdAssigneeLinked; // ivar: __debug_cdAssigneeLinked
@property (nonatomic) BOOL _debug_cdOriginatorLinked; // ivar: __debug_cdOriginatorLinked
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (copy, nonatomic) NSDate *assignedDate; // ivar: _assignedDate
@property (readonly, nonatomic) REMObjectID *assigneeID; // ivar: _assigneeID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) REMObjectID *originatorID; // ivar: _originatorID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMObjectID *reminderID; // ivar: _reminderID
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)isChangeTrackableFetchableModel;
+(BOOL)isChangeTrackableModel;
+(BOOL)rem_DA_supportsConcealedObjects;
+(BOOL)rem_DA_supportsFetching;
+(BOOL)supportsSecureCoding;
+(CGFloat)orderValueWithAssignedDate:(id)arg0 objectIdentifier:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
+(id)nullifiedOriginatorAssignmentWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 assigneeID:(id)arg3 status:(NSInteger)arg4 assignedDate:(id)arg5 ;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)rem_DA_deletedKeyFromConcealedModelObjectBlock:(SEL)arg0 ;
+(id)rem_DA_deletedKeyFromTombstoneBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDsBlock:(SEL)arg0 ;
+(id)rem_DA_propertiesAffectingIsConcealed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssignment:(id)arg0 ;
-(BOOL)isOriginatorNullified;
-(CGFloat)orderValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 assigneeID:(id)arg3 originatorID:(id)arg4 status:(NSInteger)arg5 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 assigneeID:(id)arg3 originatorID:(id)arg4 status:(NSInteger)arg5 assignedDate:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif