// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXBLACKWHITEMONOSTYLE_H
#define PIPARALLAXBLACKWHITEMONOSTYLE_H



#import "PIParallaxStyle.h"

@interface PIParallaxBlackWhiteMonoStyle : PIParallaxStyle



+(id)styleWithColorAnalysis:(id)arg0 ;
+(id)styleWithParameters:(id)arg0 colorSuggestions:(id)arg1 ;
-(BOOL)configureForCategory:(id)arg0 ;
-(id)defaultDominantColorWithAnalysis:(id)arg0 ;
-(id)kind;
-(id)parameters;
-(id)recipeIdentifier;
-(void)updateClockPropertiesWithClockAreaLuminance:(CGFloat)arg0 ;


@end


#endif