// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGELQMKERNELROLLINGWINDOW_H
#define WIFIUSAGELQMKERNELROLLINGWINDOW_H


#import <Foundation/Foundation.h>


@interface WiFiUsageLQMKernelRollingWindow : NSObject



+(BOOL)isOngoing;
+(NSUInteger)parseKernelBlobInto:(id)arg0 ;
+(id)kernelLQMRollingWindow:(id)arg0 withReferenceWindow:(id)arg1 andLqmFeatures:(id)arg2 ;
+(void)addSample:(id)arg0 To:(id)arg1 ;
+(void)advanceReadingPointerOf:(NSUInteger)arg0 ;
+(void)initialize;


@end


#endif