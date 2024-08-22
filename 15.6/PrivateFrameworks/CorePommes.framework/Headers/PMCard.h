// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMCARD_H
#define PMCARD_H

@class PBCodable;
@protocol NSCopying;



@interface PMCard : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat freshness; // ivar: _freshness
@property (nonatomic) float fullScore; // ivar: _fullScore
@property (nonatomic) BOOL hasFreshness;
@property (nonatomic) BOOL hasFullScore;
@property (nonatomic) BOOL hasLightScore;
@property (nonatomic) BOOL hasMailDateReceived;
@property (nonatomic) BOOL hasTextScore;
@property (nonatomic) float lightScore; // ivar: _lightScore
@property (nonatomic) CGFloat mailDateReceived; // ivar: _mailDateReceived
@property (nonatomic) float textScore; // ivar: _textScore


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