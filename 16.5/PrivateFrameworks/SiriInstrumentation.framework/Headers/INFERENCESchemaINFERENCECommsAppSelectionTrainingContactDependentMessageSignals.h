// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGCONTACTDEPENDENTMESSAGESIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGCONTACTDEPENDENTMESSAGESIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float appContactAffinityScoreForMessages; // ivar: _appContactAffinityScoreForMessages
@property (nonatomic) float appContactAffinityScoreForMessagesReceived; // ivar: _appContactAffinityScoreForMessagesReceived
@property (nonatomic) float appContactAffinityScoreForMessagesUsingSiri; // ivar: _appContactAffinityScoreForMessagesUsingSiri
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessages;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessagesReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessagesUsingSiri;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppContactAffinityScoreForMessages;
-(void)deleteAppContactAffinityScoreForMessagesReceived;
-(void)deleteAppContactAffinityScoreForMessagesUsingSiri;
-(void)writeTo:(id)arg0 ;


@end


#endif