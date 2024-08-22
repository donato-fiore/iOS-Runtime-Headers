// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBSENSOROVERRIDEFILTER_H
#define CBSENSOROVERRIDEFILTER_H



#import "CBFilter.h"

@interface CBSensorOverrideFilter : CBFilter {
    ? _chromaticity;
    CGFloat _illuminance;
}


@property int orientation; // ivar: _orientation


-(id)filterEvent:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;


@end


#endif