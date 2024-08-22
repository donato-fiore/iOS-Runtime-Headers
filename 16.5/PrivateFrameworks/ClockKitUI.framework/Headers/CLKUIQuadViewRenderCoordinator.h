// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIQUADVIEWRENDERCOORDINATOR_H
#define CLKUIQUADVIEWRENDERCOORDINATOR_H

@class NSString;
@protocol CLKUIRenderCoordinator;

#import <Foundation/Foundation.h>

#import "CLKUIQuadView.h"
#import "CLKUIRenderFrequencyLink.h"

@interface CLKUIQuadViewRenderCoordinator : NSObject <CLKUIRenderCoordinator>

 {
    CLKUIQuadView *_quadView;
    CLKUIRenderFrequencyLink *_renderFrequencyLink;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSUInteger preferredFramesPerSecond;
@property (readonly) Class superclass;


-(CGFloat)timestamp;
-(id)initWithQuadView:(id)arg0 synchronizeWithClockTimer:(BOOL)arg1 ;
-(void)_renderLinkFired:(id)arg0 ;
-(void)invalidate;


@end


#endif