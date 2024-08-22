// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDUCELOUDSOUNDSINTENT_H
#define REDUCELOUDSOUNDSINTENT_H

@class INIntent, NSNumber;


#import "TVRDevice.h"

@interface ReduceLoudSoundsIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (copy, nonatomic) NSNumber *toggle;




@end


#endif