// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHASRAUDIOCONFIGURESTARTED_H
#define MHSCHEMAMHASRAUDIOCONFIGURESTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHASRAudioConfigureStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int audioCodec; // ivar: _audioCodec
@property (nonatomic) NSUInteger audioSkippedNumSamples; // ivar: _audioSkippedNumSamples
@property (nonatomic) NSUInteger audioSkippedTimeInNs; // ivar: _audioSkippedTimeInNs
@property (nonatomic) BOOL hasAudioCodec;
@property (nonatomic) BOOL hasAudioSkippedNumSamples;
@property (nonatomic) BOOL hasAudioSkippedTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioCodec;
-(void)deleteAudioSkippedNumSamples;
-(void)deleteAudioSkippedTimeInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif