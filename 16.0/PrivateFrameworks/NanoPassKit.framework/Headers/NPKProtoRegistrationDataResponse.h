// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOREGISTRATIONDATARESPONSE_H
#define NPKPROTOREGISTRATIONDATARESPONSE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasPending;
@property (readonly, nonatomic) BOOL hasPushToken;
@property (readonly, nonatomic) BOOL hasRegistrationDataBytes;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (retain, nonatomic) NSString *pushToken; // ivar: _pushToken
@property (retain, nonatomic) NSData *registrationDataBytes; // ivar: _registrationDataBytes


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