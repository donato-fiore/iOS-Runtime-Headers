// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSSUGGESTIONACCURACYSIGNAL_H
#define PLUSSCHEMAPLUSSUGGESTIONACCURACYSIGNAL_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSignalSource;
@property (nonatomic) BOOL hasSignalType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int signalSource; // ivar: _signalSource
@property (nonatomic) int signalType; // ivar: _signalType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSignalSource;
-(void)deleteSignalType;
-(void)writeTo:(id)arg0 ;


@end


#endif