// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICS_H
#define HFANALYTICS_H


#import <Foundation/Foundation.h>


@interface HFAnalytics : NSObject



+(Class)eventClassForEventType:(NSUInteger)arg0 ;
+(id)eventNameForEventType:(NSUInteger)arg0 ;
+(void)_sendEvent:(id)arg0 ;
+(void)sendEvent:(NSUInteger)arg0 ;
+(void)sendEvent:(NSUInteger)arg0 withData:(id)arg1 ;


@end


#endif