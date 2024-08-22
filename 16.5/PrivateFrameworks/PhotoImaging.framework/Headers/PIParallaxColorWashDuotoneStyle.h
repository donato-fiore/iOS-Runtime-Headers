// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXCOLORWASHDUOTONESTYLE_H
#define PIPARALLAXCOLORWASHDUOTONESTYLE_H

@class PFParallaxColor;
@protocol PIParallaxColorParameterStyle;


#import "PIParallaxStyle.h"

@interface PIParallaxColorWashDuotoneStyle : PIParallaxStyle <PIParallaxColorParameterStyle>



@property (retain, nonatomic) PFParallaxColor *color;
@property (retain, nonatomic) PFParallaxColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) PFParallaxColor *secondaryColor; // ivar: _secondaryColor


+(id)styleWithColorAnalysis:(id)arg0 ;
+(id)styleWithParameters:(id)arg0 colorSuggestions:(id)arg1 ;
-(BOOL)configureForCategory:(id)arg0 ;
-(BOOL)hasColorParameter;
-(id)defaultDominantColorWithAnalysis:(id)arg0 ;
-(id)initWithPrimaryColor:(id)arg0 secondaryColor:(id)arg1 clockColor:(id)arg2 colorSuggestions:(id)arg3 ;
-(id)kind;
-(id)parameters;
-(id)recipeIdentifier;


@end


#endif