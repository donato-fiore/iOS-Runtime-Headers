// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPDEPENDENTPHONECALLSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPDEPENDENTPHONECALLSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float appAffinityScoreForPhoneCall; // ivar: _appAffinityScoreForPhoneCall
@property (nonatomic) float appAffinityScoreForPhoneCallReceived; // ivar: _appAffinityScoreForPhoneCallReceived
@property (nonatomic) float appAffinityScoreForPhoneCallUsingSiri; // ivar: _appAffinityScoreForPhoneCallUsingSiri
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppAffinityScoreForPhoneCallUsingSiri;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppAffinityScoreForPhoneCall;
-(void)deleteAppAffinityScoreForPhoneCallReceived;
-(void)deleteAppAffinityScoreForPhoneCallUsingSiri;
-(void)writeTo:(id)arg0 ;


@end


#endif