// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIDEOPLAYERVIEWCONTROLLERRESPONSE_H
#define SXVIDEOPLAYERVIEWCONTROLLERRESPONSE_H


#import <Foundation/Foundation.h>

#import "SXVideoAnalyticsRouter.h"
#import "SXVideoPlayerVisibilityMonitor.h"

@interface SXVideoPlayerViewControllerResponse : NSObject

@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter; // ivar: _analyticsRouter
@property (nonatomic) BOOL expectVideoPlayerViewController; // ivar: _expectVideoPlayerViewController
@property (nonatomic) BOOL shouldAutoplay; // ivar: _shouldAutoplay
@property (retain, nonatomic) SXVideoPlayerVisibilityMonitor *visibilityMonitor; // ivar: _visibilityMonitor




@end


#endif