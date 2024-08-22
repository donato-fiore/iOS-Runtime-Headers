// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSETTRANSACTIONDEFAULTSREQUEST_H
#define NPKPROTOSETTRANSACTIONDEFAULTSREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface NPKProtoSetTransactionDefaultsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *defaultBillingAddresses; // ivar: _defaultBillingAddresses
@property (retain, nonatomic) NSData *defaultContactEmail; // ivar: _defaultContactEmail
@property (retain, nonatomic) NSData *defaultContactName; // ivar: _defaultContactName
@property (retain, nonatomic) NSData *defaultContactPhone; // ivar: _defaultContactPhone
@property (retain, nonatomic) NSData *defaultShippingAddress; // ivar: _defaultShippingAddress
@property (readonly, nonatomic) BOOL hasDefaultBillingAddresses;
@property (readonly, nonatomic) BOOL hasDefaultContactEmail;
@property (readonly, nonatomic) BOOL hasDefaultContactName;
@property (readonly, nonatomic) BOOL hasDefaultContactPhone;
@property (readonly, nonatomic) BOOL hasDefaultShippingAddress;


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