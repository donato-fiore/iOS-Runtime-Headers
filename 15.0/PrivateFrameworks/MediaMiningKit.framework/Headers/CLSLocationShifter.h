// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSLOCATIONSHIFTER_H
#define CLSLOCATIONSHIFTER_H

@class GEOLocationShifter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLSLocationShifter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *locationShiftQueue; // ivar: _locationShiftQueue
@property (readonly, nonatomic) GEOLocationShifter *locationShifter; // ivar: _locationShifter


+(BOOL)isLocationShiftRequiredForCoordinate:(struct ? )arg0 ;
+(id)sharedLocationShifter;
-(id)init;
-(struct ? )shiftedCoordinateForOriginalCoordinate:(struct ? )arg0 ;


@end


#endif