// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTANALYTICS_H
#define MTANALYTICS_H


#import <Foundation/Foundation.h>


@interface MTAnalytics : NSObject



+(void)incrementEventCount:(id)arg0 ;
+(void)sendCriticalEvent:(id)arg0 ;
+(void)submitEvent:(id)arg0 eventParameters:(id)arg1 ;


@end


#endif