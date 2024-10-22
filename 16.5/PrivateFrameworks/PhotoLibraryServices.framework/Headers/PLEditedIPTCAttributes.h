// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLEDITEDIPTCATTRIBUTES_H
#define PLEDITEDIPTCATTRIBUTES_H

@class NSString, NSData;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"

@interface PLEditedIPTCAttributes : PLManagedObject

@property (readonly, nonatomic) NSString *actionAdvised;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (readonly, nonatomic) NSString *audioDuration;
@property (readonly, nonatomic) NSString *audioOutcue;
@property (readonly, nonatomic) NSString *audioSamplingRate;
@property (readonly, nonatomic) NSString *audioSamplingRes;
@property (readonly, nonatomic) NSString *audioType;
@property (readonly, nonatomic) NSString *byLine;
@property (readonly, nonatomic) NSString *byLineTitle;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *ciAdrCity;
@property (readonly, nonatomic) NSString *ciAdrCtry;
@property (readonly, nonatomic) NSString *ciAdrExtadr;
@property (readonly, nonatomic) NSString *ciAdrPcode;
@property (readonly, nonatomic) NSString *ciAdrRegion;
@property (readonly, nonatomic) NSString *ciEmailWork;
@property (readonly, nonatomic) NSString *ciTelWork;
@property (readonly, nonatomic) NSString *ciUrlWork;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *contact;
@property (readonly, nonatomic) NSString *contentLocationCode;
@property (readonly, nonatomic) NSString *contentLocationName;
@property (readonly, nonatomic) NSString *copyrightNotice;
@property (readonly, nonatomic) NSString *countryPrimaryLocationCode;
@property (readonly, nonatomic) NSString *countryPrimaryLocationName;
@property (readonly, nonatomic) NSString *creatorContactInfo;
@property (readonly, nonatomic) NSString *credit;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *dateCreated;
@property (readonly, nonatomic) NSString *digitalCreationDate;
@property (readonly, nonatomic) NSString *digitalCreationTime;
@property (readonly, nonatomic) NSString *editStatus;
@property (readonly, nonatomic) NSString *editorialUpdate;
@property (readonly, nonatomic) NSString *expirationDate;
@property (readonly, nonatomic) NSString *expirationTime;
@property (readonly, nonatomic) NSString *fixtureIdentifier;
@property (readonly, nonatomic) NSString *headline;
@property (readonly, nonatomic) NSString *imageOrientation;
@property (readonly, nonatomic) NSString *imageType;
@property (readonly, nonatomic) NSString *keywords;
@property (readonly, nonatomic) NSString *languageIdentifier;
@property (readonly, nonatomic) NSString *objectAttributeReference;
@property (readonly, nonatomic) NSString *objectCycle;
@property (readonly, nonatomic) NSString *objectName;
@property (readonly, nonatomic) NSString *objectTypeReference;
@property (readonly, nonatomic) NSString *originalTransmissionReference;
@property (readonly, nonatomic) NSString *originatingProgram;
@property (readonly, nonatomic) NSString *programVersion;
@property (readonly, nonatomic) NSString *provinceState;
@property (readonly, nonatomic) NSString *referenceDate;
@property (readonly, nonatomic) NSString *referenceNumber;
@property (readonly, nonatomic) NSString *referenceService;
@property (readonly, nonatomic) NSString *releaseDate;
@property (readonly, nonatomic) NSString *releaseTime;
@property (readonly, nonatomic) NSString *scene;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *specialInstructions;
@property (readonly, nonatomic) NSString *starRating;
@property (readonly, nonatomic) NSString *subLocation;
@property (readonly, nonatomic) NSString *subjectReference;
@property (readonly, nonatomic) NSString *supplementalCategory;
@property (readonly, nonatomic) NSString *timeCreated;
@property (readonly, nonatomic) NSString *urgency;
@property (readonly, nonatomic) NSString *usageTerms;
@property (readonly, nonatomic) NSString *writerEditor;


+(id)distinctValuesForKeyPath:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)iptcKeyMap;
-(BOOL)supportsCloudUpload;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(void)clearEditedIPTCData;
-(void)setIPTCData:(id)arg0 ;
-(void)willSave;


@end


#endif