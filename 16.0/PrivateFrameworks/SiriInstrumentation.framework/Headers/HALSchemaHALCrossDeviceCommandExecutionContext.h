// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALSCHEMAHALCROSSDEVICECOMMANDEXECUTIONCONTEXT_H
#define HALSCHEMAHALCROSSDEVICECOMMANDEXECUTIONCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "HALSchemaHALCrossDeviceCommandExecutionEnded.h"
#import "HALSchemaHALCrossDeviceCommandExecutionFailed.h"
#import "HALSchemaHALCrossDeviceCommandExecutionStarted.h"

@interface HALSchemaHALCrossDeviceCommandExecutionContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionEnded *ended; // ivar: _ended
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionStarted *startedOrChanged; // ivar: _startedOrChanged
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
-(void)deleteFailed;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif