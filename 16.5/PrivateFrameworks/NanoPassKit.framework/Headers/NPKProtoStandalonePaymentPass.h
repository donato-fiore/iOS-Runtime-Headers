// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTPASS_H
#define NPKPROTOSTANDALONEPAYMENTPASS_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentApplication.h"
#import "NPKProtoStandalonePass.h"

@interface NPKProtoStandalonePaymentPass : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activationState; // ivar: _activationState
@property (retain, nonatomic) NSString *deviceAccountIdentifier; // ivar: _deviceAccountIdentifier
@property (retain, nonatomic) NSString *deviceAccountNumberSuffix; // ivar: _deviceAccountNumberSuffix
@property (retain, nonatomic) NPKProtoStandalonePaymentApplication *devicePrimaryPaymentApplication; // ivar: _devicePrimaryPaymentApplication
@property (nonatomic) BOOL hasActivationState;
@property (readonly, nonatomic) BOOL hasDeviceAccountIdentifier;
@property (readonly, nonatomic) BOOL hasDeviceAccountNumberSuffix;
@property (readonly, nonatomic) BOOL hasDevicePrimaryPaymentApplication;
@property (readonly, nonatomic) BOOL hasPrimaryAccountIdentifier;
@property (readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NPKProtoStandalonePass *pass; // ivar: _pass
@property (retain, nonatomic) NSString *primaryAccountIdentifier; // ivar: _primaryAccountIdentifier
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix; // ivar: _primaryAccountNumberSuffix


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activationStateAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsActivationState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif