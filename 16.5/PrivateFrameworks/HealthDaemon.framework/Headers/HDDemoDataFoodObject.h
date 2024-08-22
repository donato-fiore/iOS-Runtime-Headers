// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAFOODOBJECT_H
#define HDDEMODATAFOODOBJECT_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDDemoDataFoodObject : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *brandName; // ivar: _brandName
@property (nonatomic) NSInteger foodType; // ivar: _foodType
@property (copy, nonatomic) NSString *genericName; // ivar: _genericName
@property (copy, nonatomic) NSDictionary *nutritionFacts; // ivar: _nutritionFacts
@property (nonatomic) CGFloat recommendedNumServings; // ivar: _recommendedNumServings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBrandName:(id)arg0 genericName:(id)arg1 foodType:(NSInteger)arg2 nutritionFacts:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif