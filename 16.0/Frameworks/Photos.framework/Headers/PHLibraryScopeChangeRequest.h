// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLIBRARYSCOPECHANGEREQUEST_H
#define PHLIBRARYSCOPECHANGEREQUEST_H

@class NSArray, NSString, NSDate, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHLibraryScope.h"
#import "PHShareRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHLibraryScopeChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (retain, nonatomic) NSArray *assetUUIDsAssetsMarkedRejectedByPhotosSuggesterFromLibraryScope; // ivar: _assetUUIDsAssetsMarkedRejectedByPhotosSuggesterFromLibraryScope
@property (retain, nonatomic) NSArray *assetUUIDsManuallyAddedToLibraryScope; // ivar: _assetUUIDsManuallyAddedToLibraryScope
@property (retain, nonatomic) NSArray *assetUUIDsManuallyRemovedFromLibraryScope; // ivar: _assetUUIDsManuallyRemovedFromLibraryScope
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedAddedToLibraryScope; // ivar: _assetUUIDsPhotosSuggestedAddedToLibraryScope
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedRejectedFromLibraryScope; // ivar: _assetUUIDsPhotosSuggestedRejectedFromLibraryScope
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedRemovedFromLibraryScope; // ivar: _assetUUIDsPhotosSuggestedRemovedFromLibraryScope
@property (retain, nonatomic) NSArray *assetUUIDsPhotosSuggestedUnRejectedFromLibraryScope; // ivar: _assetUUIDsPhotosSuggestedUnRejectedFromLibraryScope
@property (nonatomic) short autoSharePolicy;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (weak, nonatomic) PHLibraryScope *originalLibraryScope; // ivar: _originalLibraryScope
@property (nonatomic) short participantCloudUpdateState;
@property (retain, nonatomic) NSArray *participantsAddedToLibraryScope; // ivar: _participantsAddedToLibraryScope
@property (readonly, nonatomic) PHShareRelationshipChangeRequestHelper *participantsHelper; // ivar: _participantsHelper
@property (retain, nonatomic) NSArray *participantsRemovedFromLibraryScope; // ivar: _participantsRemovedFromLibraryScope
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedLibraryScope;
@property (nonatomic) BOOL runningAsUnitTest; // ivar: _runningAsUnitTest
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;


+(id)changeRequestForLibraryScope:(id)arg0 ;
+(id)creationRequestForOwnedLibraryScopeInPreviewStateWithTitle:(id)arg0 ;
+(void)_expungeLibraryScopes:(id)arg0 ignorePhotosctlExpungeOverride:(BOOL)arg1 ;
+(void)expungeLibraryScopes:(id)arg0 ;
+(void)trashLibraryScopes:(id)arg0 ;
+(void)untrashLibraryScopes:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(NSInteger)scopeType;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)lastParticipantAssetTrashNotificationDate;
-(id)rulesData;
-(id)scopeIdentifier;
-(id)trashedDate;
-(short)exitState;
-(short)localPublishState;
-(short)previewState;
-(short)scopeSyncingState;
-(short)status;
-(void)_updateParticipantCloudUpdateStateIfNecessary;
-(void)addParticipants:(id)arg0 ;
-(void)addPreviewAssetsSuggestedByPhotos:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)markAssetsAsRejectedByPhotosSuggester:(id)arg0 ;
-(void)moveToPersonalLibrary:(id)arg0 ;
-(void)moveToSharedLibrary:(id)arg0 ;
-(void)rejectPreviewAssetsSuggestedByPhotos:(id)arg0 ;
-(void)removeParticipants:(id)arg0 ;
-(void)removePreviewAssetsSuggestedByPhotos:(id)arg0 ;
-(void)setExitState:(short)arg0 ;
-(void)setLastParticipantAssetTrashNotificationDate:(id)arg0 ;
-(void)setLocalPublishState:(short)arg0 ;
-(void)setPendingLibraryScopeInvitationToPreviewState;
-(void)setPreviewState:(short)arg0 ;
-(void)setRulesData:(id)arg0 ;
-(void)setScopeIdentifier:(id)arg0 ;
-(void)setScopeSyncingState:(short)arg0 ;
-(void)setScopeType:(NSInteger)arg0 ;
-(void)setStatus:(short)arg0 ;
-(void)setTrashedDate:(id)arg0 ;
-(void)unRejectPreviewAssetsSuggestedByPhotos:(id)arg0 ;
-(void)updateWithCustomRules:(id)arg0 ;


@end


#endif