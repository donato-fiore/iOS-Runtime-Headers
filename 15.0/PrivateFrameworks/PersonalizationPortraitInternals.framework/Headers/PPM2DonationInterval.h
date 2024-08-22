// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPM2DONATIONINTERVAL_H
#define PPM2DONATIONINTERVAL_H

@class PBCodable;
@protocol NSCopying;



@interface PPM2DonationInterval : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) BOOL hasIsFirstDonation;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) unsigned int interval; // ivar: _interval
@property (nonatomic) BOOL isFirstDonation; // ivar: _isFirstDonation
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif