// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPDEPENDENTMESSAGESIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPDEPENDENTMESSAGESIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float appAffinityScoreForMessages; // ivar: _appAffinityScoreForMessages
@property (nonatomic) float appAffinityScoreForMessagesReceived; // ivar: _appAffinityScoreForMessagesReceived
@property (nonatomic) float appAffinityScoreForMessagesUsingSiri; // ivar: _appAffinityScoreForMessagesUsingSiri
@property (nonatomic) BOOL hasAppAffinityScoreForMessages;
@property (nonatomic) BOOL hasAppAffinityScoreForMessagesReceived;
@property (nonatomic) BOOL hasAppAffinityScoreForMessagesUsingSiri;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppAffinityScoreForMessages;
-(void)deleteAppAffinityScoreForMessagesReceived;
-(void)deleteAppAffinityScoreForMessagesUsingSiri;
-(void)writeTo:(id)arg0 ;


@end


#endif