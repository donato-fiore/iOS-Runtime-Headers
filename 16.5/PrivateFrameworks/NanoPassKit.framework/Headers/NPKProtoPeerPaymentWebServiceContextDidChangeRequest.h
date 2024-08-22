// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOPEERPAYMENTWEBSERVICECONTEXTDIDCHANGEREQUEST_H
#define NPKPROTOPEERPAYMENTWEBSERVICECONTEXTDIDCHANGEREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasPeerPaymentAccountData;
@property (readonly, nonatomic) BOOL hasPeerPaymentWebServiceContextData;
@property (retain, nonatomic) NSData *peerPaymentAccountData; // ivar: _peerPaymentAccountData
@property (retain, nonatomic) NSData *peerPaymentWebServiceContextData; // ivar: _peerPaymentWebServiceContextData


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