// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHLIBRARYSCOPE_H
#define PHLIBRARYSCOPE_H

@class NSDate, NSString, NSData, NSURL;
@protocol PHShare;


#import "PHObject.h"

@interface PHLibraryScope : PHObject <PHShare>



@property (readonly, nonatomic) short autoSharePolicy; // ivar: _autoSharePolicy
@property (readonly, nonatomic) NSUInteger cloudItemCount; // ivar: _cloudItemCount
@property (readonly, nonatomic) NSUInteger cloudPhotoCount; // ivar: _cloudPhotoCount
@property (readonly, nonatomic) NSUInteger cloudVideoCount; // ivar: _cloudVideoCount
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger exitState; // ivar: _exitState
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL libraryScopeInLocalMode; // ivar: _libraryScopeInLocalMode
@property (readonly, nonatomic) short participantCloudUpdateState; // ivar: _participantCloudUpdateState
@property (readonly, nonatomic) short previewState; // ivar: _previewState
@property (readonly, nonatomic) short publicPermission; // ivar: _publicPermission
@property (readonly, nonatomic) short publishState; // ivar: _publishState
@property (readonly, nonatomic) NSData *rulesData; // ivar: _rulesData
@property (readonly, nonatomic) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (readonly, nonatomic) short scopeSyncingState; // ivar: _scopeSyncingState
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, nonatomic) unsigned short status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned short trashedState; // ivar: _trashedState


+(BOOL)managedObjectSupportsShareExitingState;
+(BOOL)managedObjectSupportsShareExpiredState;
+(BOOL)managedObjectSupportsShareTrashedState;
+(BOOL)removePersonRulesOnActiveLibraryScopeWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)estimatedAssetCountToMoveForExitRetentionPolicyContributedOnly:(BOOL)arg0 imageCount:(*NSUInteger)arg1 videoCount:(*NSUInteger)arg2 audioCount:(*NSUInteger)arg3 itemCount:(*NSUInteger)arg4 options:(id)arg5 error:(*id)arg6 ;
+(id)_estimatedAssetCountToMoveForExitRetentionPolicyContributedOnly:(BOOL)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)entityKeyMap;
+(id)fetchActiveLibraryScopeWithOptions:(id)arg0 ;
+(id)fetchLibraryScopesWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchLibraryScopesWithOptions:(id)arg0 ;
+(id)fetchPendingLibraryScopeInvitationWithOptions:(id)arg0 ;
+(id)fetchPreviewLibraryScopeWithOptions:(id)arg0 ;
+(id)fetchType;
+(id)identifierCode;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(void)fetchLibraryScopeFromShareURL:(id)arg0 ignoreExistingShare:(BOOL)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
+(void)fetchLibraryScopeFromShareURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
+(void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithPhotoLibrary:(id)arg0 completion:(id)arg1 ;
-(Class)changeRequestClass;
-(id)activateLibraryScopeWithCompletion:(id)arg0 ;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)markOnboardingPreviewAssetsByProcessingRulesWithCompletion:(id)arg0 ;
-(void)acceptLibraryScopeWithCompletion:(id)arg0 ;
-(void)deactivateLibraryScopeWithCompletion:(id)arg0 ;
-(void)getCloudStatusCountsWithCompletionHandler:(id)arg0 ;
-(void)publishLibraryScopeWithCompletionHandler:(id)arg0 ;
-(void)removeParticipants:(id)arg0 exitSource:(NSInteger)arg1 completion:(id)arg2 ;
-(void)startExitFromLibraryScopeWithRetentionPolicy:(NSInteger)arg0 exitSource:(NSInteger)arg1 completion:(id)arg2 ;
-(void)unsharePendingAssetsSharedToScope;


@end


#endif