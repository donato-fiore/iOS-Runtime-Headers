// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMARCOLITEUSAGESTATE_H
#define GEOMARCOLITEUSAGESTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOMarcoLiteUsageState : PBCodable <NSCopying>

 {
    int _stateExitReason;
    unsigned int _stateTime;
    int _stateType;
    unsigned int _stateValue;
    ? _flags;
}


@property (nonatomic) BOOL hasStateExitReason;
@property (nonatomic) BOOL hasStateTime;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) BOOL hasStateValue;
@property (nonatomic) int stateExitReason;
@property (nonatomic) unsigned int stateTime;
@property (nonatomic) int stateType;
@property (nonatomic) unsigned int stateValue;


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
-(id)stateExitReasonAsString:(int)arg0 ;
-(id)stateTypeAsString:(int)arg0 ;
-(int)StringAsStateExitReason:(id)arg0 ;
-(int)StringAsStateType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif