// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETCOLLECTIONCHANGEREQUEST_H
#define PHASSETCOLLECTIONCHANGEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHAssetCollection.h"
#import "PHObjectPlaceholder.h"

@interface PHAssetCollectionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>



@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper; // ivar: _assetsHelper
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *customKeyAssetHelper; // ivar: _customKeyAssetHelper
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) PHAssetCollection *originalAssetCollection; // ivar: _originalAssetCollection
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;


+(id)_changeRequestForAssetCollection:(id)arg0 optionalAssets:(id)arg1 ;
+(id)changeRequestForAssetCollection:(id)arg0 ;
+(id)changeRequestForAssetCollection:(id)arg0 assets:(id)arg1 ;
+(id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg0 ;
+(id)creationRequestForAssetCollectionWithTitle:(id)arg0 ;
+(id)validateAssetCollectionTitle:(id)arg0 error:(*id)arg1 ;
+(void)_deleteAssetCollections:(id)arg0 withOperation:(NSInteger)arg1 topLevelSelector:(SEL)arg2 ;
+(void)deleteAssetCollections:(id)arg0 ;
+(void)expungeAssetCollections:(id)arg0 ;
+(void)undeleteAssetCollections:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)isPinned;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_mutableAssetsObjectIDsAndUUIDs;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)_prepareKeyAssetIDIfNeeded;
-(void)_prepareWithFetchResult:(id)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)addAssets:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)insertAsset:(id)arg0 inAssetsAtIndex:(NSUInteger)arg1 ;
-(void)insertAssets:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveAssetsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeAsset:(id)arg0 ;
-(void)removeAssetFromAssetsAtIndex:(NSUInteger)arg0 ;
-(void)removeAssets:(id)arg0 ;
-(void)removeAssetsAtIndexes:(id)arg0 ;
-(void)replaceAssetInAssetsAtIndex:(NSUInteger)arg0 withAsset:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg0 withAssets:(id)arg1 ;
-(void)setCustomKeyAsset:(id)arg0 ;
-(void)setIsPinned:(BOOL)arg0 ;


@end


#endif