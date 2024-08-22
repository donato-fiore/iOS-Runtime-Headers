// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASKCAPACITYDATA_H
#define ASKCAPACITYDATA_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface ASKCapacityData : NSObject

@property (retain, nonatomic) NSNumber *totalDataAvailable; // ivar: _totalDataAvailable
@property (retain, nonatomic) NSNumber *totalDataCapacity; // ivar: _totalDataCapacity
@property (retain, nonatomic) NSNumber *totalDiskCapacity; // ivar: _totalDiskCapacity
@property (retain, nonatomic) NSNumber *totalSystemAvailable; // ivar: _totalSystemAvailable
@property (retain, nonatomic) NSNumber *totalSystemCapacity; // ivar: _totalSystemCapacity


-(id)init;


@end


#endif