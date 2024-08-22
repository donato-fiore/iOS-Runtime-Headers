// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSCHEMATTSSPEECHFAILED_H
#define TTSSCHEMATTSSPEECHFAILED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface TTSSchemaTTSSpeechFailed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *errorCodes; // ivar: _errorCodes
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)errorCodesAtIndex:(NSUInteger)arg0 ;
-(void)addErrorCodes:(int)arg0 ;
-(void)clearErrorCodes;
-(void)deleteErrorCodes;
-(void)writeTo:(id)arg0 ;


@end


#endif