// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSEMEDIAUSERFOLLOWUPACTION_H
#define PSESCHEMAPSEMEDIAUSERFOLLOWUPACTION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PSESchemaPSEMediaEntitySimilarity.h"

@interface PSESchemaPSEMediaUserFollowupAction : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsAirPlay;
@property (nonatomic) BOOL hasIsFirstPartyAppUsedForFollowup;
@property (nonatomic) BOOL hasIsSameAppUsed;
@property (nonatomic) BOOL hasIsSubscriber;
@property (nonatomic) BOOL hasMediaContentDurationBucket;
@property (nonatomic) BOOL hasMediaEntitySimilarity; // ivar: _hasMediaEntitySimilarity
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL isAirPlay; // ivar: _isAirPlay
@property (nonatomic) BOOL isFirstPartyAppUsedForFollowup; // ivar: _isFirstPartyAppUsedForFollowup
@property (nonatomic) BOOL isSameAppUsed; // ivar: _isSameAppUsed
@property (nonatomic) BOOL isSubscriber; // ivar: _isSubscriber
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaContentDurationBucket; // ivar: _mediaContentDurationBucket
@property (retain, nonatomic) PSESchemaPSEMediaEntitySimilarity *mediaEntitySimilarity; // ivar: _mediaEntitySimilarity
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) int state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsAirPlay;
-(void)deleteIsFirstPartyAppUsedForFollowup;
-(void)deleteIsSameAppUsed;
-(void)deleteIsSubscriber;
-(void)deleteMediaContentDurationBucket;
-(void)deleteMediaEntitySimilarity;
-(void)deleteMediaType;
-(void)deleteState;
-(void)writeTo:(id)arg0 ;


@end


#endif