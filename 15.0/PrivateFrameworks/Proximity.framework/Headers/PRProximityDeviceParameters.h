// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRPROXIMITYDEVICEPARAMETERS_H
#define PRPROXIMITYDEVICEPARAMETERS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface PRProximityDeviceParameters : NSObject

@property (readonly) *void filter; // ivar: _filter
@property (readonly) NSNumber *rssiImmediate; // ivar: _rssiImmediate
@property (readonly) NSNumber *rssiNear; // ivar: _rssiNear
@property (readonly) NSUInteger samplesize; // ivar: _samplesize


-(id)init;
-(id)initWithFilter:(*void)arg0 sampleSize:(NSUInteger)arg1 rssiImmediate:(id)arg2 rssiNear:(id)arg3 ;


@end


#endif