// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKCOMPONENT_H
#define GEORPFEEDBACKCOMPONENT_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackComponent : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_values;
    int _status;
    int _type;
    ? _flags;
}


@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int status;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *values;


+(BOOL)isValid:(id)arg0 ;
+(Class)valueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif