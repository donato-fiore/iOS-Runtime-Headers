// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEGENERATORNODEDEFINITION_H
#define PHASEGENERATORNODEDEFINITION_H



#import "PHASESoundEventNodeDefinition.h"
#import "PHASENumberMetaParameterDefinition.h"
#import "PHASEGeneratorParameters.h"
#import "PHASEGroup.h"
#import "PHASEMixerDefinition.h"

@interface PHASEGeneratorNodeDefinition : PHASESoundEventNodeDefinition

@property (readonly) NSInteger calibrationMode; // ivar: _calibrationMode
@property (nonatomic) CGFloat gain; // ivar: _gain
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition; // ivar: _gainMetaParameterDefinition
@property (readonly, nonatomic) PHASEGeneratorParameters *generatorParameters; // ivar: _generatorParameters
@property (weak, nonatomic) PHASEGroup *group; // ivar: _group
@property (readonly) CGFloat level; // ivar: _level
@property (readonly, nonatomic) PHASEMixerDefinition *mixerDefinition; // ivar: _mixerDefinition
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *rateMetaParameterDefinition; // ivar: _rateMetaParameterDefinition


+(id)new;
-(id)init;
-(id)initInternal:(id)arg0 ;


@end


#endif