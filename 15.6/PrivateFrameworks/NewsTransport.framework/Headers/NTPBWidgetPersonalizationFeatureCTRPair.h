// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBWIDGETPERSONALIZATIONFEATURECTRPAIR_H
#define NTPBWIDGETPERSONALIZATIONFEATURECTRPAIR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float ctr; // ivar: _ctr
@property (nonatomic) BOOL hasCtr;
@property (readonly, nonatomic) BOOL hasPersonalizationFeatureId;
@property (retain, nonatomic) NSString *personalizationFeatureId; // ivar: _personalizationFeatureId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif