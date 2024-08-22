// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESSERVICECLASSIFIERSCOREREPORTED_H
#define POMMESSCHEMAPOMMESSERVICECLASSIFIERSCOREREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESServiceClassifierScoreReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int classifierLabel; // ivar: _classifierLabel
@property (nonatomic) BOOL hasClassifierLabel;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteClassifierLabel;
-(void)deleteScore;
-(void)writeTo:(id)arg0 ;


@end


#endif