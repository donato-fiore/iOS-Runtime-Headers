// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMOMENTSHARECHANGEREQUEST_H
#define PHMOMENTSHARECHANGEREQUEST_H

@class NSXPCConnection, NSString, NSSet, NSDictionary, NSDate, NSManagedObjectID, NSData;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHMomentShare.h"
#import "PHShareRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    PHMomentShare *_originalMomentShare;
    NSXPCConnection *_clientConnection;
    BOOL _changedAssets;
    NSString *_keySourceAssetIdentifier;
    NSSet *_sourceAssetIdentifiersForBatchedCreation;
    NSDictionary *_sourceAssetCMMAssetMapForCreationRequest;
    NSDictionary *_sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionaryForBatchedCreation;
    NSDictionary *_sourceAssetIdentifiersToMetadataCopyOptionsDictionaryForBatchedCreation;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
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
@property (retain, nonatomic) NSString *originatingScopeIdentifier;
@property (readonly, nonatomic) PHShareRelationshipChangeRequestHelper *participantsHelper; // ivar: _participantsHelper
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedMomentShare;
@property (retain, nonatomic) NSData *previewData;
@property (nonatomic) BOOL shouldIgnoreBudgets;
@property (nonatomic) BOOL shouldNotifyOnUploadCompletion;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;


+(id)changeRequestForMomentShare:(id)arg0 ;
+(id)creationRequestForMomentShareWithTitle:(id)arg0 publicPermission:(short)arg1 creationDate:(id)arg2 createMomentShareAssetsFromAssets:(id)arg3 creationOptionsPerAsset:(id)arg4 preview:(id)arg5 originatingMomentShare:(id)arg6 ;
+(id)validateMomentShareCreationDate:(id)arg0 error:(*id)arg1 ;
+(void)expungeMomentShares:(id)arg0 ;
+(void)trashMomentShares:(id)arg0 ;
-(BOOL)_addSourceAssetsToMomentShare:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)thumbnailImageData;
-(short)mode;
-(void)_setOriginalMomentShare:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)createMomentShareAssetsFromAssets:(id)arg0 withCreationOptionsPerAsset:(id)arg1 withPreview:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)setPublicPermission:(short)arg0 ;
-(void)setThumbnailImageData:(id)arg0 ;


@end


#endif