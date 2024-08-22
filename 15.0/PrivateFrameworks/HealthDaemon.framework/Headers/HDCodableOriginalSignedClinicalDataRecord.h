// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEORIGINALSIGNEDCLINICALDATARECORD_H
#define HDCODABLEORIGINALSIGNEDCLINICALDATARECORD_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "HDCodableMessageVersion.h"
#import "HDCodableMetadataDictionary.h"

@interface HDCodableOriginalSignedClinicalDataRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) CGFloat firstSeenDate; // ivar: _firstSeenDate
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName; // ivar: _firstSeenDateTimeZoneName
@property (retain, nonatomic) NSString *gatewayExternalID; // ivar: _gatewayExternalID
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasFirstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateTimeZoneName;
@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (nonatomic) BOOL hasLastModifiedDate;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasRawContent;
@property (nonatomic) BOOL hasReceivedDate;
@property (readonly, nonatomic) BOOL hasReceivedDateTimeZoneName;
@property (nonatomic) BOOL hasSignatureStatus;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (readonly, nonatomic) BOOL hasUniquenessChecksum;
@property (retain, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (nonatomic) CGFloat lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion; // ivar: _messageVersion
@property (retain, nonatomic) HDCodableMetadataDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *rawContent; // ivar: _rawContent
@property (nonatomic) CGFloat receivedDate; // ivar: _receivedDate
@property (retain, nonatomic) NSString *receivedDateTimeZoneName; // ivar: _receivedDateTimeZoneName
@property (nonatomic) NSInteger signatureStatus; // ivar: _signatureStatus
@property (retain, nonatomic) NSString *sourceURL; // ivar: _sourceURL
@property (retain, nonatomic) NSData *syncIdentifier; // ivar: _syncIdentifier
@property (retain, nonatomic) NSMutableArray *types; // ivar: _types
@property (retain, nonatomic) NSData *uniquenessChecksum; // ivar: _uniquenessChecksum


+(Class)typeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAtIndex:(NSUInteger)arg0 ;
-(void)addType:(id)arg0 ;
-(void)clearTypes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif