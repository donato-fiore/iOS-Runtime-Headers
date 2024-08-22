// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RFSCHEMARFPATTERNEXECUTED_H
#define RFSCHEMARFPATTERNEXECUTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface RFSchemaRFPatternExecuted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMode;
@property (nonatomic) BOOL hasPattern;
@property (nonatomic) BOOL hasPatternId; // ivar: _hasPatternId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int pattern; // ivar: _pattern
@property (copy, nonatomic) NSString *patternId; // ivar: _patternId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMode;
-(void)deletePattern;
-(void)deletePatternId;
-(void)writeTo:(id)arg0 ;


@end


#endif