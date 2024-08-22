// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALREPETITIONRESULT_H
#define SIRINLUEXTERNALREPETITIONRESULT_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUEXTERNALRepetitionResult : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int repetitionType; // ivar: _repetitionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)repetitionTypeAsString:(int)arg0 ;
-(int)StringAsRepetitionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif