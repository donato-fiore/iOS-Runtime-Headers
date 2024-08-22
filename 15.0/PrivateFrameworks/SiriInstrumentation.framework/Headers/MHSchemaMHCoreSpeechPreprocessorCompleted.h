// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHCORESPEECHPREPROCESSORCOMPLETED_H
#define MHSCHEMAMHCORESPEECHPREPROCESSORCOMPLETED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHCoreSpeechPreprocessorCompleted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float aboveNinetyFivepcOfMax; // ivar: _aboveNinetyFivepcOfMax
@property (nonatomic) float absMaxVal; // ivar: _absMaxVal
@property (nonatomic) int beepLocation; // ivar: _beepLocation
@property (nonatomic) float beepPower; // ivar: _beepPower
@property (nonatomic) BOOL hasAboveNinetyFivepcOfMax;
@property (nonatomic) BOOL hasAbsMaxVal;
@property (nonatomic) BOOL hasBeepLocation;
@property (nonatomic) BOOL hasBeepPower;
@property (nonatomic) BOOL hasInitialContinousZeros;
@property (nonatomic) BOOL hasMaxContinousZeros;
@property (nonatomic) BOOL hasNumTotalInputSamples;
@property (nonatomic) BOOL hasNumTotalOutputSamples;
@property (nonatomic) BOOL hasOriginalPower;
@property (nonatomic) BOOL hasSignalPower;
@property (nonatomic) BOOL hasStatsComputed;
@property (nonatomic) NSUInteger initialContinousZeros; // ivar: _initialContinousZeros
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger maxContinousZeros; // ivar: _maxContinousZeros
@property (copy, nonatomic) NSArray *midSegmentContinousZeros; // ivar: _midSegmentContinousZeros
@property (nonatomic) NSUInteger numTotalInputSamples; // ivar: _numTotalInputSamples
@property (nonatomic) NSUInteger numTotalOutputSamples; // ivar: _numTotalOutputSamples
@property (nonatomic) float originalPower; // ivar: _originalPower
@property (nonatomic) float signalPower; // ivar: _signalPower
@property (nonatomic) int statsComputed; // ivar: _statsComputed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)midSegmentContinousZerosAtIndex:(NSUInteger)arg0 ;
-(void)addMidSegmentContinousZeros:(id)arg0 ;
-(void)clearMidSegmentContinousZeros;
-(void)writeTo:(id)arg0 ;


@end


#endif