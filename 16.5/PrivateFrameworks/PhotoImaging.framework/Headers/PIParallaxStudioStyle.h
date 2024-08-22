// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXSTUDIOSTYLE_H
#define PIPARALLAXSTUDIOSTYLE_H

@protocol PIParallaxTonalityModeStyle;


#import "PIParallaxStyle.h"

@interface PIParallaxStudioStyle : PIParallaxStyle <PIParallaxTonalityModeStyle>



@property (nonatomic) NSInteger tonality; // ivar: tonality


+(id)styleWithColorAnalysis:(id)arg0 ;
+(id)styleWithParameters:(id)arg0 colorSuggestions:(id)arg1 ;
-(BOOL)configureForCategory:(id)arg0 ;
-(BOOL)hasTonalityMode;
-(id)kind;
-(id)parameters;
-(id)recipeIdentifier;
-(void)updateClockPropertiesWithClockAreaLuminance:(CGFloat)arg0 ;


@end


#endif