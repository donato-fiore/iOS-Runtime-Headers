// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHSHAREPARTICIPANTCHANGEREQUEST_H
#define PHSHAREPARTICIPANTCHANGEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHShareParticipantChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *emailAddress;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper; // ivar: _personHelper
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedShareParticipant;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;


+(id)changeRequestForShareParticipant:(id)arg0 ;
+(id)creationRequestForShareParticipantWithEmailAddress:(id)arg0 permission:(short)arg1 ;
+(id)creationRequestForShareParticipantWithPhoneNumber:(id)arg0 permission:(short)arg1 ;
+(void)deleteShareParticipants:(id)arg0 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)isCurrentUser;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg0 error:(*id)arg1 ;
-(id)_mutablePersonObjectIDsAndUUIDs;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(short)exitState;
-(short)permission;
-(unsigned short)role;
-(void)_preparePersonIDIfNeeded;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)setExitState:(short)arg0 ;
-(void)setIsCurrentUser:(BOOL)arg0 ;
-(void)setPermission:(short)arg0 ;
-(void)setPerson:(id)arg0 ;
-(void)setRole:(unsigned short)arg0 ;


@end


#endif