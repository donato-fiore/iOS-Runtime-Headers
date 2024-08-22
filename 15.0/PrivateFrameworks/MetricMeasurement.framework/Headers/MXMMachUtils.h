// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMMACHUTILS_H
#define MXMMACHUTILS_H


#import <Foundation/Foundation.h>


@interface MXMMachUtils : NSObject



+(CGFloat)_nanosecondsWithAbsoluteTime:(NSUInteger)arg0 ;
+(CGFloat)_nanosecondsWithContinuousTime:(NSUInteger)arg0 ;
+(NSUInteger)_absoluteTimeWithNanoseconds:(CGFloat)arg0 ;
+(id)_processNameWithBundleIdentifier:(id)arg0 ;
+(struct mach_timebase_info *)_timebase;


@end


#endif