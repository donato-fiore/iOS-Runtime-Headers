// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLDATEFORMATTER_H
#define CPLDATEFORMATTER_H


#import <Foundation/Foundation.h>


@interface CPLDateFormatter : NSObject



+(id)stringForTimeInterval:(CGFloat)arg0 ;
+(id)stringForTimeIntervalAgo:(id)arg0 now:(id)arg1 ;
+(id)stringFromDate:(id)arg0 ;
+(id)stringFromDateAgo:(id)arg0 now:(id)arg1 ;


@end


#endif