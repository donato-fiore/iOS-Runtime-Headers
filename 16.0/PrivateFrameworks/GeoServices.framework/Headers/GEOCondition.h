// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONDITION_H
#define GEOCONDITION_H

@class PBCodable, PBUnknownFields, NSMutableArray, NSString, NSDate, NSArray;
@protocol GEOServerCondition, NSCopying;



@interface GEOCondition : PBCodable <GEOServerCondition, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conditions;
    unsigned int _expirationTime;
    int _type;
    ? _flags;
}


@property (readonly, nonatomic) NSInteger conditionType;
@property (retain, nonatomic) NSMutableArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned int expirationTime;
@property (nonatomic) BOOL hasExpirationTime;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *subconditions;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)conditionAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addCondition:(id)arg0 ;
-(void)clearConditions;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif