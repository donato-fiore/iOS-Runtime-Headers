// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLASSETCHANGE_H
#define CPLASSETCHANGE_H

@class NSDictionary, NSString, NSDate, NSData, NSArray, CLLocation, NSNumber;


#import "CPLItemChange.h"
#import "CPLAdjustments.h"
#import "CPLFaceAnalysisReference.h"
#import "CPLPlaceAnnotation.h"

@interface CPLAssetChange : CPLItemChange {
    NSDictionary *_resourcePerResourceType;
}


@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (copy, nonatomic) NSDate *addedDate; // ivar: _addedDate
@property (retain, nonatomic) NSData *adjustedMediaMetaData; // ivar: _adjustedMediaMetaData
@property (copy, nonatomic) NSString *adjustedMediaMetaDataType; // ivar: _adjustedMediaMetaDataType
@property (retain, nonatomic) CPLAdjustments *adjustments; // ivar: _adjustments
@property (copy, nonatomic) NSDate *assetDate; // ivar: _assetDate
@property (nonatomic) NSUInteger assetHDRType; // ivar: _assetHDRType
@property (nonatomic) NSUInteger assetSubtype; // ivar: _assetSubtype
@property (nonatomic) NSUInteger burstFlags; // ivar: _burstFlags
@property (copy, nonatomic) NSString *burstIdentifier; // ivar: _burstIdentifier
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (nonatomic) NSInteger customRenderedValue; // ivar: _customRenderedValue
@property (copy, nonatomic) NSString *deletedByUserIdentifier; // ivar: _deletedByUserIdentifier
@property (nonatomic) NSInteger duration; // ivar: _duration
@property (copy, nonatomic) NSString *extendedDescription; // ivar: _extendedDescription
@property (copy, nonatomic) CPLFaceAnalysisReference *faces;
@property (copy, nonatomic) NSString *facesAdjustmentsFingerprint; // ivar: _facesAdjustmentsFingerprint
@property (copy, nonatomic) NSData *facesData; // ivar: _facesData
@property (nonatomic) NSInteger facesVersion; // ivar: _facesVersion
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) NSArray *keywords; // ivar: _keywords
@property (copy, nonatomic) NSDate *lastSharedDate; // ivar: _lastSharedDate
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *masterIdentifier; // ivar: _masterIdentifier
@property (copy, nonatomic) NSString *mediaGroupIdentifier; // ivar: _mediaGroupIdentifier
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) NSUInteger originalChoice; // ivar: _originalChoice
@property (copy, nonatomic) NSArray *people; // ivar: _people
@property (retain, nonatomic) CPLPlaceAnnotation *placeAnnotation; // ivar: _placeAnnotation
@property (nonatomic) NSInteger playCount; // ivar: _playCount
@property (copy, nonatomic) NSArray *resources; // ivar: _resources
@property (nonatomic) NSInteger shareCount; // ivar: _shareCount
@property (nonatomic) NSInteger sharedLibrarySharingState; // ivar: _sharedLibrarySharingState
@property (copy, nonatomic) NSString *syndicationIdentifier; // ivar: _syndicationIdentifier
@property (copy, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName
@property (copy, nonatomic) NSNumber *timeZoneOffset; // ivar: _timeZoneOffset
@property (nonatomic) NSInteger videoComplementDurationTimescale; // ivar: _videoComplementDurationTimescale
@property (nonatomic) NSInteger videoComplementDurationValue; // ivar: _videoComplementDurationValue
@property (nonatomic) NSInteger videoComplementImageDisplayTimescale; // ivar: _videoComplementImageDisplayTimescale
@property (nonatomic) NSInteger videoComplementImageDisplayValue; // ivar: _videoComplementImageDisplayValue
@property (nonatomic) NSUInteger videoComplementVisibilityState; // ivar: _videoComplementVisibilityState
@property (nonatomic) NSInteger viewCount; // ivar: _viewCount


+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg0 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)serverSupportsDeletedByUserIdentifier;
+(BOOL)serverSupportsSharedLibrarySharingState;
+(BOOL)serverSupportsVision;
+(BOOL)supportsDeletion;
+(BOOL)supportsResources;
+(BOOL)supportsSecureCoding;
+(BOOL)supportsSharingScopedIdentifier;
+(Class)relatedRecordClass;
+(id)copyPropertyBlockForDirection:(SEL)arg0 ;
+(id)equalityBlockForDirection:(SEL)arg0 ;
-(BOOL)_canLowerQuota;
-(BOOL)isAssetChange;
-(BOOL)supportsResourceType:(NSUInteger)arg0 ;
-(BOOL)validateChangeWithError:(*id)arg0 ;
-(BOOL)validateFullRecord;
-(BOOL)validateRecordForTracker:(id)arg0 ;
-(NSInteger)dequeueOrder;
-(NSUInteger)fullChangeTypeForFullRecord;
-(NSUInteger)supportedChangeTypes;
-(id)allRelatedScopedIdentifiers;
-(id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0 ;
-(id)compactedChangeWithRelatedChanges:(id)arg0 isOnlyChange:(BOOL)arg1 fullRecord:(id)arg2 usingStorageView:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)masterScopedIdentifier;
-(id)propertiesDescription;
-(id)propertiesForChangeType:(NSUInteger)arg0 ;
-(id)relatedIdentifier;
-(id)resourceForType:(NSUInteger)arg0 ;
-(id)scopeIdentifiersForQuarantine;
-(id)scopedIdentifiersForMapping;
-(id)translateToClientChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(*id)arg1 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg0 ;
-(void)setMasterScopedIdentifier:(id)arg0 ;
-(void)setRelatedIdentifier:(id)arg0 ;


@end


#endif