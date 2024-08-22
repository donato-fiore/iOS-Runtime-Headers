// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSM2CONTACTRESULTINSPOTLIGHT_H
#define SGSM2CONTACTRESULTINSPOTLIGHT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGSM2ContactResultInSpotlight : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasVisible;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL visible; // ivar: _visible


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