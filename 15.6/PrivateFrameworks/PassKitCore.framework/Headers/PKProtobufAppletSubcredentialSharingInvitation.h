// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFAPPLETSUBCREDENTIALSHARINGINVITATION_H
#define PKPROTOBUFAPPLETSUBCREDENTIALSHARINGINVITATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PKProtobufAppletSubcredentialSharingInvitation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) unsigned int entitlement; // ivar: _entitlement
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) BOOL hasEntitlement;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasInvitation;
@property (readonly, nonatomic) BOOL hasIssuer;
@property (readonly, nonatomic) BOOL hasPairedReaderIdentifier;
@property (readonly, nonatomic) BOOL hasPartnerIdentifier;
@property (readonly, nonatomic) BOOL hasRecipientName;
@property (readonly, nonatomic) BOOL hasSharingSessionIdentifier;
@property (nonatomic) BOOL hasSupportedRadioTechnologies;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *invitation; // ivar: _invitation
@property (retain, nonatomic) NSString *issuer; // ivar: _issuer
@property (retain, nonatomic) NSString *pairedReaderIdentifier; // ivar: _pairedReaderIdentifier
@property (retain, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (retain, nonatomic) NSString *recipientName; // ivar: _recipientName
@property (retain, nonatomic) NSData *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (nonatomic) unsigned int supportedRadioTechnologies; // ivar: _supportedRadioTechnologies
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(int)StringAsDeviceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif