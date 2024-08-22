// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWMOREINFORMATIONSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWMOREINFORMATIONSTEPCONTEXT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentPass.h"

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NSMutableArray *moreInfoItems; // ivar: _moreInfoItems
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass; // ivar: _paymentPass


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)moreInfoItemsAtIndex:(NSUInteger)arg0 ;
-(void)addMoreInfoItems:(id)arg0 ;
-(void)clearMoreInfoItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif