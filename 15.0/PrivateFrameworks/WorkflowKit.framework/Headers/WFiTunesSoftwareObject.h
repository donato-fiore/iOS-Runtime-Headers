// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFITUNESSOFTWAREOBJECT_H
#define WFITUNESSOFTWAREOBJECT_H

@class NSString, NSNumber, NSDictionary, NSArray, NSDate;
@protocol MTLJSONSerializing;


#import "WFiTunesObject.h"

@interface WFiTunesSoftwareObject : WFiTunesObject <MTLJSONSerializing>



@property (readonly, nonatomic) NSString *artistID; // ivar: _artistID
@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSNumber *averageRating; // ivar: _averageRating
@property (readonly, nonatomic) NSNumber *averageRatingLatestVersion; // ivar: _averageRatingLatestVersion
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSString *contentRating; // ivar: _contentRating
@property (readonly, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (readonly, nonatomic) NSString *formattedPrice; // ivar: _formattedPrice
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *iPadScreenshotURLs; // ivar: _iPadScreenshotURLs
@property (readonly, nonatomic) BOOL isUniversal; // ivar: _isUniversal
@property (readonly, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly, nonatomic) NSString *minimumOSVersion; // ivar: _minimumOSVersion
@property (readonly, nonatomic) NSNumber *numberOfRatings; // ivar: _numberOfRatings
@property (readonly, nonatomic) NSNumber *numberOfRatingsLatestVersion; // ivar: _numberOfRatingsLatestVersion
@property (readonly, nonatomic) NSNumber *price; // ivar: _price
@property (readonly, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly, nonatomic) NSString *releaseNotes; // ivar: _releaseNotes
@property (readonly, nonatomic) NSArray *screenshotURLs; // ivar: _screenshotURLs
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedDevices; // ivar: _supportedDevices
@property (readonly, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages
@property (readonly, nonatomic) BOOL supportsGameCenter; // ivar: _supportsGameCenter
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;


@end


#endif