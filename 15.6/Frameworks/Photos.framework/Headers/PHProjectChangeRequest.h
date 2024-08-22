// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPROJECTCHANGEREQUEST_H
#define PHPROJECTCHANGEREQUEST_H

@class NSData, NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHProject.h"
#import "PHRelationshipChangeRequestHelper.h"

@interface PHProjectChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    PHProject *_originalProject;
    NSData *_previewImageData;
    BOOL _didSetPreviewImage;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper; // ivar: _assetsHelper
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetHelper; // ivar: _keyAssetHelper
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSData *projectExtensionData;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)creationRequestForProjectCopyFromProject:(id)arg0 ;
+(id)creationRequestForProjectWithDocumentType:(id)arg0 projectExtensionIdentifier:(id)arg1 ;
+(id)creationRequestForProjectWithDocumentType:(id)arg0 projectExtensionIdentifier:(id)arg1 assets:(id)arg2 title:(id)arg3 ;
+(void)_deleteProjects:(id)arg0 withOperation:(NSInteger)arg1 ;
+(void)deleteProjects:(id)arg0 ;
+(void)expungeProjects:(id)arg0 ;
+(void)undeleteProjects:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)prepareForServicePreflightCheck:(*id)arg0 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithProject:(id)arg0 ;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(id)placeholderForCreatedProject;
-(id)projectData;
-(id)projectExtensionIdentifier;
-(id)projectRenderUuid;
-(void)_prepareAssetIDsIfNeeded;
-(void)_prepareKeyAssetIDIfNeeded;
-(void)_setOriginalProject:(id)arg0 ;
-(void)addAssets:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)insertAssets:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveAssetsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg0 ;
-(void)removeAssets:(id)arg0 ;
-(void)removeAssetsAtIndexes:(id)arg0 ;
-(void)replaceAssetsAtIndexes:(id)arg0 withAssets:(id)arg1 ;
-(void)setAssets:(id)arg0 ;
-(void)setKeyAsset:(id)arg0 ;
-(void)setProjectData:(id)arg0 ;
-(void)setProjectExtensionIdentifier:(id)arg0 ;
-(void)setProjectPreviewImage:(id)arg0 ;
-(void)setProjectRenderUuid:(id)arg0 ;


@end


#endif