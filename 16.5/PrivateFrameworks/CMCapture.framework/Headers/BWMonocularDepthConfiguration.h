// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMONOCULARDEPTHCONFIGURATION_H
#define BWMONOCULARDEPTHCONFIGURATION_H



#import "BWInferenceConfiguration.h"

@interface BWMonocularDepthConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) NSInteger depthPrioritization; // ivar: _depthPrioritization
@property (readonly, nonatomic) unsigned int monocularDepthType; // ivar: _monocularDepthType


-(id)initWithInferenceType:(int)arg0 monocularDepthType:(unsigned int)arg1 ;


@end


#endif