// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHVOICETRIGGERSECONDPASSREJECTED_H
#define MHSCHEMAMHVOICETRIGGERSECONDPASSREJECTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHVoiceTriggerEventInfo.h"

@interface MHSchemaMHVoiceTriggerSecondPassRejected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasVoiceTriggerEventInfo; // ivar: _hasVoiceTriggerEventInfo
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reason; // ivar: _reason
@property (retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteReason;
-(void)deleteVoiceTriggerEventInfo;
-(void)writeTo:(id)arg0 ;


@end


#endif