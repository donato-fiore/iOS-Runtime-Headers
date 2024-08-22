// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGCONTACTDEPENDENTPHONECALLSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGCONTACTDEPENDENTPHONECALLSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float appContactAffinityScoreForPhoneCall; // ivar: _appContactAffinityScoreForPhoneCall
@property (nonatomic) float appContactAffinityScoreForPhoneCallReceived; // ivar: _appContactAffinityScoreForPhoneCallReceived
@property (nonatomic) float appContactAffinityScoreForPhoneCallUsingSiri; // ivar: _appContactAffinityScoreForPhoneCallUsingSiri
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallUsingSiri;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppContactAffinityScoreForPhoneCall;
-(void)deleteAppContactAffinityScoreForPhoneCallReceived;
-(void)deleteAppContactAffinityScoreForPhoneCallUsingSiri;
-(void)writeTo:(id)arg0 ;


@end


#endif