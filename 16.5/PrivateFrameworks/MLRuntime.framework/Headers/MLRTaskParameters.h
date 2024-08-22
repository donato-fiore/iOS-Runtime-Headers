// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRTASKPARAMETERS_H
#define MLRTASKPARAMETERS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLRTaskParameters : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo; // ivar: _recipeUserInfo


+(BOOL)supportsSecureCoding;
-(BOOL)boolValueForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(CGFloat)doubleValueForKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(NSInteger)integerValueForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(NSUInteger)unsignedIntegerValueForKey:(id)arg0 defaultValue:(NSUInteger)arg1 ;
-(float)floatValueForKey:(id)arg0 defaultValue:(float)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDESRecipe:(id)arg0 ;
-(id)initWithParametersDict:(id)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 defaultValue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif