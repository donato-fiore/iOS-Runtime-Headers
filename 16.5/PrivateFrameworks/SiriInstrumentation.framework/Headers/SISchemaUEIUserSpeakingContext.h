// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUEIUSERSPEAKINGCONTEXT_H
#define SISCHEMAUEIUSERSPEAKINGCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUEIUserSpeakingEnded.h"
#import "SISchemaUEIUserSpeakingStarted.h"
#import "SISchemaUUID.h"

@interface SISchemaUEIUserSpeakingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEIUserSpeakingEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (nonatomic) BOOL hasTrpId; // ivar: _hasTrpId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUEIUserSpeakingStarted *startedOrChanged; // ivar: _startedOrChanged
@property (retain, nonatomic) SISchemaUUID *trpId; // ivar: _trpId
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
-(void)deleteTrpId;
-(void)writeTo:(id)arg0 ;


@end


#endif