// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RFBANDDURATION_H
#define RFBANDDURATION_H

@class PBCodable;
@protocol NSCopying;



@interface RfBandDuration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) int eutraRfBand; // ivar: _eutraRfBand
@property (nonatomic) int geraRfBand; // ivar: _geraRfBand
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasEutraRfBand;
@property (nonatomic) BOOL hasGeraRfBand;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) BOOL hasUtraFddRfBand;
@property (nonatomic) BOOL hasUtraTddRfBand;
@property (nonatomic) int rat; // ivar: _rat
@property (nonatomic) int utraFddRfBand; // ivar: _utraFddRfBand
@property (nonatomic) int utraTddRfBand; // ivar: _utraTddRfBand


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eutraRfBandAsString:(int)arg0 ;
-(id)geraRfBandAsString:(int)arg0 ;
-(id)ratAsString:(int)arg0 ;
-(id)utraFddRfBandAsString:(int)arg0 ;
-(id)utraTddRfBandAsString:(int)arg0 ;
-(int)StringAsEutraRfBand:(id)arg0 ;
-(int)StringAsGeraRfBand:(id)arg0 ;
-(int)StringAsRat:(id)arg0 ;
-(int)StringAsUtraFddRfBand:(id)arg0 ;
-(int)StringAsUtraTddRfBand:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif