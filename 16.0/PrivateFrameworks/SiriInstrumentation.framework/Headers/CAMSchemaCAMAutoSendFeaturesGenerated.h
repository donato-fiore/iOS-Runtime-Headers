// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSCHEMACAMAUTOSENDFEATURESGENERATED_H
#define CAMSCHEMACAMAUTOSENDFEATURESGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "CAMSchemaCAMAggregateFeatureValue.h"

@interface CAMSchemaCAMAutoSendFeaturesGenerated : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasUserAsrScore; // ivar: _hasUserAsrScore
@property (nonatomic) BOOL hasUserAsrScoreTargetApp; // ivar: _hasUserAsrScoreTargetApp
@property (nonatomic) BOOL hasUserAsrScoreTargetContact; // ivar: _hasUserAsrScoreTargetContact
@property (nonatomic) BOOL hasUserAsrScoreWhenCompleted; // ivar: _hasUserAsrScoreWhenCompleted
@property (nonatomic) BOOL hasUserAsrScoreWhenRejected; // ivar: _hasUserAsrScoreWhenRejected
@property (nonatomic) BOOL hasUserPayloadLengthInCharacters; // ivar: _hasUserPayloadLengthInCharacters
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersTargetApp; // ivar: _hasUserPayloadLengthInCharactersTargetApp
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersTargetContact; // ivar: _hasUserPayloadLengthInCharactersTargetContact
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersWhenCompleted; // ivar: _hasUserPayloadLengthInCharactersWhenCompleted
@property (nonatomic) BOOL hasUserPayloadLengthInCharactersWhenRejected; // ivar: _hasUserPayloadLengthInCharactersWhenRejected
@property (nonatomic) BOOL hasUserRejectRate; // ivar: _hasUserRejectRate
@property (nonatomic) BOOL hasUserRejectRateTargetApp; // ivar: _hasUserRejectRateTargetApp
@property (nonatomic) BOOL hasUserRejectRateTargetContact; // ivar: _hasUserRejectRateTargetContact
@property (nonatomic) BOOL hasUserRejectRateWhenConfirmDecision; // ivar: _hasUserRejectRateWhenConfirmDecision
@property (nonatomic) BOOL hasUserRejectRateWhenSkipDecision; // ivar: _hasUserRejectRateWhenSkipDecision
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScore; // ivar: _userAsrScore
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreTargetApp; // ivar: _userAsrScoreTargetApp
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreTargetContact; // ivar: _userAsrScoreTargetContact
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreWhenCompleted; // ivar: _userAsrScoreWhenCompleted
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreWhenRejected; // ivar: _userAsrScoreWhenRejected
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharacters; // ivar: _userPayloadLengthInCharacters
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersTargetApp; // ivar: _userPayloadLengthInCharactersTargetApp
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersTargetContact; // ivar: _userPayloadLengthInCharactersTargetContact
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersWhenCompleted; // ivar: _userPayloadLengthInCharactersWhenCompleted
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersWhenRejected; // ivar: _userPayloadLengthInCharactersWhenRejected
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRate; // ivar: _userRejectRate
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateTargetApp; // ivar: _userRejectRateTargetApp
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateTargetContact; // ivar: _userRejectRateTargetContact
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateWhenConfirmDecision; // ivar: _userRejectRateWhenConfirmDecision
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateWhenSkipDecision; // ivar: _userRejectRateWhenSkipDecision


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteUserAsrScore;
-(void)deleteUserAsrScoreTargetApp;
-(void)deleteUserAsrScoreTargetContact;
-(void)deleteUserAsrScoreWhenCompleted;
-(void)deleteUserAsrScoreWhenRejected;
-(void)deleteUserPayloadLengthInCharacters;
-(void)deleteUserPayloadLengthInCharactersTargetApp;
-(void)deleteUserPayloadLengthInCharactersTargetContact;
-(void)deleteUserPayloadLengthInCharactersWhenCompleted;
-(void)deleteUserPayloadLengthInCharactersWhenRejected;
-(void)deleteUserRejectRate;
-(void)deleteUserRejectRateTargetApp;
-(void)deleteUserRejectRateTargetContact;
-(void)deleteUserRejectRateWhenConfirmDecision;
-(void)deleteUserRejectRateWhenSkipDecision;
-(void)writeTo:(id)arg0 ;


@end


#endif