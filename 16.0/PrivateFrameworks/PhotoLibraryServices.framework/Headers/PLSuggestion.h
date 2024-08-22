// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSUGGESTION_H
#define PLSUGGESTION_H

@class NSData, NSDate, NSString, NSSet;
@protocol PLCloudDeletable, PLBackgroundUpdatesSharingComposition;


#import "PLManagedObject.h"

@interface PLSuggestion : PLManagedObject <PLCloudDeletable, PLBackgroundUpdatesSharingComposition>



@property (retain, nonatomic) NSData *actionData;
@property (retain, nonatomic) NSDate *activationDate;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *expungeDate;
@property (nonatomic) unsigned short featuredState;
@property (retain, nonatomic) NSData *featuresData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *keyAssets;
@property (nonatomic) unsigned short notificationState;
@property (retain, nonatomic) NSDate *relevantUntilDate;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (nonatomic) short sharingComposition;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned short state;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short subtype;
@property (retain, nonatomic) NSString *suggestionContext;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned short type;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) short version;


+(BOOL)_suggestionSubtypeAllowedToContainSyndicatedAssets:(unsigned short)arg0 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(NSUInteger)_deleteSuggestionsMatchingPredicate:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(NSUInteger)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)arg0 ;
+(NSUInteger)deletePendingSuggestionsCreatedBefore:(id)arg0 withTypes:(id)arg1 andRejectedAssetsBySuggestionType:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(NSUInteger)deleteSuggestionsWithObjectIDs:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)_representativeAssetIDsInSuggestion:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)_suggestionsMatchingPredicate:(id)arg0 sortDescriptors:(id)arg1 limit:(NSInteger)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_syncablePredicate;
+(id)cloudUUIDKeyForDeletion;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 withUUID:(id)arg1 ;
+(id)predicateForAllAssetsInSuggestion:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)predicateForPrivateOnlyCollectionsWithinSubset:(id)arg0 ;
+(id)predicateForSharedOnlyCollectionsWithinSubset:(id)arg0 ;
+(id)suggestionObjectIDsContainingAsset:(id)arg0 ;
+(id)suggestionWithUUID:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)suggestionsToPrefetchInManagedObjectContext:(id)arg0 ;
+(id)suggestionsToUploadInPhotoLibrary:(id)arg0 limit:(NSInteger)arg1 ;
+(id)suggestionsWithUUIDs:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(short)_calculateSharingCompositionForSuggestion:(id)arg0 ;
+(void)resetCloudStateInPhotoLibrary:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isPending;
-(BOOL)isSyncableChange;
-(BOOL)supportsCloudUpload;
-(BOOL)updateWithCPLSuggestionChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)cplFullRecord;
-(id)cplSuggestionChange;
-(id)mutableKeyAssets;
-(id)mutableRepresentativeAssets;
-(void)_recalculateSharingCompositionIfNeeded;
-(void)delete;
-(void)prepareForDeletion;
-(void)removeRepresentativeAsset:(id)arg0 ;
-(void)replaceKeyAsset:(id)arg0 ;
-(void)updateCachedCounts:(id)arg0 ;
-(void)updateStartAndEndDate;
-(void)willSave;


@end


#endif