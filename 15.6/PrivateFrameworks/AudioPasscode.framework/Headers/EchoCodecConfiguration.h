// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECHOCODECCONFIGURATION_H
#define ECHOCODECCONFIGURATION_H

@protocol NSCopying;


#import "AUPasscodeCodecConfiguration.h"

@interface EchoCodecConfiguration : AUPasscodeCodecConfiguration <NSCopying>



@property (nonatomic) NSUInteger algorithmVersionNumber; // ivar: _algorithmVersionNumber
@property (nonatomic) float delayForBit0; // ivar: _delayForBit0
@property (nonatomic) float delayForBit1; // ivar: _delayForBit1
@property (nonatomic) float echoGainDB; // ivar: _echoGainDB
@property (nonatomic) NSUInteger frameSize; // ivar: _frameSize
@property (nonatomic) BOOL hfNoiseFillingFlag; // ivar: _hfNoiseFillingFlag
@property (nonatomic) float hpfCutOffFreq; // ivar: _hpfCutOffFreq
@property (nonatomic) float noiseGainDB; // ivar: _noiseGainDB
@property (nonatomic) NSUInteger numFrameRepeat; // ivar: _numFrameRepeat
@property (nonatomic) NSUInteger randomSeed; // ivar: _randomSeed
@property (nonatomic) float syncDetectThreshold; // ivar: _syncDetectThreshold


+(BOOL)supportsSecureCoding;
-(id)commandLineOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapabilityData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommandLineArgs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultValues;


@end


#endif