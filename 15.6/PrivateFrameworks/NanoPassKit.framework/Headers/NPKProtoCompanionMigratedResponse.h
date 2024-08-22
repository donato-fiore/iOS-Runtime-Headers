// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOCOMPANIONMIGRATEDRESPONSE_H
#define NPKPROTOCOMPANIONMIGRATEDRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoCompanionMigratedResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasPaymentWebServiceContextData;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccountData;
@property (readonly, nonatomic) BOOL hasPeerPaymentWebServiceContextData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) NSData *paymentWebServiceContextData; // ivar: _paymentWebServiceContextData
@property (retain, nonatomic) NSData *peerPaymentAccountData; // ivar: _peerPaymentAccountData
@property (retain, nonatomic) NSData *peerPaymentWebServiceContextData; // ivar: _peerPaymentWebServiceContextData
@property (nonatomic) BOOL pending; // ivar: _pending
@property (nonatomic) BOOL success; // ivar: _success


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