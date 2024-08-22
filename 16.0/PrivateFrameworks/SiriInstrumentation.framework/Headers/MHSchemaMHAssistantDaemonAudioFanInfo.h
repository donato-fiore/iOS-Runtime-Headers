// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOFANINFO_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOFANINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioFanInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int currentSpeed; // ivar: _currentSpeed
@property (nonatomic) unsigned int fanId; // ivar: _fanId
@property (nonatomic) BOOL hasCurrentSpeed;
@property (nonatomic) BOOL hasFanId;
@property (nonatomic) BOOL hasTargetSpeed;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int targetSpeed; // ivar: _targetSpeed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentSpeed;
-(void)deleteFanId;
-(void)deleteTargetSpeed;
-(void)writeTo:(id)arg0 ;


@end


#endif