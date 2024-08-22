// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEMORYRELEVANCEHELPER_H
#define PHMEMORYRELEVANCEHELPER_H


#import <Foundation/Foundation.h>


@interface PHMemoryRelevanceHelper : NSObject



+(BOOL)_isDate:(id)arg0 inSameDayAndMonthAsDate:(id)arg1 ;
+(BOOL)_isMemoryCategoryTemporal:(NSUInteger)arg0 ;
+(BOOL)_isMemorySubcategoryTemporal:(NSUInteger)arg0 ;
+(BOOL)_isMemoryTemporal:(id)arg0 ;
+(BOOL)isMemory:(id)arg0 proactiveWorthyAtDate:(id)arg1 ;
+(BOOL)isMemory:(id)arg0 relevantAtDate:(id)arg1 ;
+(CGFloat)_categoryWeightForMemory:(id)arg0 ;
+(CGFloat)_notificationLevelWeightForMemory:(id)arg0 ;
+(CGFloat)_subcategoryWeightForMemory:(id)arg0 ;
+(CGFloat)relevanceScoreForMemory:(id)arg0 atDate:(id)arg1 ;


@end


#endif