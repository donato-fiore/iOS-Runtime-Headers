// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSPROTORAPIDPAYLOAD_H
#define DRSPROTORAPIDPAYLOAD_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "DRSProtoClientDeviceMetadata.h"
#import "DRSProtoFileDescription.h"
#import "DRSProtoRequestDescription.h"

@interface DRSProtoRapidPayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) DRSProtoClientDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata
@property (readonly, nonatomic) BOOL hasDeviceMetadata;
@property (readonly, nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) BOOL hasPayloadDescription;
@property (readonly, nonatomic) BOOL hasPayloadMetadata;
@property (nonatomic) BOOL hasUploadAttempts;
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (retain, nonatomic) DRSProtoFileDescription *payloadDescription; // ivar: _payloadDescription
@property (retain, nonatomic) DRSProtoRequestDescription *payloadMetadata; // ivar: _payloadMetadata
@property (nonatomic) unsigned int uploadAttempts; // ivar: _uploadAttempts


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