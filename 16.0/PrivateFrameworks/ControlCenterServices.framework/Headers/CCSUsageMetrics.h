// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCSUSAGEMETRICS_H
#define CCSUSAGEMETRICS_H


#import <Foundation/Foundation.h>


@interface CCSUsageMetrics : NSObject

@property (readonly, nonatomic) NSUInteger userInvocationCount;


+(id)sharedInstance;
-(void)incrementUserInvocationCount;


@end


#endif