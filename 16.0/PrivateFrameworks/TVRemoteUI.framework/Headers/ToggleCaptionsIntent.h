// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TOGGLECAPTIONSINTENT_H
#define TOGGLECAPTIONSINTENT_H

@class INIntent;


#import "TVRDevice.h"

@interface ToggleCaptionsIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (nonatomic) NSInteger toggle;




@end


#endif