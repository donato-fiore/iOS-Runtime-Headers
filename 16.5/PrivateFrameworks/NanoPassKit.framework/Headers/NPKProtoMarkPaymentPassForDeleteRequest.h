// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOMARKPAYMENTPASSFORDELETEREQUEST_H
#define NPKPROTOMARKPAYMENTPASSFORDELETEREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *passID; // ivar: _passID
@property (retain, nonatomic) NSMutableArray *paymentApplicationAIDs; // ivar: _paymentApplicationAIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paymentApplicationAIDsAtIndex:(NSUInteger)arg0 ;
-(void)addPaymentApplicationAIDs:(id)arg0 ;
-(void)clearPaymentApplicationAIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif