// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKTEAM_H
#define FBKTEAM_H

@class NSSet, NSString, NSNumber;


#import "FBKManagedFeedbackObject.h"
#import "FBKTeamPermissions.h"
#import "FBKUser.h"

@interface FBKTeam : FBKManagedFeedbackObject

@property (readonly, nonatomic) BOOL canStartNewFeedback;
@property (retain, nonatomic) NSSet *contentItems;
@property (nonatomic) BOOL didFetchFormItems;
@property (retain, nonatomic) NSSet *forms;
@property (readonly, nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *participants;
@property (retain, nonatomic) FBKTeamPermissions *permissions;
@property (copy, nonatomic) NSNumber *remoteID;
@property (readonly, nonatomic) NSUInteger role;
@property (nonatomic) NSInteger roleEnum;
@property (retain, nonatomic) NSSet *stakeholders;
@property (readonly, nonatomic) NSUInteger status;
@property (nonatomic) NSInteger statusEnum;
@property (readonly, nonatomic) NSUInteger teamType;
@property (nonatomic) NSInteger teamTypeEnum;
@property (copy, nonatomic) NSString *typeString;
@property (retain, nonatomic) FBKUser *user;


+(id)entityName;
+(id)fetchRequest;
+(id)personalTeamForUser:(id)arg0 inContext:(id)arg1 ;
+(id)sortDescriptors;
-(id)shortDescription;
-(id)teamFormStubMatchingFromFormStub:(id)arg0 ;
-(void)prepareForDeletion;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif