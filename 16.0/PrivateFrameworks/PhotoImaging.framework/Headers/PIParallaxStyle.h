// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLE_H
#define PIPARALLAXSTYLE_H

@class PFParallaxColor, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "PIParallaxStyleRecipe.h"

@interface PIParallaxStyle : NSObject

@property (retain, nonatomic) PFParallaxColor *clockColor; // ivar: _clockColor
@property (readonly, copy, nonatomic) NSString *clockFont;
@property (retain, nonatomic) NSArray *colorSuggestions; // ivar: _colorSuggestions
@property (readonly, nonatomic) BOOL hasColorParameter;
@property (readonly, nonatomic) BOOL hasTonalityMode;
@property (readonly, copy, nonatomic) NSString *inactiveRecipeIdentifier;
@property (readonly, nonatomic) BOOL isSegmented;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) PIParallaxStyleRecipe *recipe;
@property (readonly, copy, nonatomic) NSString *recipeIdentifier;


+(id)_filterForRecipeIdentifier:(id)arg0 ;
+(id)colorPaletteWithStyleKind:(id)arg0 ;
+(id)defaultStyleForKind:(id)arg0 colorAnalysis:(id)arg1 ;
+(id)styleWithBakedStyle:(id)arg0 ;
+(id)styleWithColorAnalysis:(id)arg0 ;
+(id)styleWithParameters:(id)arg0 colorSuggestions:(id)arg1 ;
-(BOOL)configureForCategory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)bakedStyle;
-(id)colorSuggestionForCategory:(id)arg0 ;
-(id)defaultDominantColorWithAnalysis:(id)arg0 ;
-(id)description;
-(id)filter;
-(id)inactiveFilter;
-(id)inactiveFlatFilter;
-(id)inactiveFlatRecipeIdentifier;
-(id)init;
-(id)initWithClockColor:(id)arg0 colorSuggestions:(id)arg1 ;
-(void)updateClockPropertiesWithClockAreaLuminance:(CGFloat)arg0 ;


@end


#endif