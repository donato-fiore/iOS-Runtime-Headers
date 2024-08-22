// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPWEBAUTHTOKENRETRIEVEREQUEST_H
#define CKDPWEBAUTHTOKENRETRIEVEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *apiToken; // ivar: _apiToken
@property (nonatomic) BOOL forceFetchToken; // ivar: _forceFetchToken
@property (readonly, nonatomic) BOOL hasApiToken;
@property (nonatomic) BOOL hasForceFetchToken;


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif