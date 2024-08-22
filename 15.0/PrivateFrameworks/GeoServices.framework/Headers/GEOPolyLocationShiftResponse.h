// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPOLYLOCATIONSHIFTRESPONSE_H
#define GEOPOLYLOCATIONSHIFTRESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>

 {
    ? _parameters;
    CGFloat _radius;
    int _status;
}


@property (readonly, nonatomic) *CGFloat parameters;
@property (readonly, nonatomic) NSUInteger parametersCount;
@property (nonatomic) CGFloat radius;
@property (nonatomic) int status;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)parametersAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addParameters:(CGFloat)arg0 ;
-(void)clearParameters;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif