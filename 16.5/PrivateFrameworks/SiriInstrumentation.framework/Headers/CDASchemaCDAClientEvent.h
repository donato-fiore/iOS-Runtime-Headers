// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDASCHEMACDACLIENTEVENT_H
#define CDASCHEMACDACLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "CDASchemaCDADeviceAdvertisingEndContext.h"
#import "CDASchemaCDADeviceAdvertisingStartContext.h"
#import "CDASchemaCDADebugElectionDecisionMade.h"
#import "CDASchemaCDADeviceStateContext.h"
#import "CDASchemaCDAElectionDecisionMade.h"
#import "CDASchemaCDAElectionTimerEnded.h"
#import "CDASchemaCDAClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "CDASchemaCDAUserFeedbackCompleted.h"
#import "CDASchemaCDAUserFeedbackParticipantCollectionReported.h"

@interface CDASchemaCDAClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



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
@property (nonatomic) BOOL hasUserFeedbackCompleted; // ivar: _hasUserFeedbackCompleted
@property (nonatomic) BOOL hasUserFeedbackParticipantCollectionReported; // ivar: _hasUserFeedbackParticipantCollectionReported
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CDASchemaCDAUserFeedbackCompleted *userFeedbackCompleted; // ivar: _userFeedbackCompleted
@property (retain, nonatomic) CDASchemaCDAUserFeedbackParticipantCollectionReported *userFeedbackParticipantCollectionReported; // ivar: _userFeedbackParticipantCollectionReported
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteCdaAdvertisingEndChanged;
-(void)deleteCdaAdvertisingStartChanged;
-(void)deleteDebugElectionDecisionMade;
-(void)deleteDeviceElectionStateContext;
-(void)deleteElectionDecisionMade;
-(void)deleteElectionTimerEnded;
-(void)deleteEventMetadata;
-(void)deleteUserFeedbackCompleted;
-(void)deleteUserFeedbackParticipantCollectionReported;
-(void)writeTo:(id)arg0 ;


@end


#endif