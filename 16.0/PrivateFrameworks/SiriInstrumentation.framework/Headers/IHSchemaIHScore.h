// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IHSCHEMAIHSCORE_H
#define IHSCHEMAIHSCORE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface IHSchemaIHScore : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLowerBoundary;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasUpperBoundary;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float lowerBoundary; // ivar: _lowerBoundary
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) float upperBoundary; // ivar: _upperBoundary


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLowerBoundary;
-(void)deleteScore;
-(void)deleteUpperBoundary;
-(void)writeTo:(id)arg0 ;


@end


#endif