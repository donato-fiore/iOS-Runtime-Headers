// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPERSONSEMANTICSCONFIGURATION_H
#define BWPERSONSEMANTICSCONFIGURATION_H



#import "BWInferenceConfiguration.h"

@interface BWPersonSemanticsConfiguration : BWInferenceConfiguration

@property (nonatomic) unsigned int enabledSemantics; // ivar: _enabledSemantics


+(unsigned int)personSemanticForAttachedMediaKey:(id)arg0 ;


@end


#endif