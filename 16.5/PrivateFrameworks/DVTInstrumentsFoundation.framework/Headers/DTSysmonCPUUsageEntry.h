// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSYSMONCPUUSAGEENTRY_H
#define DTSYSMONCPUUSAGEENTRY_H


#import <Foundation/Foundation.h>


@interface DTSysmonCPUUsageEntry : NSObject

@property (nonatomic) CGFloat niceLoad; // ivar: _niceLoad
@property (nonatomic) CGFloat systemLoad; // ivar: _systemLoad
@property (nonatomic) CGFloat totalLoad; // ivar: _totalLoad
@property (nonatomic) CGFloat userLoad; // ivar: _userLoad


-(id)initWithTotal:(CGFloat)arg0 user:(CGFloat)arg1 system:(CGFloat)arg2 nice:(CGFloat)arg3 ;


@end


#endif