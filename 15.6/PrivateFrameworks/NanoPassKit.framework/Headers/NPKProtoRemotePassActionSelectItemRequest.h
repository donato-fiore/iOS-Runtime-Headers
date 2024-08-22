// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOREMOTEPASSACTIONSELECTITEMREQUEST_H
#define NPKPROTOREMOTEPASSACTIONSELECTITEMREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoRemotePassActionSelectItemRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSData *expiryDateData; // ivar: _expiryDateData
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (readonly, nonatomic) BOOL hasExpiryDateData;
@property (readonly, nonatomic) BOOL hasPassSerialNumber;
@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (readonly, nonatomic) BOOL hasPlanDetailLabel;
@property (readonly, nonatomic) BOOL hasPlanIdentifier;
@property (readonly, nonatomic) BOOL hasPlanLabel;
@property (readonly, nonatomic) BOOL hasStartDateData;
@property (retain, nonatomic) NSString *passSerialNumber; // ivar: _passSerialNumber
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSData *paymentPassActionData; // ivar: _paymentPassActionData
@property (retain, nonatomic) NSString *planDetailLabel; // ivar: _planDetailLabel
@property (retain, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier
@property (retain, nonatomic) NSString *planLabel; // ivar: _planLabel
@property (retain, nonatomic) NSString *requestUniqueID; // ivar: _requestUniqueID
@property (retain, nonatomic) NSData *startDateData; // ivar: _startDateData


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