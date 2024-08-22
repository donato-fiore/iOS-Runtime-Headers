// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTPRESETDEPENDENCY_H
#define AVTPRESETDEPENDENCY_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVTPreset.h"

@interface AVTPresetDependency : NSObject {
    float _morphVariantIntensity;
    NSInteger _category;
    AVTPreset *_preset;
    NSString *_morphVariant;
    NSString *_imageVariant;
    NSString *_materialVariant;
    NSDictionary *_visibilityRules;
}




-(id)description;


@end


#endif