// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSSCHEMATTSCLIENTEVENT_H
#define TTSSCHEMATTSCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "TTSSchemaTTSClientEventMetadata.h"
#import "TTSSchemaTTSRequestReceived.h"
#import "TTSSchemaTTSRequestReceivedTier1.h"
#import "TTSSchemaTTSClientSpeechContext.h"
#import "TTSSchemaTTSVoiceFallbackOccurred.h"

@interface TTSSchemaTTSClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) TTSSchemaTTSClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasRequestReceived; // ivar: _hasRequestReceived
@property (nonatomic) BOOL hasRequestReceivedTier1; // ivar: _hasRequestReceivedTier1
@property (nonatomic) BOOL hasSpeechContext; // ivar: _hasSpeechContext
@property (nonatomic) BOOL hasVoiceFallbackOccurred; // ivar: _hasVoiceFallbackOccurred
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) TTSSchemaTTSRequestReceived *requestReceived; // ivar: _requestReceived
@property (retain, nonatomic) TTSSchemaTTSRequestReceivedTier1 *requestReceivedTier1; // ivar: _requestReceivedTier1
@property (retain, nonatomic) TTSSchemaTTSClientSpeechContext *speechContext; // ivar: _speechContext
@property (retain, nonatomic) TTSSchemaTTSVoiceFallbackOccurred *voiceFallbackOccurred; // ivar: _voiceFallbackOccurred
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif