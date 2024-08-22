// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSTATETRANSITIONFEEDBACK_H
#define GEOSTATETRANSITIONFEEDBACK_H

@class PBCodable;
@protocol NSCopying;



@interface GEOStateTransitionFeedback : PBCodable <NSCopying>

 {
    int _newValue;
    int _oldValue;
    int _stateType;
    ? _flags;
}


@property (nonatomic) BOOL hasNewValue;
@property (nonatomic) BOOL hasOldValue;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int newValue;
@property (nonatomic) int oldValue;
@property (nonatomic) int stateType;


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
-(id)newValueAsString:(int)arg0 ;
-(id)oldValueAsString:(int)arg0 ;
-(id)stateTypeAsString:(int)arg0 ;
-(int)StringAsNewValue:(id)arg0 ;
-(int)StringAsOldValue:(id)arg0 ;
-(int)StringAsStateType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif