// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXCOLORWASHSINGLESTYLE_H
#define PIPARALLAXCOLORWASHSINGLESTYLE_H

@class PFParallaxColor;
@protocol PIParallaxColorParameterStyle;


#import "PIParallaxStyle.h"

@interface PIParallaxColorWashSingleStyle : PIParallaxStyle <PIParallaxColorParameterStyle>



@property (retain, nonatomic) PFParallaxColor *color; // ivar: _color


+(id)styleWithColorAnalysis:(id)arg0 ;
+(id)styleWithParameters:(id)arg0 colorSuggestions:(id)arg1 ;
-(BOOL)configureForCategory:(id)arg0 ;
-(BOOL)hasColorParameter;
-(id)defaultDominantColorWithAnalysis:(id)arg0 ;
-(id)initWithColor:(id)arg0 clockColor:(id)arg1 suggestions:(id)arg2 ;
-(id)kind;
-(id)parameters;
-(id)recipeIdentifier;


@end


#endif