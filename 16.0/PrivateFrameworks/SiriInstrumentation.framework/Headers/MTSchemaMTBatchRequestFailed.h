// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSCHEMAMTBATCHREQUESTFAILED_H
#define MTSCHEMAMTBATCHREQUESTFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MTSchemaMTError.h"

@interface MTSchemaMTBatchRequestFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) MTSchemaMTError *error; // ivar: _error
@property (nonatomic) BOOL hasError; // ivar: _hasError
@property (nonatomic) BOOL hasNumParagraphFailures;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numParagraphFailures; // ivar: _numParagraphFailures


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteError;
-(void)deleteNumParagraphFailures;
-(void)writeTo:(id)arg0 ;


@end


#endif