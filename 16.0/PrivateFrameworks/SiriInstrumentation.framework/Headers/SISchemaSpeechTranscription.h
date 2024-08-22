// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMASPEECHTRANSCRIPTION_H
#define SISCHEMASPEECHTRANSCRIPTION_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *aceID; // ivar: _aceID
@property (nonatomic) BOOL hasAceID; // ivar: _hasAceID
@property (nonatomic) BOOL hasSpeechTranscriptionType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int speechTranscriptionType; // ivar: _speechTranscriptionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAceID;
-(void)deleteSpeechTranscriptionType;
-(void)writeTo:(id)arg0 ;


@end


#endif