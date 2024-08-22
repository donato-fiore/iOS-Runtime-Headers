// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWMEDIAPLAYERCONTEXT_H
#define FLOWSCHEMAFLOWMEDIAPLAYERCONTEXT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWMediaPlayerPlaybackContext.h"
#import "FLOWSchemaFLOWholeHouseAudioDestinationContext.h"

@interface FLOWSchemaFLOWMediaPlayerContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *activeSubscriptions; // ivar: _activeSubscriptions
@property (nonatomic) int appleMusicVoicePreviewOfferNotShown; // ivar: _appleMusicVoicePreviewOfferNotShown
@property (nonatomic) int appleMusicVoiceUserSubscriptionState; // ivar: _appleMusicVoiceUserSubscriptionState
@property (nonatomic) BOOL hasAppleMusicVoicePreviewOfferNotShown;
@property (nonatomic) BOOL hasAppleMusicVoiceUserSubscriptionState;
@property (nonatomic) BOOL hasIsAppleMusicVoiceEligible;
@property (nonatomic) BOOL hasIsMusicSubscriber;
@property (nonatomic) BOOL hasIsWholeHouseAudio;
@property (nonatomic) BOOL hasMediaPlayerPlaybackContext; // ivar: _hasMediaPlayerPlaybackContext
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) BOOL hasWholeHouseAudioDestinationContext; // ivar: _hasWholeHouseAudioDestinationContext
@property (nonatomic) BOOL isAppleMusicVoiceEligible; // ivar: _isAppleMusicVoiceEligible
@property (nonatomic) BOOL isMusicSubscriber; // ivar: _isMusicSubscriber
@property (nonatomic) BOOL isWholeHouseAudio; // ivar: _isWholeHouseAudio
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaybackContext *mediaPlayerPlaybackContext; // ivar: _mediaPlayerPlaybackContext
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) int taskType; // ivar: _taskType
@property (readonly, nonatomic) NSUInteger whichMediaplayertaskcontext; // ivar: _whichMediaplayertaskcontext
@property (retain, nonatomic) FLOWSchemaFLOWholeHouseAudioDestinationContext *wholeHouseAudioDestinationContext; // ivar: _wholeHouseAudioDestinationContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)activeSubscriptionsAtIndex:(NSUInteger)arg0 ;
-(void)addActiveSubscriptions:(int)arg0 ;
-(void)clearActiveSubscriptions;
-(void)deleteActiveSubscriptions;
-(void)deleteAppleMusicVoicePreviewOfferNotShown;
-(void)deleteAppleMusicVoiceUserSubscriptionState;
-(void)deleteIsAppleMusicVoiceEligible;
-(void)deleteIsMusicSubscriber;
-(void)deleteIsWholeHouseAudio;
-(void)deleteMediaPlayerPlaybackContext;
-(void)deleteMediaType;
-(void)deleteTaskType;
-(void)deleteWholeHouseAudioDestinationContext;
-(void)writeTo:(id)arg0 ;


@end


#endif