// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSTIMEOUTDEFAULTCLOCKSOURCE_H
#define AMSTIMEOUTDEFAULTCLOCKSOURCE_H

@protocol AMSTimeoutClockSource;

#import <Foundation/Foundation.h>


@interface AMSTimeoutDefaultClockSource : NSObject <AMSTimeoutClockSource>





-(CGFloat)currentTimestampWithOffset:(CGFloat)arg0 ;


@end


#endif