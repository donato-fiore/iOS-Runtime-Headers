// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKWORLDCLOCKTIMEFORMATTER_H
#define CLKWORLDCLOCKTIMEFORMATTER_H


#import <Foundation/Foundation.h>


@interface CLKWorldClockTimeFormatter : NSObject



+(id)dayForOffset:(CGFloat)arg0 ;
+(id)differenceForOffset:(CGFloat)arg0 caps:(BOOL)arg1 ;
+(id)differenceForOffset:(CGFloat)arg0 caps:(BOOL)arg1 suppressZero:(BOOL)arg2 ;
+(id)differenceForOffset:(CGFloat)arg0 caps:(BOOL)arg1 suppressZero:(BOOL)arg2 size:(NSInteger)arg3 ;
+(void)initialize;
+(void)invalidateTimeZone:(id)arg0 ;


@end


#endif