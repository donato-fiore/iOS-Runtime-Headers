// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBBATTERYLOGCONTEXT_H
#define _SBBATTERYLOGCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _SBBatteryLogContext : NSObject

@property (nonatomic) int capacity; // ivar: _capacity
@property (retain, nonatomic) NSArray *foregroundApplications; // ivar: _foregroundApplications
@property (nonatomic) BOOL hasChargedPartially; // ivar: _hasChargedPartially
@property (nonatomic) CGFloat standbyTimeInSeconds; // ivar: _standbyTimeInSeconds
@property (nonatomic) CGFloat usageTimeInSeconds; // ivar: _usageTimeInSeconds
@property (nonatomic) int voltage; // ivar: _voltage




@end


#endif