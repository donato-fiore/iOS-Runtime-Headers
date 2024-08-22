// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDASCHEMACDACLIENTEVENT_H
#define CDASCHEMACDACLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "CDASchemaCDADeviceAdvertisingEndContext.h"
#import "CDASchemaCDADeviceAdvertisingStartContext.h"
#import "CDASchemaCDADebugElectionDecisionMade.h"
#import "CDASchemaCDADeviceStateContext.h"
#import "CDASchemaCDAElectionDecisionMade.h"
#import "CDASchemaCDAElectionTimerEnded.h"
#import "CDASchemaCDAClientEventMetadata.h"

@interface CDASchemaCDAClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingEndContext *cdaAdvertisingEndChanged; // ivar: _cdaAdvertisingEndChanged
@property (retain, nonatomic) CDASchemaCDADeviceAdvertisingStartContext *cdaAdvertisingStartChanged; // ivar: _cdaAdvertisingStartChanged
@property (retain, nonatomic) CDASchemaCDADebugElectionDecisionMade *debugElectionDecisionMade; // ivar: _debugElectionDecisionMade
@property (retain, nonatomic) CDASchemaCDADeviceStateContext *deviceElectionStateContext; // ivar: _deviceElectionStateContext
@property (retain, nonatomic) CDASchemaCDAElectionDecisionMade *electionDecisionMade; // ivar: _electionDecisionMade
@property (retain, nonatomic) CDASchemaCDAElectionTimerEnded *electionTimerEnded; // ivar: _electionTimerEnded
@property (retain, nonatomic) CDASchemaCDAClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCdaAdvertisingEndChanged; // ivar: _hasCdaAdvertisingEndChanged
@property (nonatomic) BOOL hasCdaAdvertisingStartChanged; // ivar: _hasCdaAdvertisingStartChanged
@property (nonatomic) BOOL hasDebugElectionDecisionMade; // ivar: _hasDebugElectionDecisionMade
@property (nonatomic) BOOL hasDeviceElectionStateContext; // ivar: _hasDeviceElectionStateContext
@property (nonatomic) BOOL hasElectionDecisionMade; // ivar: _hasElectionDecisionMade
@property (nonatomic) BOOL hasElectionTimerEnded; // ivar: _hasElectionTimerEnded
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteCdaAdvertisingEndChanged;
-(void)deleteCdaAdvertisingStartChanged;
-(void)deleteDebugElectionDecisionMade;
-(void)deleteDeviceElectionStateContext;
-(void)deleteElectionDecisionMade;
-(void)deleteElectionTimerEnded;
-(void)deleteEventMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif