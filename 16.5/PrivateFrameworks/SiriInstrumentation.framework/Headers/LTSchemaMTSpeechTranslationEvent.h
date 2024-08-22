// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTSCHEMAMTSPEECHTRANSLATIONEVENT_H
#define LTSCHEMAMTSPEECHTRANSLATIONEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface LTSchemaMTSpeechTranslationEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasRequestID; // ivar: _hasRequestID
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) BOOL hasSelectedLocale; // ivar: _hasSelectedLocale
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) int responseTimeMs; // ivar: _responseTimeMs
@property (copy, nonatomic) NSString *selectedLocale; // ivar: _selectedLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRequestID;
-(void)deleteResponseTimeMs;
-(void)deleteSelectedLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif