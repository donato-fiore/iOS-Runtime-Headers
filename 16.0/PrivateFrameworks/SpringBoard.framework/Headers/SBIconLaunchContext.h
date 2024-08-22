// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLAUNCHCONTEXT_H
#define SBICONLAUNCHCONTEXT_H

@class NSSet, NSString, SBIconView;
@protocol SBHIconLaunchContext;

#import <Foundation/Foundation.h>

#import "SBActivationSettings.h"

@interface SBIconLaunchContext : NSObject <SBHIconLaunchContext>



@property (copy, nonatomic) NSSet *actions; // ivar: _actions
@property (retain, nonatomic) SBActivationSettings *activationSettings; // ivar: _activationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly) Class superclass;




@end


#endif