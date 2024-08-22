// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLVALUEUTILTIES_H
#define PLVALUEUTILTIES_H


#import <Foundation/Foundation.h>


@interface PLValueUtilties : NSObject



+(BOOL)isFormater:(short)arg0 validForObject:(id)arg1 ;
+(BOOL)isNil:(id)arg0 ;
+(NSInteger)compare:(id)arg0 with:(id)arg1 ;
+(id)formattedStringForDate:(id)arg0 ;
+(short)formatterFromDataType:(id)arg0 ;
+(void)resetTimestampFormaterTimezone;


@end


#endif