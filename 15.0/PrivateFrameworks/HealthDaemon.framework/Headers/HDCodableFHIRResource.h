// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEFHIRRESOURCE_H
#define HDCODABLEFHIRRESOURCE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "HDCodableMessageVersion.h"

@interface HDCodableFHIRResource : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger extractionHints; // ivar: _extractionHints
@property (retain, nonatomic) NSString *fhirVersion; // ivar: _fhirVersion
@property (nonatomic) CGFloat firstSeenDate; // ivar: _firstSeenDate
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName; // ivar: _firstSeenDateTimeZoneName
@property (retain, nonatomic) NSString *gatewayExternalID; // ivar: _gatewayExternalID
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (nonatomic) BOOL hasExtractionHints;
@property (readonly, nonatomic) BOOL hasFhirVersion;
@property (nonatomic) BOOL hasFirstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (readonly, nonatomic) BOOL hasOriginVersionBuild;
@property (nonatomic) BOOL hasOriginVersionMajor;
@property (nonatomic) BOOL hasOriginVersionMinor;
@property (nonatomic) BOOL hasOriginVersionPatch;
@property (readonly, nonatomic) BOOL hasRawContent;
@property (nonatomic) BOOL hasReceivedDate;
@property (readonly, nonatomic) BOOL hasReceivedDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasResourceID;
@property (readonly, nonatomic) BOOL hasResourceType;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion; // ivar: _messageVersion
@property (retain, nonatomic) NSString *originVersionBuild; // ivar: _originVersionBuild
@property (nonatomic) NSInteger originVersionMajor; // ivar: _originVersionMajor
@property (nonatomic) NSInteger originVersionMinor; // ivar: _originVersionMinor
@property (nonatomic) NSInteger originVersionPatch; // ivar: _originVersionPatch
@property (retain, nonatomic) NSData *rawContent; // ivar: _rawContent
@property (nonatomic) CGFloat receivedDate; // ivar: _receivedDate
@property (retain, nonatomic) NSString *receivedDateTimeZoneName; // ivar: _receivedDateTimeZoneName
@property (retain, nonatomic) NSString *resourceID; // ivar: _resourceID
@property (retain, nonatomic) NSString *resourceType; // ivar: _resourceType
@property (retain, nonatomic) NSString *sourceURL; // ivar: _sourceURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif