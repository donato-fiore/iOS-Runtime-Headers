// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPASSLISTRESPONSE_H
#define NPKPROTOSTANDALONEPAYMENTPASSLISTRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandaloneResponseHeader.h"

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *paymentPasses; // ivar: _paymentPasses
@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // ivar: _responseHeader


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paymentPassesAtIndex:(NSUInteger)arg0 ;
-(void)addPaymentPasses:(id)arg0 ;
-(void)clearPaymentPasses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif