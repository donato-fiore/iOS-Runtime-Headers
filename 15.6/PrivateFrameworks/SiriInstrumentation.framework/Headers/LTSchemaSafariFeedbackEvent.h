// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LTSCHEMASAFARIFEEDBACKEVENT_H
#define LTSCHEMASAFARIFEEDBACKEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "LTSchemaTask.h"

@interface LTSchemaSafariFeedbackEvent : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSessionID; // ivar: _hasSessionID
@property (nonatomic) BOOL hasTask; // ivar: _hasTask
@property (nonatomic) BOOL hasUserFeedbackContentSource; // ivar: _hasUserFeedbackContentSource
@property (nonatomic) BOOL hasUserFeedbackContentTarget; // ivar: _hasUserFeedbackContentTarget
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (retain, nonatomic) LTSchemaTask *task; // ivar: _task
@property (copy, nonatomic) NSString *userFeedbackContentSource; // ivar: _userFeedbackContentSource
@property (copy, nonatomic) NSString *userFeedbackContentTarget; // ivar: _userFeedbackContentTarget


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSessionID;
-(void)deleteTask;
-(void)deleteUserFeedbackContentSource;
-(void)deleteUserFeedbackContentTarget;
-(void)writeTo:(id)arg0 ;


@end


#endif