// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCHROMAKEYPRESENTATIONCONFIGURATION_H
#define AVTCHROMAKEYPRESENTATIONCONFIGURATION_H

@class UIColor, NSValue;


#import "AVTPresentationConfiguration.h"

@interface AVTChromaKeyPresentationConfiguration : AVTPresentationConfiguration {
    UIColor *_keyColor;
    NSValue *_shadableKeyColorValue;
}


@property (retain, nonatomic) UIColor *keyColor;


-(id)init;
-(id)shadableKeyColorValue;


@end


#endif