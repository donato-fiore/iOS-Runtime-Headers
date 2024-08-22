// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWTEXTLOCALIZATIONINFERENCECONFIGURATION_H
#define BWTEXTLOCALIZATIONINFERENCECONFIGURATION_H



#import "BWBoundingBoxInferenceConfiguration.h"

@interface BWTextLocalizationInferenceConfiguration : BWBoundingBoxInferenceConfiguration

@property (nonatomic) ? version; // ivar: _version


+(id)configuration;
-(id)initWithInferenceType:(int)arg0 version:(struct ? )arg1 ;


@end


#endif