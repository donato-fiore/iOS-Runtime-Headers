// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHMEMORYCHANGEREQUEST_H
#define PHMEMORYCHANGEREQUEST_H

@class NSString, NSDate, NSNumber, NSDictionary, NSData, NSManagedObjectID;
@protocol PHInsertChangeRequest, PHUpdateChangeRequest;


#import "PHChangeRequest.h"
#import "PHMemory.h"
#import "PHMemoryFeature.h"
#import "PHRelationshipChangeRequestHelper.h"
#import "PHObjectPlaceholder.h"
#import "PHUserFeedback.h"

@interface PHMemoryChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

 {
    PHMemory *_backingMemory;
    BOOL _incrementPlayCount;
    BOOL _incrementShareCount;
    BOOL _incrementViewCount;
    BOOL _didUnsetUserFeedback;
    BOOL _didSetUserCreated;
}


@property (readonly, nonatomic) NSInteger accessScopeOptionsRequirement;
@property (retain, nonatomic) PHMemoryFeature *blacklistedFeature;
@property (nonatomic) NSUInteger category;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) BOOL clientEntitledToMemoryMutation; // ivar: _clientEntitledToMemoryMutation
@property (readonly, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *curatedAssetsHelper; // ivar: _curatedAssetsHelper
@property (retain, nonatomic) NSNumber *customMaximumNumberOfUserCuratedAssets; // ivar: _customMaximumNumberOfUserCuratedAssets
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *customUserAssetsHelper; // ivar: _customUserAssetsHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *extendedCuratedAssetsHelper; // ivar: _extendedCuratedAssetsHelper
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic) NSInteger featuredState;
@property (retain, nonatomic) NSString *graphMemoryIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetHelper; // ivar: _keyAssetHelper
@property (retain, nonatomic) NSDate *lastEnrichmentDate;
@property (retain, nonatomic) NSDate *lastMoviePlayedDate;
@property (retain, nonatomic) NSDate *lastViewedDate;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSDictionary *movieAssetState; // ivar: _movieAssetState
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *movieCuratedAssetsHelper; // ivar: _movieCuratedAssetsHelper
@property (retain, nonatomic) NSData *movieData;
@property (readonly, getter=isMutated) BOOL mutated;
@property (nonatomic) NSUInteger notificationState;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (nonatomic) unsigned short pendingState;
@property (retain, nonatomic) NSData *photosGraphData;
@property (nonatomic) NSInteger photosGraphVersion;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedMemory;
@property (nonatomic, getter=isRejected) BOOL rejected;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper; // ivar: _representativeAssetsHelper
@property (nonatomic) CGFloat score;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) NSInteger storyColorGradeKind;
@property (retain, nonatomic) NSString *storyTitleCategory;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, getter=isUserCreated) BOOL userCreated; // ivar: _userCreated
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *userCuratedAssetsHelper; // ivar: _userCuratedAssetsHelper
@property (copy, nonatomic) PHUserFeedback *userFeedback; // ivar: _userFeedback


+(BOOL)_shouldAcceptProposedAttributes:(id)arg0 ;
+(NSInteger)_titleFormatForProposedAttributes:(id)arg0 ;
+(id)_preferredAttributesForMemoryCreationFromObject:(id)arg0 withSuccess:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 error:(id)arg4 proposedAttributes:(id)arg5 ;
+(id)changeRequestForMemory:(id)arg0 ;
+(id)changeRequestForRemotelyViewedMemoryWithLocalIdentifier:(id)arg0 ;
+(id)creationRequestForMemoryWithTitle:(id)arg0 subtitle:(id)arg1 creationDate:(id)arg2 category:(NSUInteger)arg3 subcategory:(NSUInteger)arg4 representativeAssetUUIDs:(id)arg5 curatedAssetUUIDs:(id)arg6 extendedCuratedAssetUUIDs:(id)arg7 keyAssetUUID:(id)arg8 ;
+(id)creationRequestForMemoryWithTitle:(id)arg0 subtitle:(id)arg1 creationDate:(id)arg2 category:(NSUInteger)arg3 subcategory:(NSUInteger)arg4 representativeAssets:(id)arg5 curatedAssets:(id)arg6 extendedCuratedAssets:(id)arg7 keyAsset:(id)arg8 ;
+(id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg0 proposedAttributes:(id)arg1 ;
+(id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg0 proposedAttributes:(id)arg1 ;
+(id)preferredAttributesForMemoryCreationFromPeople:(id)arg0 proposedAttributes:(id)arg1 ;
+(id)validateMemoryTitle:(id)arg0 error:(*id)arg1 ;
+(void)blockPerson:(id)arg0 ;
+(void)blockPerson:(id)arg0 withAsset:(id)arg1 ;
+(void)deleteMemories:(id)arg0 ;
+(void)unblockPersonsInMemoriesWithBlockedPersonFeature:(id)arg0 ;
-(BOOL)allowMutationToManagedObject:(id)arg0 propertyKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyMutationsToManagedObject:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateMutationsToManagedObject:(id)arg0 error:(*id)arg1 ;
-(NSInteger)storySerializedTitleCategory;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)initForNewObject;
-(id)initWithUUID:(id)arg0 objectID:(id)arg1 ;
-(id)initWithXPCDict:(id)arg0 request:(id)arg1 clientAuthorization:(id)arg2 ;
-(void)_prepareAssetIDsIfNeeded;
-(void)_prepareCustomUserAssetIDsIfNeeded;
-(void)_setBackingMemory:(id)arg0 ;
-(void)addCustomUserAssets:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;
-(void)incrementPlayCount;
-(void)incrementShareCount;
-(void)incrementViewCount;
-(void)insertCustomUserAssets:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveCustomUserAssetsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeCustomUserAssets:(id)arg0 ;
-(void)removeCustomUserAssetsAtIndexes:(id)arg0 ;
-(void)replaceCustomUserAssetsAtIndexes:(id)arg0 withAssets:(id)arg1 ;
-(void)setCustomUserAssets:(id)arg0 ;
-(void)setKeyAsset:(id)arg0 ;
-(void)setKeyAssetUUID:(id)arg0 ;
-(void)setMovieCuratedAssets:(id)arg0 ;
-(void)setMovieStateData:(id)arg0 forAsset:(id)arg1 ;
-(void)setQueryHintObject:(id)arg0 ;
-(void)setQueryHintObjects:(id)arg0 ;
-(void)setRepresentativeAssetUUIDs:(id)arg0 curatedAssetUUIDs:(id)arg1 extendedCuratedAssetUUIDs:(id)arg2 keyAssetUUID:(id)arg3 ;
-(void)setRepresentativeAssets:(id)arg0 curatedAssets:(id)arg1 extendedCuratedAssets:(id)arg2 keyAsset:(id)arg3 ;
-(void)setStorySerializedTitleCategory:(NSInteger)arg0 ;
-(void)setSubcategory:(NSUInteger)arg0 ;
-(void)setUserCuratedAssets:(id)arg0 ;


@end


#endif