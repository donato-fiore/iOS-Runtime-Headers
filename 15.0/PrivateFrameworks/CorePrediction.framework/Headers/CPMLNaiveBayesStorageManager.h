// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMLNAIVEBAYESSTORAGEMANAGER_H
#define CPMLNAIVEBAYESSTORAGEMANAGER_H



#import "CPMLStorageManager.h"

@interface CPMLNaiveBayesStorageManager : CPMLStorageManager



-(CGFloat)getCountAndSetYCardinality:(*CGFloat)arg0 ;
-(CGFloat)getCountXGivenYAndSetXCardinality:(NSUInteger)arg0 withX:(NSUInteger)arg1 withY:(NSUInteger)arg2 withCardinalityX:(*CGFloat)arg3 ;
-(CGFloat)getCountY:(NSUInteger)arg0 ;
-(void)setCardinalityXGivenY:(NSUInteger)arg0 withY:(NSUInteger)arg1 cardinalityValue:(CGFloat)arg2 ;
-(void)setCountXGivenY:(NSUInteger)arg0 withX:(NSUInteger)arg1 withY:(NSUInteger)arg2 withValue:(CGFloat)arg3 ;
-(void)setCountY:(CGFloat)arg0 ;
-(void)setCountY:(NSUInteger)arg0 withCount:(CGFloat)arg1 ;


@end


#endif