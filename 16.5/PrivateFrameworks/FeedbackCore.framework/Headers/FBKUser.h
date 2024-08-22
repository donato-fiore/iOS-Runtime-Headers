// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKUSER_H
#define FBKUSER_H

@class NSSet, NSString;


#import "FBKManagedFeedbackObject.h"

@interface FBKUser : FBKManagedFeedbackObject

@property (readonly, nonatomic) NSSet *activeManagedTeams;
@property (readonly, nonatomic) NSSet *activeTeams;
@property (retain, nonatomic) NSSet *announcementContentItems;
@property (retain, nonatomic) NSSet *bugFormStubs;
@property (retain, nonatomic) NSSet *contentItems;
@property (nonatomic) BOOL didFetchContentItems;
@property (nonatomic) BOOL didFetchFormStubs;
@property short environment;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) NSSet *feedbackContentItems;
@property (retain, nonatomic) NSSet *formResponseContentItems;
@property (readonly, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL hasForms;
@property (readonly, nonatomic) BOOL hasManagedTeams;
@property (readonly, nonatomic) BOOL hasManyManagedTeams;
@property (nonatomic) BOOL isSystemAccount;
@property (readonly, nonatomic) BOOL isUnauthenticatedUser;
@property (readonly, nonatomic) NSSet *managedTeams;
@property (retain, nonatomic) NSSet *surveyContentItems;
@property (retain, nonatomic) NSSet *teams;
@property (readonly, nonatomic) NSSet *teamsContainingContent;
@property (retain, nonatomic) NSString *username;


+(id)createUserFromUserLoginInfo:(id)arg0 forEnvironment:(short)arg1 inContext:(id)arg2 ;
+(id)entityName;
+(id)keyPathsForValuesAffectingOnlyPublic;
+(id)uniqueFormStubsWithPreferredTeam:(id)arg0 withForms:(id)arg1 ;
-(BOOL)isInAnyProgram;
-(BOOL)onlyPublic;
-(id)bugFormStubsForPickerWithPredicate:(id)arg0 team:(id)arg1 ;
-(id)draftFormResponseIDs;
-(id)uniqueFormStubsWithPreferredTeam:(id)arg0 ;


@end


#endif