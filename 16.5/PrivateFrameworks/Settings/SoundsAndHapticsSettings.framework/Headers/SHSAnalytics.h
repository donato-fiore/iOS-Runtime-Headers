// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSANALYTICS_H
#define SHSANALYTICS_H


#import <Foundation/Foundation.h>


@interface SHSAnalytics : NSObject



+(void)trackingVibrateOnRingValueChanged:(BOOL)arg0 age:(NSUInteger)arg1 ;
+(void)trackingVibrateOnSilentValueChanged:(BOOL)arg0 age:(NSUInteger)arg1 ;


@end


#endif