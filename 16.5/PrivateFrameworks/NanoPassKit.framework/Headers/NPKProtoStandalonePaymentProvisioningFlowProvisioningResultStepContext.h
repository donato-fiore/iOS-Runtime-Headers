// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWPROVISIONINGRESULTSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWPROVISIONINGRESULTSTEPCONTEXT_H

@class PBCodable;
@protocol NSCopying;


#import "NPKProtoStandaloneError.h"

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL cardAdded; // ivar: _cardAdded
@property (retain, nonatomic) NPKProtoStandaloneError *error; // ivar: _error
@property (nonatomic) BOOL hasCardAdded;
@property (readonly, nonatomic) BOOL hasError;


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