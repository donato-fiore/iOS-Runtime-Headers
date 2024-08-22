// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWPICKERITEM_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWPICKERITEM_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *products; // ivar: _products
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)productsAtIndex:(NSUInteger)arg0 ;
-(void)addProducts:(id)arg0 ;
-(void)clearProducts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif