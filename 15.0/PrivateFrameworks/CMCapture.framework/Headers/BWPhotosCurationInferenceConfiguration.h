// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPHOTOSCURATIONINFERENCECONFIGURATION_H
#define BWPHOTOSCURATIONINFERENCECONFIGURATION_H



#import "BWVisionInferenceConfiguration.h"

@interface BWPhotosCurationInferenceConfiguration : BWVisionInferenceConfiguration

@property (nonatomic) int semanticDevelopmentVersion; // ivar: _semanticDevelopmentVersion


+(id)configuration;
-(id)initWithInferenceType:(int)arg0 ;


@end


#endif