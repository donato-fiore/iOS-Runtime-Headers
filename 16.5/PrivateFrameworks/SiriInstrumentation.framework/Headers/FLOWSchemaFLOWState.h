// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWSTATE_H
#define FLOWSCHEMAFLOWSTATE_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWStateReason.h"

@interface FLOWSchemaFLOWState : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *currentTaskName; // ivar: _currentTaskName
@property (copy, nonatomic) NSString *currentTaskType; // ivar: _currentTaskType
@property (retain, nonatomic) FLOWSchemaFLOWStateReason *flowStateReason; // ivar: _flowStateReason
@property (copy, nonatomic) NSString *flowStateReasonDescription; // ivar: _flowStateReasonDescription
@property (nonatomic) int flowStateType; // ivar: _flowStateType
@property (nonatomic) BOOL hasCurrentTaskName; // ivar: _hasCurrentTaskName
@property (nonatomic) BOOL hasCurrentTaskType; // ivar: _hasCurrentTaskType
@property (nonatomic) BOOL hasFlowStateReason; // ivar: _hasFlowStateReason
@property (nonatomic) BOOL hasFlowStateReasonDescription; // ivar: _hasFlowStateReasonDescription
@property (nonatomic) BOOL hasFlowStateType;
@property (nonatomic) BOOL hasResolvedSlotName; // ivar: _hasResolvedSlotName
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resolvedSlotName; // ivar: _resolvedSlotName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentTaskName;
-(void)deleteCurrentTaskType;
-(void)deleteFlowStateReason;
-(void)deleteFlowStateReasonDescription;
-(void)deleteFlowStateType;
-(void)deleteResolvedSlotName;
-(void)writeTo:(id)arg0 ;


@end


#endif