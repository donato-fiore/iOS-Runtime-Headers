// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HISTOGRAMBIN_H
#define HISTOGRAMBIN_H

@class PBCodable;
@protocol NSCopying;



@interface HistogramBin : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIds;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int ids; // ivar: _ids
@property (nonatomic) unsigned int value; // ivar: _value


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