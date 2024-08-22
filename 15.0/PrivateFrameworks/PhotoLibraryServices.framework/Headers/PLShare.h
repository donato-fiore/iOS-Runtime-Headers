// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSHARE_H
#define PLSHARE_H

@class NSString, NSDate, NSSet, NSURL;
@protocol PLCloudDeletable;


#import "PLManagedObject.h"

@interface PLShare : PLManagedObject <PLCloudDeletable>



@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expiryDate;
@property (readonly) NSUInteger hash;
@property (nonatomic) short localPublishState;
@property (retain, nonatomic) NSSet *participants;
@property (nonatomic) NSInteger publicPermission;
@property (copy, nonatomic) NSString *scopeIdentifier;
@property (nonatomic) NSInteger scopeType;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) short status;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) short trashedState;
@property (copy, nonatomic) NSString *uuid;


+(BOOL)supportsCPLScopeType:(NSInteger)arg0 ;
+(NSInteger)_cloudDeletionTypeForScopeType:(NSInteger)arg0 ;
+(NSInteger)_cloudDeletionTypeForStatus:(short)arg0 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(id)_basePredicateIncludeTrashedShares:(BOOL)arg0 ;
+(id)_registeredSubclasses;
+(id)cloudUUIDKeyForDeletion;
+(id)createOwnedShareWithUUID:(id)arg0 creationDate:(id)arg1 title:(id)arg2 inPhotoLibrary:(id)arg3 ;
+(id)entityName;
+(id)insertInPhotoLibrary:(id)arg0 ;
+(id)insertOrUpdateShareWithCPLScopeChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)predicateToExcludeExpiredShares;
+(id)predicateToExcludeTrashedShares;
+(id)shareWithScopeIdentifier:(id)arg0 includeTrashed:(BOOL)arg1 inManagedObjectContext:(id)arg2 ;
+(id)shareWithScopedIdentifier:(id)arg0 includeTrashed:(BOOL)arg1 inManagedObjectContext:(id)arg2 ;
+(id)shareWithShareURL:(id)arg0 includeTrashed:(BOOL)arg1 inManagedObjectContext:(id)arg2 ;
+(id)shareWithUUID:(id)arg0 includeTrashed:(BOOL)arg1 inManagedObjectContext:(id)arg2 ;
+(id)sharesWithPredicate:(id)arg0 fetchLimit:(NSUInteger)arg1 inManagedObjectContext:(id)arg2 ;
+(void)_abortIfCalledOnBaseClass;
+(void)deleteAllSharesInManagedObjectContext:(id)arg0 ;
+(void)deleteExpiredSharesInManagedObjectContext:(id)arg0 ;
+(void)fetchShareFromShareURL:(id)arg0 inPhotoLibrary:(id)arg1 completionHandler:(id)arg2 ;
-(id)compactDescription;
-(id)cplScopeChange;
-(id)owner;
-(void)_updateShareStatusWithCurrentUser:(id)arg0 ;
-(void)acceptWithCompletionHandler:(id)arg0 ;
-(void)autoAcceptShareIfNecessary;
-(void)prepareForDeletion;
-(void)publishWithCompletionHandler:(id)arg0 ;
-(void)trash;
-(void)updateShareWithCPLShare:(id)arg0 inPhotoLibrary:(id)arg1 ;


@end


#endif