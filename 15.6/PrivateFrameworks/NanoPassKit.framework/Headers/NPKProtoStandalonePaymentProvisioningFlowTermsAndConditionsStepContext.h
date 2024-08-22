// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWTERMSANDCONDITIONSSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWTERMSANDCONDITIONSSTEPCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentSetupProduct.h"

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowNonSecureHTTP; // ivar: _allowNonSecureHTTP
@property (nonatomic) BOOL hasAllowNonSecureHTTP;
@property (readonly, nonatomic) BOOL hasProduct;
@property (readonly, nonatomic) BOOL hasTermsURL;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product; // ivar: _product
@property (retain, nonatomic) NSString *termsURL; // ivar: _termsURL


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