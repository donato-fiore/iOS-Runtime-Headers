// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPLOGENTRYVISIONSIMDFLOATM_H
#define CLPLOGENTRYVISIONSIMDFLOATM_H

@class PBCodable;
@protocol NSCopying;



@interface CLPLOGENTRYVISIONSimdFloatM : PBCodable <NSCopying>

 {
    ? _values;
}


@property (readonly, nonatomic) *float values;
@property (readonly, nonatomic) NSUInteger valuesCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)valuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addValues:(float)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif