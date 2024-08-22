// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSERVICEPROVIDERDATAFORPASSWITHUNIQUEIDENTIFIERRESPONSE_H
#define NPKPROTOSERVICEPROVIDERDATAFORPASSWITHUNIQUEIDENTIFIERRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoServiceProviderDataForPassWithUniqueIdentifierResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL encrypted; // ivar: _encrypted
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (nonatomic) BOOL hasEncrypted;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasServiceProviderData;
@property (retain, nonatomic) NSData *serviceProviderData; // ivar: _serviceProviderData


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