// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTSCHEMALIDSPEECHTRANSLATIONEVENT_H
#define LTSCHEMALIDSPEECHTRANSLATIONEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "LTSchemaLocaleConfidence.h"

@interface LTSchemaLIDSpeechTranslationEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) LTSchemaLocaleConfidence *alternateLocale; // ivar: _alternateLocale
@property (nonatomic) BOOL hasAlternateLocale; // ivar: _hasAlternateLocale
@property (nonatomic) BOOL hasRequestID; // ivar: _hasRequestID
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) BOOL hasSelectedLocale; // ivar: _hasSelectedLocale
@property (nonatomic) BOOL hasSpeechElapsedTime;
@property (nonatomic) BOOL hasUserSelectedLocale; // ivar: _hasUserSelectedLocale
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) unsigned int responseTimeMs; // ivar: _responseTimeMs
@property (retain, nonatomic) LTSchemaLocaleConfidence *selectedLocale; // ivar: _selectedLocale
@property (nonatomic) unsigned int speechElapsedTime; // ivar: _speechElapsedTime
@property (copy, nonatomic) NSString *userSelectedLocale; // ivar: _userSelectedLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlternateLocale;
-(void)deleteRequestID;
-(void)deleteResponseTimeMs;
-(void)deleteSelectedLocale;
-(void)deleteSpeechElapsedTime;
-(void)deleteUserSelectedLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif