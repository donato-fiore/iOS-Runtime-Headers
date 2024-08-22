// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTGRIDDURATION_H
#define GEOLOGMSGEVENTGRIDDURATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying>

 {
    NSMutableArray *_endStateErrorReasons;
    int _displayType;
    unsigned int _durationMs;
    int _endState;
    int _previousState;
    ? _flags;
}


@property (nonatomic) int displayType;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) int endState;
@property (retain, nonatomic) NSMutableArray *endStateErrorReasons;
@property (nonatomic) BOOL hasDisplayType;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) BOOL hasPreviousState;
@property (nonatomic) int previousState;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayTypeAsString:(int)arg0 ;
-(id)endStateAsString:(int)arg0 ;
-(id)endStateErrorReasonAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)previousStateAsString:(int)arg0 ;
-(int)StringAsDisplayType:(id)arg0 ;
-(int)StringAsEndState:(id)arg0 ;
-(int)StringAsPreviousState:(id)arg0 ;
-(void)addEndStateErrorReason:(id)arg0 ;
-(void)clearEndStateErrorReasons;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif