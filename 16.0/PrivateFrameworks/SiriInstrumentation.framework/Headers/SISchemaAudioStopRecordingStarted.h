// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAAUDIOSTOPRECORDINGSTARTED_H
#define SISCHEMAAUDIOSTOPRECORDINGSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAudioStopRecordingStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasStopReasonMajor;
@property (nonatomic) BOOL hasStopReasonMinor;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int stopReasonMajor; // ivar: _stopReasonMajor
@property (nonatomic) int stopReasonMinor; // ivar: _stopReasonMinor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteStopReasonMajor;
-(void)deleteStopReasonMinor;
-(void)writeTo:(id)arg0 ;


@end


#endif