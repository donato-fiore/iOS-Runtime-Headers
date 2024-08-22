// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPPLACEPROBLEM_H
#define GEORPPLACEPROBLEM_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPPlaceProblem : PBCodable <NSCopying>

 {
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    unsigned int _problematicDepartureSequenceIndex;
    ? _flags;
}


@property (nonatomic) unsigned int componentIndex;
@property (nonatomic) unsigned int componentValueIndex;
@property (nonatomic) BOOL hasComponentIndex;
@property (nonatomic) BOOL hasComponentValueIndex;
@property (nonatomic) BOOL hasProblematicDepartureSequenceIndex;
@property (nonatomic) unsigned int problematicDepartureSequenceIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif