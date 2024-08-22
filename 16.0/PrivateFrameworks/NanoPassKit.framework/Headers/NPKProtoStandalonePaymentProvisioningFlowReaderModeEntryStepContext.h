// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWREADERMODEENTRYSTEPCONTEXT_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWREADERMODEENTRYSTEPCONTEXT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentSetupProduct.h"

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasProduct;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product; // ivar: _product
@property (retain, nonatomic) NSMutableArray *setupFields; // ivar: _setupFields
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)setupFieldsAtIndex:(NSUInteger)arg0 ;
-(void)addSetupFields:(id)arg0 ;
-(void)clearSetupFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif