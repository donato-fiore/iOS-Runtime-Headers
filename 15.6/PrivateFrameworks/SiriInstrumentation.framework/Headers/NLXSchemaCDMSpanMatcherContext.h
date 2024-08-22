// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMSPANMATCHERCONTEXT_H
#define NLXSCHEMACDMSPANMATCHERCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "NLXSchemaCDMSpanMatcherEnded.h"
#import "NLXSchemaCDMSpanMatcherStarted.h"

@interface NLXSchemaCDMSpanMatcherContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (retain, nonatomic) NLXSchemaCDMSpanMatcherEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaCDMSpanMatcherStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContextId;
-(void)deleteEnded;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif