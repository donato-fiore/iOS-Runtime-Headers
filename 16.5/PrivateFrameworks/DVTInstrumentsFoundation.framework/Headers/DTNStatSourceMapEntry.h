// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTNSTATSOURCEMAPENTRY_H
#define DTNSTATSOURCEMAPENTRY_H


#import <Foundation/Foundation.h>

#import "XRNetworkingServiceObservationTuple.h"

@interface DTNStatSourceMapEntry : NSObject

@property (retain, nonatomic) XRNetworkingServiceObservationTuple *lastStats; // ivar: _lastStats
@property (nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSInteger serialNumber; // ivar: _serialNumber




@end


#endif