// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLADDITIONALASSETATTRIBUTES_H
#define PLADDITIONALASSETATTRIBUTES_H

@class CLLocation, NSString, NSDate, NSData, NSNumber, NSSet, CPLScopedIdentifier;
@protocol PLPTPTransferableAdditionalAssetAttributes;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLAssetDescription.h"
#import "PLEditedIPTCAttributes.h"
#import "PLCloudMasterMediaMetadata.h"
#import "PLSceneprint.h"
#import "PLSpatialOverCaptureInformation.h"
#import "PLUnmanagedAdjustment.h"

@interface PLAdditionalAssetAttributes : PLManagedObject <PLPTPTransferableAdditionalAssetAttributes>



@property (retain, nonatomic, setter=_setCachedShiftedLocation:) CLLocation *_cachedShiftedLocation; // ivar: __cachedShiftedLocation
@property (retain, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *adjustedFingerPrint;
@property (nonatomic) BOOL allowedForAnalysis;
@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) PLAssetDescription *assetDescription;
@property (nonatomic) short cameraCaptureDevice;
@property (nonatomic) int cloudAvalanchePickType;
@property (nonatomic) short cloudKindSubtype;
@property (nonatomic) NSUInteger cloudRecoveryState;
@property (nonatomic) short cloudStateRecoveryAttemptsCount;
@property (nonatomic) short dateCreatedSource;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *deferredPhotoIdentifier;
@property (nonatomic) unsigned short deferredProcessingCandidateOptions;
@property (readonly, copy) NSString *description;
@property (nonatomic) short destinationAssetCopyState;
@property (retain, nonatomic) NSData *distanceIdentity;
@property (retain, nonatomic) PLEditedIPTCAttributes *editedIPTCAttributes;
@property (retain, nonatomic) NSString *editorBundleID;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property (retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (readonly, retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (readonly, retain, nonatomic) NSString *exifTimestampString;
@property (retain, nonatomic) NSString *exifTimestampString;
@property (nonatomic) short faceAnalysisVersion;
@property (retain, nonatomic) NSData *faceRegions;
@property (nonatomic) CGFloat gpsHorizontalAccuracy;
@property (readonly) NSUInteger hash;
@property (nonatomic) short importedBy;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSString *importedByDisplayName;
@property (retain, nonatomic) NSNumber *inferredTimeZoneOffset;
@property (retain, nonatomic) NSSet *keywords;
@property (retain, nonatomic) NSDate *lastUploadAttemptDate;
@property (retain, nonatomic) NSNumber *locationHash;
@property (retain, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSString *masterFingerPrint;
@property (copy, nonatomic) NSString *masterFingerPrint;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) NSData *mediaMetadataData;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) NSString *montage;
@property (retain, nonatomic) NSData *objectSaliencyRectsData;
@property (retain, nonatomic) id *originalAssetsUUID;
@property (retain, nonatomic) NSString *originalFilename;
@property (retain, nonatomic) NSNumber *originalFilesize;
@property (retain, nonatomic) NSData *originalHash;
@property (retain, nonatomic) NSNumber *originalHeight;
@property (retain, nonatomic) NSNumber *originalOrientation;
@property (retain, nonatomic) NSNumber *originalResourceChoice;
@property (retain, nonatomic) NSNumber *originalWidth;
@property (readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (nonatomic) NSInteger pendingPlayCount;
@property (nonatomic) NSInteger pendingShareCount;
@property (nonatomic) NSInteger pendingViewCount;
@property (retain, nonatomic) NSSet *personReferences;
@property (retain, nonatomic) NSString *photoStreamTagId;
@property (retain, nonatomic) NSData *placeAnnotationData;
@property (nonatomic) NSInteger playCount;
@property (readonly, nonatomic) NSInteger ptpTrashedState;
@property (nonatomic) NSInteger ptpTrashedState;
@property (retain, nonatomic) NSString *publicGlobalUUID;
@property (retain, nonatomic) NSData *reverseLocationData;
@property (retain, nonatomic) NSNumber *reverseLocationDataIsValid;
@property (nonatomic) BOOL sceneAnalysisIsFromPreview;
@property (retain, nonatomic) NSDate *sceneAnalysisTimestamp;
@property (nonatomic) short sceneAnalysisVersion;
@property (retain, nonatomic) NSSet *sceneClassifications;
@property (retain, nonatomic) PLSceneprint *sceneprint;
@property (nonatomic) NSInteger shareCount;
@property (copy, nonatomic) NSString *shareOriginator;
@property (nonatomic) short shareType;
@property (retain, nonatomic) CLLocation *shiftedLocation;
@property (retain, nonatomic) NSData *shiftedLocationData;
@property (nonatomic) BOOL shiftedLocationIsValid;
@property (copy, nonatomic) NSString *snowdaySnowplowIdentifier;
@property (retain, nonatomic) CPLScopedIdentifier *sourceAssetForDuplicationCPLScopedIdentifier;
@property (retain, nonatomic) NSString *sourceAssetForDuplicationIdentifier;
@property (retain, nonatomic) NSString *sourceAssetForDuplicationScopeIdentifier;
@property (copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (readonly, retain, nonatomic) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (readonly) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short syndicationHistory;
@property (retain, nonatomic) NSString *syndicationIdentifier;
@property (retain, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSNumber *timeZoneOffset;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) PLUnmanagedAdjustment *unmanagedAdjustment;
@property (retain, nonatomic) NSNumber *uploadAttempts;
@property (nonatomic) NSUInteger variationSuggestionStates;
@property (nonatomic) int videoCpDisplayTimescale;
@property (nonatomic) NSInteger videoCpDisplayValue;
@property (nonatomic) int videoCpDurationTimescale;
@property (nonatomic) NSInteger viewCount;


+(BOOL)shouldPersistImportedByDisplayName:(id)arg0 ;
+(id)descriptionForDestinationAssetCopyState:(short)arg0 ;
+(id)entityName;
+(id)listOfSyncedProperties;
+(id)newExtraDurationDataFromStillDisplayTime:(struct ? )arg0 videoDuration:(struct ? )arg1 ;
+(void)fromExtraDurationData:(id)arg0 getStillDisplayTime:(struct ? *)arg1 videoDuration:(struct ? *)arg2 ;
-(BOOL)hasCloudRecoveryStateFlagSet:(NSUInteger)arg0 ;
-(BOOL)hasConsistentCloudState;
-(BOOL)hasDuplicateMatchingData;
-(BOOL)isSyncableChange;
-(BOOL)isUserInterfaceChange;
-(BOOL)supportsCloudUpload;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)duplicateSortPropertyNames;
-(id)duplicateSortPropertyNamesSkip;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(void)_updateInferredTimeZoneOffsetWithChangedValues:(id)arg0 ;
-(void)removeCloudRecoveryStateFlag:(NSUInteger)arg0 ;
-(void)setDuplicateMatchingData:(id)arg0 duplicateMatchingAlternateData:(id)arg1 ;
-(void)truncatedOriginalCheckChangedValues:(id)arg0 ;
-(void)willSave;


@end


#endif