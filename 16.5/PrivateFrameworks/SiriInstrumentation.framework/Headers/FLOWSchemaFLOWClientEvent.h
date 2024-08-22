// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWCLIENTEVENT_H
#define FLOWSCHEMAFLOWCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown.h"
#import "FLOWSchemaFLOWEventMetadata.h"
#import "FLOWSchemaFLOWDomainExecutionContext.h"
#import "FLOWSchemaFLOWEntityContextTier1.h"
#import "FLOWSchemaFLOWStep.h"
#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWMediaPlayerPlaybackContextTier1.h"
#import "FLOWSchemaFLOWMediaPlayerRadioStationContextTier1.h"
#import "FLOWSchemaFLOWPegasusContextTier1.h"
#import "FLOWSchemaFLOWSmsAttachmentMetadataTier1.h"

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *appleMusicVoicePreviewOfferNotShown; // ivar: _appleMusicVoicePreviewOfferNotShown
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) FLOWSchemaFLOWDomainExecutionContext *flowDomainExecutionContext; // ivar: _flowDomainExecutionContext
@property (retain, nonatomic) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1; // ivar: _flowEntityContextTier1
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep; // ivar: _flowStep
@property (nonatomic) BOOL hasAppleMusicVoicePreviewOfferNotShown; // ivar: _hasAppleMusicVoicePreviewOfferNotShown
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasFlowDomainExecutionContext; // ivar: _hasFlowDomainExecutionContext
@property (nonatomic) BOOL hasFlowEntityContextTier1; // ivar: _hasFlowEntityContextTier1
@property (nonatomic) BOOL hasFlowStep; // ivar: _hasFlowStep
@property (nonatomic) BOOL hasMediaPlayerPlaybackContextTier1; // ivar: _hasMediaPlayerPlaybackContextTier1
@property (nonatomic) BOOL hasMediaPlayerRadioStationContextTier1; // ivar: _hasMediaPlayerRadioStationContextTier1
@property (nonatomic) BOOL hasPegasusContextTier1; // ivar: _hasPegasusContextTier1
@property (nonatomic) BOOL hasSmsAttachmentMetadataTier1; // ivar: _hasSmsAttachmentMetadataTier1
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 *mediaPlayerPlaybackContextTier1; // ivar: _mediaPlayerPlaybackContextTier1
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerRadioStationContextTier1 *mediaPlayerRadioStationContextTier1; // ivar: _mediaPlayerRadioStationContextTier1
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContextTier1 *pegasusContextTier1; // ivar: _pegasusContextTier1
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1; // ivar: _smsAttachmentMetadataTier1
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
-(void)deleteAppleMusicVoicePreviewOfferNotShown;
-(void)deleteEventMetadata;
-(void)deleteFlowDomainExecutionContext;
-(void)deleteFlowEntityContextTier1;
-(void)deleteFlowStep;
-(void)deleteMediaPlayerPlaybackContextTier1;
-(void)deleteMediaPlayerRadioStationContextTier1;
-(void)deletePegasusContextTier1;
-(void)deleteSmsAttachmentMetadataTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif