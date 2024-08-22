// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSCHEMAMTBATCHREQUESTSTARTED_H
#define MTSCHEMAMTBATCHREQUESTSTARTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumParagraphs;
@property (nonatomic) BOOL hasSequenceNumber; // ivar: _hasSequenceNumber
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numParagraphs; // ivar: _numParagraphs
@property (copy, nonatomic) NSString *sequenceNumber; // ivar: _sequenceNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNumParagraphs;
-(void)deleteSequenceNumber;
-(void)writeTo:(id)arg0 ;


@end


#endif