// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXRENDERINGCONFIGURATION_H
#define SXRENDERINGCONFIGURATION_H

@class NSArray;


#import "SXJSONObject.h"
#import "SXHintsConfigurationOption.h"

@interface SXRenderingConfiguration : SXJSONObject

@property (readonly, nonatomic) NSArray *conditionKeys;
@property (readonly, nonatomic) SXHintsConfigurationOption *hints;




@end


#endif