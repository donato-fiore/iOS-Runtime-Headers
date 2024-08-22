// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIDISPLAYLINK_H
#define CLKUIDISPLAYLINK_H

@class CADisplayLink;


#import "CLKUIRenderFrequencyLink.h"

@interface CLKUIDisplayLink : CLKUIRenderFrequencyLink {
    CADisplayLink *_displayLink;
}




-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)invalidate;
-(void)updateCoordinator;


@end


#endif