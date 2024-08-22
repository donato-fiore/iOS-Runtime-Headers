// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LTSCHEMADISAMBIGUATIONSPEECHTRANSLATIONEVENT_H
#define LTSCHEMADISAMBIGUATIONSPEECHTRANSLATIONEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface LTSchemaDisambiguationSpeechTranslationEvent : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasRequestID; // ivar: _hasRequestID
@property (nonatomic) BOOL hasSenseID; // ivar: _hasSenseID
@property (nonatomic) BOOL hasSourceLocale; // ivar: _hasSourceLocale
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (copy, nonatomic) NSString *senseID; // ivar: _senseID
@property (copy, nonatomic) NSString *sourceLocale; // ivar: _sourceLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRequestID;
-(void)deleteSenseID;
-(void)deleteSourceLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif