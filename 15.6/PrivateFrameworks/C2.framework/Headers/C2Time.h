// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2TIME_H
#define C2TIME_H


#import <Foundation/Foundation.h>


@interface C2Time : NSObject



+(CGFloat)converServerTimeToTimeInterval:(NSUInteger)arg0 ;
+(NSUInteger)convertTimeIntervalToServerTime:(CGFloat)arg0 ;


@end


#endif