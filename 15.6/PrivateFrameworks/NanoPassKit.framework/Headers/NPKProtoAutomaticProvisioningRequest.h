// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOAUTOMATICPROVISIONINGREQUEST_H
#define NPKPROTOAUTOMATICPROVISIONINGREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoAutomaticProvisioningRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cardType; // ivar: _cardType
@property (nonatomic) NSUInteger credentialType; // ivar: _credentialType
@property (nonatomic) BOOL hasCardType;
@property (nonatomic) BOOL hasCredentialType;
@property (readonly, nonatomic) BOOL hasLocalizedName;
@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix; // ivar: _primaryAccountNumberSuffix
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cardTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCardType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif