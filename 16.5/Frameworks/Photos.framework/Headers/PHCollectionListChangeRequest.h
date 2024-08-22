// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCOLLECTIONLISTCHANGEREQUEST_H
#define PHCOLLECTIONLISTCHANGEREQUEST_H

@class NSString, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHCollectionList.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"

@interface PHCollectionListChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    PHCollectionList *_originalCollectionList;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *collectionsHelper; // ivar: _collectionsHelper
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) unsigned int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL isTopLevelUserCollection; // ivar: _isTopLevelUserCollection
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedCollectionList;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;


+(id)_changeRequestForCollectionList:(id)arg0 optionalChildCollections:(id)arg1 ;
+(id)changeRequestForCollectionList:(id)arg0 ;
+(id)changeRequestForCollectionList:(id)arg0 childCollections:(id)arg1 ;
+(id)changeRequestForTopLevelCollectionListUserCollections:(id)arg0 ;
+(id)creationRequestForCollectionListWithTitle:(id)arg0 ;
+(void)_deleteCollectionLists:(id)arg0 withOperation:(NSInteger)arg1 topLevelSelector:(SEL)arg2 ;
+(void)deleteCollectionLists:(id)arg0 ;
+(void)expungeCollectionLists:(id)arg0 ;
+(void)undeleteCollectionLists:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_mutableObjectIDsAndUUIDs;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)_prepareWithFetchResult:(id)arg0 ;
-(void)_setOriginalCollectionList:(id)arg0 ;
-(void)addChildCollection:(id)arg0 ;
-(void)addChildCollections:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)insertChildCollection:(id)arg0 inChildCollectionsAtIndex:(NSUInteger)arg1 ;
-(void)insertChildCollections:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveChildCollectionsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeChildCollection:(id)arg0 ;
-(void)removeChildCollectionFromChildCollectionsAtIndex:(NSUInteger)arg0 ;
-(void)removeChildCollections:(id)arg0 ;
-(void)removeChildCollectionsAtIndexes:(id)arg0 ;
-(void)replaceChildCollectionsAtIndex:(NSUInteger)arg0 withChildCollection:(id)arg1 ;
-(void)replaceChildCollectionsAtIndexes:(id)arg0 withChildCollections:(id)arg1 ;


@end


#endif