// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOPAYMENTWEBSERVICEREGISTRATIONRESPONSE_H
#define NPKPROTOPAYMENTWEBSERVICEREGISTRATIONRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoPaymentWebServiceRegistrationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasRegistrationResult;
@property (readonly, nonatomic) BOOL hasWebServiceContextData;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (nonatomic) unsigned int registrationResult; // ivar: _registrationResult
@property (retain, nonatomic) NSData *webServiceContextData; // ivar: _webServiceContextData


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