// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEMIXERDEFINITION_H
#define PHASEMIXERDEFINITION_H



#import "PHASEDefinition.h"
#import "PHASENumberMetaParameterDefinition.h"

@interface PHASEMixerDefinition : PHASEDefinition

@property (nonatomic) CGFloat gain; // ivar: _gain
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition; // ivar: _gainMetaParameterDefinition


+(id)new;
-(id)init;
-(id)initInternal;


@end


#endif