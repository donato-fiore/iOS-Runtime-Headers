// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOSTARTRECORDINGENDED_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOSTARTRECORDINGENDED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioStartRecordingEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeSessionDisplayIds; // ivar: _activeSessionDisplayIds
@property (copy, nonatomic) NSArray *fanInfos; // ivar: _fanInfos
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)fanInfoCount;
-(NSUInteger)hash;
-(id)activeSessionDisplayIdsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)fanInfoAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addActiveSessionDisplayIds:(id)arg0 ;
-(void)addFanInfo:(id)arg0 ;
-(void)clearActiveSessionDisplayIds;
-(void)clearFanInfo;
-(void)deleteActiveSessionDisplayIds;
-(void)deleteFanInfo;
-(void)writeTo:(id)arg0 ;


@end


#endif