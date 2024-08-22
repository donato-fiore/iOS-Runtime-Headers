// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIVIDEOMANAGEDOBJECT_H
#define VUIVIDEOMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSDictionary, NSData, NSDate, NSNumber, NSURL, NSSet;



@interface VUIVideoManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSDictionary *additionalFPSRequestParams;
@property (retain, nonatomic) NSData *additionalFPSRequestParamsJSONData;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL allowsManualRenewal;
@property (copy, nonatomic) NSDate *availabilityEndDate;
@property (copy, nonatomic) NSNumber *bookmarkTime;
@property (copy, nonatomic) NSDate *bookmarkTimeStamp;
@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic) NSString *contentRatingDomain;
@property (copy, nonatomic) NSNumber *contentRatingRank;
@property (copy, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSData *downloadQOSMetricsJSONData;
@property (nonatomic) NSInteger downloadState;
@property (copy, nonatomic) NSNumber *downloadTaskIdentifier;
@property (copy, nonatomic) NSURL *downloadURL;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (retain, nonatomic) NSSet *fpsKeyInfo;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSURL *fpsNonceURL;
@property (copy, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (copy, nonatomic) NSString *genreName;
@property (nonatomic) BOOL hasExpirationDate;
@property (retain, nonatomic) NSSet *imageInfos;
@property (nonatomic) BOOL isAdultContent;
@property (copy, nonatomic) NSString *localPlaybackRelativeFilePath;
@property (copy, nonatomic) NSURL *localPlaybackURL;
@property (copy, nonatomic) NSNumber *mainContentRelativeBookmarkTime;
@property (copy, nonatomic) NSDate *mainContentRelativeBookmarkTimeStamp;
@property (nonatomic) BOOL markedAsDeleted;
@property (copy, nonatomic) NSString *mediaDescription;
@property (readonly, nonatomic) NSDictionary *mediaMetrics;
@property (retain, nonatomic) NSData *mediaMetricsJSONData;
@property (copy, nonatomic) NSNumber *offlineKeyRenewalPolicy;
@property (copy, nonatomic) NSURL *playbackURL;
@property (copy, nonatomic) NSString *referenceID;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSNumber *requiredAgeForPlayback;
@property (copy, nonatomic) NSString *rtcServiceIdentifier;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) BOOL shouldMarkAsDeletedAfterCancellationOrFailure;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSData *vpafMetricsJSONData;


+(id)fetchRequest;
+(id)keyPathsForValuesAffectingExpirationDate;
+(id)keyPathsForValuesAffectingLocalPlaybackURL;


@end


#endif