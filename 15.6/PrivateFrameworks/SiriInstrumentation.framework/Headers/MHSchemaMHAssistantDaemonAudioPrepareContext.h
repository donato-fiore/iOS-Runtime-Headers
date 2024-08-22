// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOPREPARECONTEXT_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOPREPARECONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHAssistantDaemonAudioPrepareEnded.h"
#import "MHSchemaMHAssistantDaemonAudioPrepareStarted.h"

@interface MHSchemaMHAssistantDaemonAudioPrepareContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrepareEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioPrepareStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEnded;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif