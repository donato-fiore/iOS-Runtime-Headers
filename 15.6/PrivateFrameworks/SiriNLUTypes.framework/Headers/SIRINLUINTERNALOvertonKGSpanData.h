// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALOVERTONKGSPANDATA_H
#define SIRINLUINTERNALOVERTONKGSPANDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALOvertonKGSpanData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSMutableArray *features; // ivar: _features
@property (nonatomic) BOOL hasConfidence;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featuresAtIndex:(NSUInteger)arg0 ;
-(void)addFeatures:(id)arg0 ;
-(void)clearFeatures;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif