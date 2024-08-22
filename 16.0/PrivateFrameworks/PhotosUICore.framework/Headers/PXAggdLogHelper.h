// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAGGDLOGHELPER_H
#define PXAGGDLOGHELPER_H


#import <Foundation/Foundation.h>


@interface PXAggdLogHelper : NSObject



+(id)sharedInstance;
-(void)logAddValueForScalarKey:(NSInteger)arg0 forKey:(struct __CFString *)arg1 ;
-(void)logPushValueForDistributionKey:(CGFloat)arg0 forKey:(struct __CFString *)arg1 ;
-(void)logSetValueForScalarKey:(NSInteger)arg0 forKey:(struct __CFString *)arg1 ;


@end


#endif