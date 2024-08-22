// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHYSICALINTERFACESAMPLE_H
#define PHYSICALINTERFACESAMPLE_H


#import <Foundation/Foundation.h>


@interface PhysicalInterfaceSample : NSObject

@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) NSUInteger rxBytes; // ivar: _rxBytes
@property (readonly, nonatomic) CGFloat rxThroughput;
@property (readonly, nonatomic) NSUInteger rxThroughputBps;
@property (nonatomic) CGFloat startTimeIntervalSinceReferenceDate; // ivar: _startTimeIntervalSinceReferenceDate
@property (nonatomic) NSUInteger txBytes; // ivar: _txBytes
@property (readonly, nonatomic) CGFloat txThroughput;
@property (readonly, nonatomic) NSUInteger txThroughputBps;


-(id)description;


@end


#endif