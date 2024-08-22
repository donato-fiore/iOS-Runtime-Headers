// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXTYPES_H
#define ATXTYPES_H


#import <Foundation/Foundation.h>


@interface ATXTypes : NSObject



+(BOOL)isActionSpotlightConsumerSubType:(unsigned char)arg0 ;
+(NSUInteger)consumerTypeForString:(id)arg0 found:(*BOOL)arg1 ;
+(NSUInteger)consumerTypeForSubType:(unsigned char)arg0 ;
+(NSUInteger)engagementTypeForString:(id)arg0 found:(*BOOL)arg1 ;
+(id)consumerMapping;
+(id)consumerSubtypeMapping;
+(id)inverseConsumerSubtypeMapping;
+(id)safeStringForConsumerSubtype:(unsigned char)arg0 ;
+(id)stringForConsumerSubtype:(unsigned char)arg0 ;
+(id)stringForConsumerType:(NSUInteger)arg0 ;
+(id)stringForEngagementType:(NSUInteger)arg0 ;
+(id)uiTypeForActionConsumerSubType:(unsigned char)arg0 ;
+(id)validConsumerSubTypeList;
+(id)validConsumerSubTypes;
+(id)validConsumerTypeList;
+(id)validConsumerTypes;
+(unsigned char)consumerSubtypeForString:(id)arg0 found:(*BOOL)arg1 ;
+(void)iterConsumerSubTypesWithBlock:(id)arg0 ;
+(void)iterConsumerTypesWithBlock:(id)arg0 ;


@end


#endif