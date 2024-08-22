// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSHAREPARTICIPANT_H
#define PLSHAREPARTICIPANT_H

@class NSSet, NSString, NSPersonNameComponents;


#import "PLManagedObject.h"
#import "PLPerson.h"
#import "PLShare.h"

@interface PLShareParticipant : PLManagedObject

@property (nonatomic) NSInteger acceptanceStatus;
@property (retain, nonatomic) NSSet *assetBeingTrashedByParticipant;
@property (retain, nonatomic) NSSet *assets;
@property (copy, nonatomic) NSString *emailAddress;
@property (nonatomic) short exitState;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *participantID;
@property (nonatomic) NSInteger permission;
@property (copy, nonatomic) PLPerson *person;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) NSInteger role;
@property (retain, nonatomic) PLShare *share;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *uuid;


+(BOOL)isCurrentUserInScopeChange:(id)arg0 ;
+(id)_shareParticipantsWithPredicate:(id)arg0 fetchLimit:(NSUInteger)arg1 inManagedObjectContext:(id)arg2 ;
+(id)entityName;
+(id)insertInPhotoLibrary:(id)arg0 ;
+(id)participantWithCPLShareParticipant:(id)arg0 inShare:(id)arg1 ;
+(id)participantWithPLShareParticipant:(id)arg0 ;
+(id)participantsWithScope:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)participantsWithUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)participantsWithUserIdentifiers:(id)arg0 inScope:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(BOOL)_relationshipInInvalidState;
-(BOOL)_validateRelationshipConstraintForInsert:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)description;
-(id)shortName;
-(void)updateWithCPLShareParticipant:(id)arg0 inShare:(id)arg1 ;
-(void)willSave;


@end


#endif