// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIRENDERFREQUENCYLINK_H
#define CLKUIRENDERFREQUENCYLINK_H

@class NSString;
@protocol CLKUIRenderCoordinator;

#import <Foundation/Foundation.h>


@interface CLKUIRenderFrequencyLink : NSObject <CLKUIRenderCoordinator>

 {
    NSInteger _preferredFramesPerSecond;
    BOOL _paused;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSUInteger preferredFramesPerSecond;
@property (readonly) Class superclass;


-(id)init;
-(void)invalidate;
-(void)updateCoordinator;


@end


#endif