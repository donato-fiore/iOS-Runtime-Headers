// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEASSET_H
#define PLDUPLICATEASSET_H

@class NSString, NSNumber, NSManagedObjectID, NSDictionary;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"

@interface PLDuplicateAsset : NSObject {
    NSString *_originalFilename;
    NSInteger _score;
    NSNumber *_hasUserModifiedDateCreated;
    NSNumber *_hasUserModifiedTimezone;
    NSNumber *_hasUserModifiedLocation;
}


@property (retain) PLManagedAsset *asset; // ivar: _asset
@property (retain) NSString *assetCloudScopedIdentifier; // ivar: _assetCloudScopedIdentifier
@property (retain) NSManagedObjectID *assetObjectID; // ivar: _assetObjectID
@property (retain) NSString *assetObjectIDDescription; // ivar: _assetObjectIDDescription
@property (retain) NSString *assetUUID; // ivar: _assetUUID
@property BOOL dateUpdated; // ivar: _dateUpdated
@property (nonatomic) short duplicateAssetVisibilityState; // ivar: _duplicateAssetVisibilityState
@property BOOL enableEXIFDataAccess; // ivar: _enableEXIFDataAccess
@property BOOL facesUpdated; // ivar: _facesUpdated
@property (readonly) BOOL hasModifiedUserDateCreated;
@property (readonly) BOOL hasModifiedUserLocation;
@property (readonly) BOOL hasModifiedUserTimezone;
@property (readonly) BOOL hasModifiedUserTitle;
@property BOOL iptcUpdated; // ivar: _iptcUpdated
@property (readonly) BOOL isMergeReady;
@property (readonly) NSDictionary *jsonDescriptionData;
@property BOOL locationUpdated; // ivar: _locationUpdated
@property (nonatomic) NSInteger mergeStatus; // ivar: _mergeStatus
@property (nonatomic) NSInteger originalResolution; // ivar: _originalResolution
@property (readonly) NSString *privateDescription;
@property BOOL resourceComparisonPropertyUpdateLocation; // ivar: _resourceComparisonPropertyUpdateLocation
@property (retain) NSString *resourceSwapAssetUUID; // ivar: _resourceSwapAssetUUID
@property BOOL resourceSwapDisabled; // ivar: _resourceSwapDisabled
@property (readonly) NSInteger score;
@property (readonly) NSString *shortDescription;
@property BOOL timezoneUpdated; // ivar: _timezoneUpdated
@property BOOL titleUpdated; // ivar: _titleUpdated
@property (readonly) NSString *veryShortDescription;


+(BOOL)isDuplicateAssetSortChangedObject:(id)arg0 ;
+(id)relationshipKeyPathsForMergePrefetching;
+(id)relationshipKeyPathsForPrefetching;
-(BOOL)_validCPLAssetsWithAssets:(id)arg0 ;
-(NSInteger)_buildBaseScore;
-(NSInteger)_buildUserModifiedScore;
-(NSInteger)_correctedCompareDate:(id)arg0 otherDate:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 enabledMergeComparison:(BOOL)arg1 ;
-(NSInteger)compareResource:(id)arg0 error:(*id)arg1 ;
-(id)_additionalDescriptionDictionaryWithPIIDetails:(BOOL)arg0 ;
-(id)_additionalDescriptionState:(id)arg0 ;
-(id)_additionalDescriptionWithPIIDetails:(BOOL)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 cloudScopedIdentifier:(id)arg1 enableEXIFDataAccess:(BOOL)arg2 ;
-(short)_calculateDuplicateAssetVisibilityState;
-(struct PLDuplicateAssetScoreTuple )_compareResourcesAdditionalChecksFromOther:(id)arg0 ;
-(struct PLDuplicateAssetScoreTuple )_compareResourcesMatchingKindSubtypeCheckFromOther:(id)arg0 error:(*id)arg1 ;
-(struct PLDuplicateAssetScoreTuple )_compareResourcesMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)arg0 ;
-(struct PLDuplicateAssetScoreTuple )_compareResourcesMatchingPlaybackStyleCheckFromOther:(id)arg0 error:(*id)arg1 ;
-(struct PLDuplicateAssetScoreTuple )_compareResourcesNotMatchingPlaybackStyleAndKindSubTypeCheckFromOther:(id)arg0 error:(*id)arg1 ;
-(void)_compareResourceReverseCheckFromOther:(id)arg0 score:(struct PLDuplicateAssetScoreTuple *)arg1 ;
-(void)_compareResourceTIFFCheckFromAsset:(id)arg0 other:(id)arg1 scoreProperty:(*short)arg2 ;
-(void)_compareResourcesResetPropertiesWithOther:(id)arg0 ;
-(void)_compareUTICheckFromOther:(id)arg0 scoreTuple:(struct PLDuplicateAssetScoreTuple *)arg1 ;
-(void)_configureInitPropertiesWithAsset:(id)arg0 ;
-(void)_fileFormatIncrementScore:(*NSInteger)arg0 ;
-(void)_mergeComparisonScoreModifierWithOtherAsset:(id)arg0 score:(*NSInteger)arg1 otherScore:(*NSInteger)arg2 ;
-(void)_tieBreakerComparisonScoreWithOtherAsset:(id)arg0 score:(*NSInteger)arg1 otherScore:(*NSInteger)arg2 ;
-(void)_updateScoreOnCondition:(BOOL)arg0 incrementOtherScore:(BOOL)arg1 scoreTuple:(struct PLDuplicateAssetScoreTuple *)arg2 other:(id)arg3 propertyName:(id)arg4 additionalLogString:(id)arg5 ;
-(void)_updateScoresUsingLatestDateWithDate:(id)arg0 otherDate:(id)arg1 score:(*NSInteger)arg2 otherScore:(*NSInteger)arg3 ;


@end


#endif