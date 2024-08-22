// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXRECIPESTYLE_H
#define PIPARALLAXRECIPESTYLE_H

@class NSString;


#import "PIParallaxStyle.h"
#import "PIParallaxStyleRecipe.h"

@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString *_identifier;
    PIParallaxStyleRecipe *_recipe;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)clockFont;
-(id)description;
-(id)filter;
-(id)inactiveFilter;
-(id)initWithIdentifier:(id)arg0 recipe:(id)arg1 ;
-(id)kind;
-(id)parameters;
-(id)recipe;
-(id)recipeIdentifier;


@end


#endif