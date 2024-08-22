// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHVOICETRIGGERSECONDPASSTRIGGERED_H
#define MHSCHEMAMHVOICETRIGGERSECONDPASSTRIGGERED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHVoiceTriggerEventInfo.h"

@interface MHSchemaMHVoiceTriggerSecondPassTriggered : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasVoiceTriggerEventInfo; // ivar: _hasVoiceTriggerEventInfo
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteVoiceTriggerEventInfo;
-(void)writeTo:(id)arg0 ;


@end


#endif