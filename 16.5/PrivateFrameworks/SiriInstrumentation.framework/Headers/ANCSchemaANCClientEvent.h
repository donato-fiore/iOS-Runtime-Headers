// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANCSCHEMAANCCLIENTEVENT_H
#define ANCSCHEMAANCCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "ANCSchemaANCClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "ANCSchemaANCNotificationReceived.h"
#import "ANCSchemaANCNotificationReceivedTier1.h"
#import "ANCSchemaANCUserResponseEvaluated.h"

@interface ANCSchemaANCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) ANCSchemaANCClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasNotificationReceived; // ivar: _hasNotificationReceived
@property (nonatomic) BOOL hasNotificationReceivedTier1; // ivar: _hasNotificationReceivedTier1
@property (nonatomic) BOOL hasUserResponseEvaluated; // ivar: _hasUserResponseEvaluated
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ANCSchemaANCNotificationReceived *notificationReceived; // ivar: _notificationReceived
@property (retain, nonatomic) ANCSchemaANCNotificationReceivedTier1 *notificationReceivedTier1; // ivar: _notificationReceivedTier1
@property (retain, nonatomic) ANCSchemaANCUserResponseEvaluated *userResponseEvaluated; // ivar: _userResponseEvaluated
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
-(void)deleteEventMetadata;
-(void)deleteNotificationReceived;
-(void)deleteNotificationReceivedTier1;
-(void)deleteUserResponseEvaluated;
-(void)writeTo:(id)arg0 ;


@end


#endif