// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSHAREPARTICIPANT_H
#define PLSHAREPARTICIPANT_H

@class NSString, NSPersonNameComponents;


#import "PLManagedObject.h"
#import "PLShare.h"

@interface PLShareParticipant : PLManagedObject

@property (nonatomic) NSInteger acceptanceStatus;
@property (copy, nonatomic) NSString *emailAddress;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) NSInteger permission;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) NSInteger role;
@property (retain, nonatomic) PLShare *share;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *uuid;


+(id)_shareParticipantsWithPredicate:(id)arg0 fetchLimit:(NSUInteger)arg1 inManagedObjectContext:(id)arg2 ;
+(id)entityName;
+(id)insertInPhotoLibrary:(id)arg0 ;
+(id)participantsWithUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)participantsWithUserIdentifiers:(id)arg0 inScope:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)updateOrInsertWithCPLShareParticipant:(id)arg0 inShare:(id)arg1 ;
-(id)description;


@end


#endif