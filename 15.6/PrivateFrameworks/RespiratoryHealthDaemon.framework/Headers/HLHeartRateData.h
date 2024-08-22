// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLHEARTRATEDATA_H
#define HLHEARTRATEDATA_H

@class NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface HLHeartRateData : NSObject

@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) NSUInteger confidenceLevel; // ivar: _confidenceLevel
@property (readonly) int context; // ivar: _context
@property (nonatomic) CGFloat heartRate; // ivar: _heartRate
@property (readonly) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid




@end


#endif