// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXSTYLERECIPEARCHIVER_H
#define PIPARALLAXSTYLERECIPEARCHIVER_H


#import <Foundation/Foundation.h>


@interface PIParallaxStyleRecipeArchiver : NSObject



+(BOOL)writeRecipe:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)_deserializeFilterDefinition:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)_deserializeFilterDefinitions:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)_deserializeParameter:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)_deserializeParameters:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)_serializeDefinition:(id)arg0 ;
+(id)_serializeFilters:(id)arg0 ;
+(id)_serializeParameter:(id)arg0 ;
+(id)_serializeParameters:(id)arg0 ;
+(id)deserializeRecipe:(id)arg0 error:(*id)arg1 ;
+(id)serializeRecipe:(id)arg0 ;
+(id)unarchivedStyleRecipeWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif