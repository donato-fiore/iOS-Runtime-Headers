// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECTYPES_H
#define _DECTYPES_H


#import <Foundation/Foundation.h>


@interface _DECTypes : NSObject



+(NSInteger)selectSingleReason:(NSInteger)arg0 ;
+(NSUInteger)categoryForItem:(id)arg0 ;
+(NSUInteger)intersectCategories:(NSUInteger)arg0 withCategories:(NSUInteger)arg1 ;
+(NSUInteger)mmConsumerTypeOfConsumerType:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 ;
+(id)categoryMapping;
+(id)consumerMapping;
+(id)consumerSubtypeMapping;
+(id)mmConsumerMapping;
+(id)mmEventTypeMapping;
+(id)outcomeMapping;
+(id)predictionReasonMapping;
+(id)stringForAppPredictionSources:(NSInteger)arg0 ;
+(id)stringForCategory:(NSUInteger)arg0 ;
+(id)stringForConsumerSubtype:(unsigned char)arg0 ;
+(id)stringForConsumerType:(NSUInteger)arg0 ;
+(id)stringForLaunchSource:(NSInteger)arg0 ;
+(id)stringForMMConsumerType:(NSUInteger)arg0 ;
+(id)stringForMMEventType:(NSUInteger)arg0 ;
+(id)stringForOutcome:(NSUInteger)arg0 ;
+(id)stringForPredictionReason:(NSInteger)arg0 ;
+(void)invokeBlockOverCategoriesMatching:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif