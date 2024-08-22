// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLIENTRENDERER_H
#define _CLIENTRENDERER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "CDComplicationHostingView.h"

@interface _ClientRenderer : NSObject {
    CDComplicationHostingView *_host;
    CGFloat _renderTime;
    CGFloat _renderCost;
    NSObject<OS_dispatch_semaphore> *_sema;
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)_handleRenderStatsTime:(CGFloat)arg0 cost:(CGFloat)arg1 ;
-(void)renderWithViewData:(id)arg0 scale:(CGFloat)arg1 handler:(id)arg2 ;


@end


#endif