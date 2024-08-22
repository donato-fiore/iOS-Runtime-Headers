// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIEWPOSSIBLEDEVICESINTENT_H
#define VIEWPOSSIBLEDEVICESINTENT_H

@class INIntent, NSNumber;


#import "IntentDevice.h"

@interface ViewPossibleDevicesIntent : INIntent

@property (copy, nonatomic) NSNumber *automatic;
@property (copy, nonatomic) IntentDevice *device;




@end


#endif