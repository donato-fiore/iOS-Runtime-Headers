// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSSCHEMATTSVOICECONTEXT_H
#define TTSSCHEMATTSVOICECONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface TTSSchemaTTSVoiceContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasResourceVersion;
@property (nonatomic) BOOL hasVoiceFootprint;
@property (nonatomic) BOOL hasVoiceType;
@property (nonatomic) BOOL hasVoiceVersion;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int resourceVersion; // ivar: _resourceVersion
@property (nonatomic) int voiceFootprint; // ivar: _voiceFootprint
@property (nonatomic) int voiceType; // ivar: _voiceType
@property (nonatomic) unsigned int voiceVersion; // ivar: _voiceVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif