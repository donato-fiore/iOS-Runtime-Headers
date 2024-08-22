// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMOODVECTOR_H
#define PGMOODVECTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGMoodVector : NSObject <NSCopying>

 {
    CGFloat _vector;
}




-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)sum;
-(CGFloat)valueForMood:(NSUInteger)arg0 ;
-(NSUInteger)moodsWithThreshold:(CGFloat)arg0 ;
-(NSUInteger)weightedRandomMoodWithSeed:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)moodArray;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)addMoodVector:(id)arg0 ;
-(void)addValue:(CGFloat)arg0 forMood:(NSUInteger)arg1 ;
-(void)addValue:(CGFloat)arg0 forMoods:(NSUInteger)arg1 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)filterWithMoods:(NSUInteger)arg0 ;
-(void)multiplyByWeight:(CGFloat)arg0 ;
-(void)multiplyByWeight:(CGFloat)arg0 forMood:(NSUInteger)arg1 ;
-(void)multiplyMoodVector:(id)arg0 ;
-(void)normalize;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setValue:(CGFloat)arg0 forMood:(NSUInteger)arg1 ;
-(void)substractMoodVector:(id)arg0 ;


@end


#endif