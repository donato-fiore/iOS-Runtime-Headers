// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBDISCOVERMOREINTERSTITIALEXPOSURE_H
#define NTPBDISCOVERMOREINTERSTITIALEXPOSURE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasTappedNextArticleAffordanceFeedId;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL hasWithNextArticleAffordance;
@property (nonatomic) int nextArticleAffordanceType; // ivar: _nextArticleAffordanceType
@property (retain, nonatomic) NSString *tappedNextArticleAffordanceFeedId; // ivar: _tappedNextArticleAffordanceFeedId
@property (nonatomic) int userAction; // ivar: _userAction
@property (nonatomic) BOOL withNextArticleAffordance; // ivar: _withNextArticleAffordance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nextArticleAffordanceTypeAsString:(int)arg0 ;
-(int)StringAsNextArticleAffordanceType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif