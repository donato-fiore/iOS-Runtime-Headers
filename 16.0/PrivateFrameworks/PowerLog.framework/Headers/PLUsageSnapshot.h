// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSAGESNAPSHOT_H
#define PLUSAGESNAPSHOT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PLUsageSnapshot : NSObject

@property CGFloat cpuUsage; // ivar: _cpuUsage
@property (retain) NSDate *timestamp; // ivar: _timestamp


-(id)description;


@end


#endif