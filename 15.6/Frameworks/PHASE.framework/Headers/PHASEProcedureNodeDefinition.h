// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEPROCEDURENODEDEFINITION_H
#define PHASEPROCEDURENODEDEFINITION_H



#import "PHASEGeneratorNodeDefinition.h"

@interface PHASEProcedureNodeDefinition : PHASEGeneratorNodeDefinition

@property (nonatomic) NSInteger cullOption; // ivar: _cullOption
@property (readonly, nonatomic) int maxPolyphony; // ivar: _maxPolyphony
@property (nonatomic) NSInteger playbackMode; // ivar: _playbackMode
@property (nonatomic) CGFloat referenceGainDbSpl; // ivar: _referenceGainDbSpl
@property (nonatomic) NSInteger voiceStealingType; // ivar: _voiceStealingType


+(id)new;
-(id)init;
-(id)initInternal:(id)arg0 maxPolyphony:(int)arg1 voiceStealingType:(NSInteger)arg2 ;


@end


#endif