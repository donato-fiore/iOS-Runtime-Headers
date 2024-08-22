// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORMSTUB_H
#define FBKBUGFORMSTUB_H

@class NSString, NSArray, NSNumber, NSSet;


#import "FBKManagedLocalIDObject.h"
#import "FBKBugForm.h"
#import "FBKUser.h"

@interface FBKBugFormStub : FBKManagedLocalIDObject

@property (retain, nonatomic) FBKBugForm *bugForm;
@property (copy, nonatomic) NSString *buildPrefix;
@property (nonatomic) BOOL forcePicker;
@property (copy, nonatomic) NSString *formDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) NSArray *pluginIDs;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *remoteID;
@property (copy, nonatomic) NSNumber *serverID;
@property (copy, nonatomic) NSString *signature;
@property (readonly, nonatomic) NSSet *stubsWithMatchingID;
@property (retain, nonatomic) NSString *tat;
@property (retain, nonatomic) NSSet *teams;
@property (readonly, nonatomic) NSSet *teamsMatchingFormID;
@property (retain, nonatomic) FBKUser *user;


+(id)bugFormStubsMatchingBuild:(id)arg0 forPlatform:(id)arg1 withStubs:(id)arg2 ;
+(id)bugFormStubsMatchingBuild:(id)arg0 withStubs:(id)arg1 ;
+(id)entityName;
+(id)fetchRequest;
+(id)predicateForAllStubs;
+(id)predicateForStub:(id)arg0 ;
+(id)predicateForTeam:(id)arg0 ;
+(id)sortDescriptor;
+(id)uniquingKey;
-(id)debugDescription;
-(id)preferredTeamForStubPreferringTeam:(id)arg0 ;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif