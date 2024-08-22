// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOREGISTRATIONDATAREQUEST_H
#define NPKPROTOREGISTRATIONDATAREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKProtoRegistrationDataRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *authToken; // ivar: _authToken
@property (readonly, nonatomic) BOOL hasAuthToken;


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