// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ISANIMATEDIMAGETIMERFORWARDINGPROXY_H
#define _ISANIMATEDIMAGETIMERFORWARDINGPROXY_H


#import <Foundation/Foundation.h>

#import "ISAnimatedImageTimer.h"

@interface _ISAnimatedImageTimerForwardingProxy : NSObject

@property (weak, nonatomic, setter=_setForwardingTarget:) ISAnimatedImageTimer *_forwardingTarget; // ivar: __forwardingTarget


-(void)_displayLinkFire:(id)arg0 ;


@end


#endif