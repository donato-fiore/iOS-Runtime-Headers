// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWPICKERSECTION_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWPICKERSECTION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentProvisioningFlowPickerSection : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) BOOL hasFooter;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif