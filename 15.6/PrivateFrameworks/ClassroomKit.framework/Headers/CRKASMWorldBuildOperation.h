// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMWORLDBUILDOPERATION_H
#define CRKASMWORLDBUILDOPERATION_H

@class CATOperation, NSArray, NSDictionary, NSSet;
@protocol CRKClassKitCurrentUser;


#import "CRKASMRosterProviderEnvironment.h"

@interface CRKASMWorldBuildOperation : CATOperation

@property (retain, nonatomic) NSArray *classKitClasses; // ivar: _classKitClasses
@property (retain, nonatomic) NSObject<CRKClassKitCurrentUser> *classKitCurrentUser; // ivar: _classKitCurrentUser
@property (copy, nonatomic) NSDictionary *classKitLocationsByLocationID; // ivar: _classKitLocationsByLocationID
@property (copy, nonatomic) NSDictionary *classKitPersonsByClassID; // ivar: _classKitPersonsByClassID
@property (readonly, nonatomic) CRKASMRosterProviderEnvironment *environment; // ivar: _environment
@property (copy, nonatomic) NSSet *manageableLocationIDs; // ivar: _manageableLocationIDs
@property (copy, nonatomic) NSDictionary *trustedClassKitPersonsByClassID; // ivar: _trustedClassKitPersonsByClassID


+(id)makeErrorWithErrorsByObjectID:(id)arg0 ;
-(BOOL)isAsynchronous;
-(id)compileResult;
-(id)initWithEnvironment:(id)arg0 ;
-(id)makeHousekeeperWithRoster:(id)arg0 ;
-(id)rosterRequirements;
-(void)buildAllClassKitPersonsByClassID;
-(void)buildClassKitClasses;
-(void)buildClassKitLocationsByLocationID;
-(void)buildCurrentClassKitUser;
-(void)buildManageableLocationIDs;
-(void)checkAccountEligibility;
-(void)finish;
-(void)finishWithEmptyResultObject;
-(void)housekeepKeychain;
-(void)housekeepKeychainWithRoster:(id)arg0 ;
-(void)main;


@end


#endif