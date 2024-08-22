// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TOGGLESYSTEMAPPEARANCEINTENT_H
#define TOGGLESYSTEMAPPEARANCEINTENT_H

@class INIntent;


#import "TVRDevice.h"

@interface ToggleSystemAppearanceIntent : INIntent

@property (nonatomic) NSInteger appearanceToggle;
@property (copy, nonatomic) TVRDevice *device;




@end


#endif