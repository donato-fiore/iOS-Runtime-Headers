// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADCONFIGURATION_H
#define ADCONFIGURATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ADConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *baseUrl; // ivar: _baseUrl
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) CGFloat expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasBaseUrl;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasIsTest;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL isTest; // ivar: _isTest
@property (nonatomic) int requestType; // ivar: _requestType


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