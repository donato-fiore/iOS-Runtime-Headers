// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGINTERRUPTIONSTARTEDTIER1_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGINTERRUPTIONSTARTEDTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStartedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeSessionDisplayIds; // ivar: _activeSessionDisplayIds
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeSessionDisplayIdsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addActiveSessionDisplayIds:(id)arg0 ;
-(void)clearActiveSessionDisplayIds;
-(void)deleteActiveSessionDisplayIds;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif