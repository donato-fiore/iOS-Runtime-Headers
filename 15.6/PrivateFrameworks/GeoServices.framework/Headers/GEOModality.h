// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMODALITY_H
#define GEOMODALITY_H

@class PBCodable;
@protocol NSCopying;



@interface GEOModality : PBCodable <NSCopying>

 {
    CGFloat _timestamp;
    int _confidence;
    BOOL _expectedModality;
    BOOL _notMoving;
    ? _flags;
}


@property (nonatomic) int confidence;
@property (nonatomic) BOOL expectedModality;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasExpectedModality;
@property (nonatomic) BOOL hasNotMoving;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL notMoving;
@property (nonatomic) CGFloat timestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)confidenceAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsConfidence:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif