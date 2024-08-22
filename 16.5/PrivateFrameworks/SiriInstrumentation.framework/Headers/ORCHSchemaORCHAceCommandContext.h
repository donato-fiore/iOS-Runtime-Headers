// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ORCHSCHEMAORCHACECOMMANDCONTEXT_H
#define ORCHSCHEMAORCHACECOMMANDCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "ORCHSchemaORCHAceCommandEnded.h"
#import "ORCHSchemaORCHAceCommandFailed.h"
#import "ORCHSchemaORCHAceCommandStarted.h"

@interface ORCHSchemaORCHAceCommandContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *aceId; // ivar: _aceId
@property (retain, nonatomic) ORCHSchemaORCHAceCommandEnded *ended; // ivar: _ended
@property (retain, nonatomic) ORCHSchemaORCHAceCommandFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasAceId; // ivar: _hasAceId
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ORCHSchemaORCHAceCommandStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichCommandevent; // ivar: _whichCommandevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAceId;
-(void)deleteEnded;
-(void)deleteFailed;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif