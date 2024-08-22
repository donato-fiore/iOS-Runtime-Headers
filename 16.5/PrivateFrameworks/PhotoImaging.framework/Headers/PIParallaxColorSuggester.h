// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXCOLORSUGGESTER_H
#define PIPARALLAXCOLORSUGGESTER_H

@class NURuleSystem;

#import <Foundation/Foundation.h>


@interface PIParallaxColorSuggester : NSObject

@property (readonly, nonatomic) NURuleSystem *system; // ivar: _system


-(id)init;
-(id)initWithColorAnalysis:(id)arg0 ;
-(id)suggestedColorForColor:(id)arg0 ;
-(id)suggestedColorsForColors:(id)arg0 fromColorPalette:(id)arg1 ;
-(void)addRuleWithHueMin:(CGFloat)arg0 hueMax:(CGFloat)arg1 suggestion:(id)arg2 ;


@end


#endif