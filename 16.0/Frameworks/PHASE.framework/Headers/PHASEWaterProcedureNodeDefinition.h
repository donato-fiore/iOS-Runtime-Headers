// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEWATERPROCEDURENODEDEFINITION_H
#define PHASEWATERPROCEDURENODEDEFINITION_H



#import "PHASEProcedureNodeDefinition.h"
#import "PHASENumberMetaParameterDefinition.h"

@interface PHASEWaterProcedureNodeDefinition : PHASEProcedureNodeDefinition

@property (nonatomic) CGFloat averageDropDiameter; // ivar: _averageDropDiameter
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *averageDropDiameterMetaParameterDefinition; // ivar: _averageDropDiameterMetaParameterDefinition
@property (nonatomic) CGFloat baseFrequencyMultiplier; // ivar: _baseFrequencyMultiplier
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *baseFrequencyMultiplierMetaParameterDefinition; // ivar: _baseFrequencyMultiplierMetaParameterDefinition
@property (nonatomic) CGFloat bubbleGain; // ivar: _bubbleGain
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *bubbleGainMetaParameterDefinition; // ivar: _bubbleGainMetaParameterDefinition
@property (nonatomic) CGFloat chirpRiseRate; // ivar: _chirpRiseRate
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *chirpRiseRateMetaParameterDefinition; // ivar: _chirpRiseRateMetaParameterDefinition
@property (nonatomic) CGFloat fallRate; // ivar: _fallRate
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *fallRateMetaParameterDefinition; // ivar: _fallRateMetaParameterDefinition
@property (nonatomic) CGFloat impulseGain; // ivar: _impulseGain
@property (nonatomic) CGFloat impulseGainExponent; // ivar: _impulseGainExponent
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *impulseGainExponentMetaParameterDefinition; // ivar: _impulseGainExponentMetaParameterDefinition
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *impulseGainMetaParameterDefinition; // ivar: _impulseGainMetaParameterDefinition
@property (nonatomic) CGFloat impulseShape; // ivar: _impulseShape
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *impulseShapeMetaParameterDefinition; // ivar: _impulseShapeMetaParameterDefinition
@property (nonatomic) CGFloat maxDropDiameter; // ivar: _maxDropDiameter
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *maxDropDiameterMetaParameterDefinition; // ivar: _maxDropDiameterMetaParameterDefinition


+(id)new;
-(id)init;
-(id)initWithMixerDefinition:(id)arg0 maxPolyphony:(int)arg1 voiceStealingType:(NSInteger)arg2 ;
-(id)initWithMixerDefinition:(id)arg0 maxPolyphony:(int)arg1 voiceStealingType:(NSInteger)arg2 identifier:(id)arg3 ;
-(id)initWithMixerDefinition:(id)arg0 referenceGainDbSpl:(CGFloat)arg1 maxPolyphony:(int)arg2 voiceStealingType:(NSInteger)arg3 ;
-(id)initWithMixerDefinition:(id)arg0 referenceGainDbSpl:(CGFloat)arg1 maxPolyphony:(int)arg2 voiceStealingType:(NSInteger)arg3 uid:(id)arg4 ;


@end


#endif