// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWMEDIAPLAYERCONTEXT_H
#define FLOWSCHEMAFLOWMEDIAPLAYERCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWholeHouseAudioDestinationContext.h"

@interface FLOWSchemaFLOWMediaPlayerContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsMusicSubscriber;
@property (nonatomic) BOOL hasIsWholeHouseAudio;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) BOOL hasWholeHouseAudioDestinationContext; // ivar: _hasWholeHouseAudioDestinationContext
@property (nonatomic) BOOL isMusicSubscriber; // ivar: _isMusicSubscriber
@property (nonatomic) BOOL isWholeHouseAudio; // ivar: _isWholeHouseAudio
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (nonatomic) int taskType; // ivar: _taskType
@property (retain, nonatomic) FLOWSchemaFLOWholeHouseAudioDestinationContext *wholeHouseAudioDestinationContext; // ivar: _wholeHouseAudioDestinationContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif