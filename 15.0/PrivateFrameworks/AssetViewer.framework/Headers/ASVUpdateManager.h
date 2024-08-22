// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVUPDATEMANAGER_H
#define ASVUPDATEMANAGER_H

@class CAMetalLayer, CADisplayLink;
@protocol MTLDevice, MTLCommandQueue, ASVAROnboardingUIUpdateManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASVUpdateManager : NSObject {
    id<MTLDevice> *_device;
    CAMetalLayer *_metalLayer;
    id<MTLCommandQueue> *_commandQueue;
    CADisplayLink *_displayLink;
    CGFloat _lastUpdateTime;
}


@property (weak, nonatomic) NSObject<ASVAROnboardingUIUpdateManagerDelegate> *delegate; // ivar: _delegate


-(id)init:(id)arg0 metalLayer:(id)arg1 ;
-(void)dealloc;
-(void)drawWithTimeDelta:(CGFloat)arg0 ;
-(void)start;
-(void)stop;
-(void)update;


@end


#endif