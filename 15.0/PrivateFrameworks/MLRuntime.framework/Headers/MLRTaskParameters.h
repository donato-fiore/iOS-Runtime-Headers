// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLRTASKPARAMETERS_H
#define MLRTASKPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MLRTaskParameters : NSObject

@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo; // ivar: _recipeUserInfo


-(BOOL)boolValueForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(CGFloat)doubleValueForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(NSInteger)integerValueForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSUInteger)unsignedIntegerValueForKey:(id)arg0 defaultValue:(NSUInteger)arg1 ;
-(float)floatValueForKey:(id)arg0 defaultValue:(float)arg1 ;
-(id)_numberValueForKey:(id)arg0 ;
-(id)description;
-(id)initWithDESRecipe:(id)arg0 ;
-(id)initWithParametersDict:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 defaultValue:(id)arg1 ;


@end


#endif