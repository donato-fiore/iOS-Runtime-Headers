// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISPRINGANIMATIONPROTOTYPESETTINGS_H
#define _UISPRINGANIMATIONPROTOTYPESETTINGS_H

@class PTSettings;


#import "UIViewSpringAnimationBehavior.h"

@interface _UISpringAnimationPrototypeSettings : PTSettings {
    UIViewSpringAnimationBehavior *_springAnimationBehavior;
}


@property (nonatomic) CGFloat dampingRatio; // ivar: _dampingRatio
@property (nonatomic) CGFloat response; // ivar: _response


+(id)settingsControllerModule;
-(id)springAnimationBehavior;
-(void)setDefaultValues;


@end


#endif