// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBTRSSIMEASUREMENT_H
#define PRBTRSSIMEASUREMENT_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface PRBTRssiMeasurement : NSObject

@property (readonly, nonatomic) NSUInteger channel; // ivar: _channel
@property (readonly, nonatomic) int rssi; // ivar: _rssi
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithTime:(CGFloat)arg0 rssi:(int)arg1 channel:(NSUInteger)arg2 uuid:(id)arg3 ;


@end


#endif