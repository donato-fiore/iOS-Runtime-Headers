// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONLAUNCHCONTEXT_H
#define SBICONLAUNCHCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "SBActivationSettings.h"

@interface SBIconLaunchContext : NSObject

@property (copy, nonatomic) NSSet *actions; // ivar: _actions
@property (retain, nonatomic) SBActivationSettings *activationSettings; // ivar: _activationSettings




@end


#endif