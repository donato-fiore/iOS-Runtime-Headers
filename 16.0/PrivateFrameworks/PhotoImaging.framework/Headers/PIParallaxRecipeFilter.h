// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXRECIPEFILTER_H
#define PIPARALLAXRECIPEFILTER_H

@class NSDictionary;


#import "PIParallaxFilter.h"
#import "PIParallaxStyleRecipe.h"

@interface PIParallaxRecipeFilter : PIParallaxFilter

@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) PIParallaxStyleRecipe *recipe; // ivar: _recipe
@property (readonly, nonatomic) NSDictionary *resolvedParameters;


-(id)_evaluateImageWithFilterDefinitions:(id)arg0 inputImage:(id)arg1 ;
-(id)initWithRecipe:(id)arg0 ;
-(id)outputBackgroundImage;
-(id)outputForegroundImage;
-(id)outputMatteImage;


@end


#endif