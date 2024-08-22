// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXSTYLERECIPE_H
#define PIPARALLAXSTYLERECIPE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PIParallaxStyleRecipe : NSObject

@property (readonly, copy, nonatomic) NSArray *backgroundFilters; // ivar: _backgroundFilters
@property (readonly, copy, nonatomic) NSArray *foregroundFilters; // ivar: _foregroundFilters
@property (readonly, copy, nonatomic) NSArray *matteFilters; // ivar: _matteFilters
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParallaxStyleRecipe:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithParameters:(id)arg0 foregroundFilters:(id)arg1 backgroundFilters:(id)arg2 matteFilters:(id)arg3 ;


@end


#endif