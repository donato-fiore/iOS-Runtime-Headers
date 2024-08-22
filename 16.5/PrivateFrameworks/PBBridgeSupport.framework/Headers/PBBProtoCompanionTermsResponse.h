// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBBPROTOCOMPANIONTERMSRESPONSE_H
#define PBBPROTOCOMPANIONTERMSRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PBBProtoCompanionTermsResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsExistingAccountTerms;
@property (readonly, nonatomic) BOOL hasResponseData;
@property (nonatomic) BOOL hasTermsAccepted;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (nonatomic) BOOL isExistingAccountTerms; // ivar: _isExistingAccountTerms
@property (retain, nonatomic) NSString *responseData; // ivar: _responseData
@property (nonatomic) BOOL termsAccepted; // ivar: _termsAccepted
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent


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