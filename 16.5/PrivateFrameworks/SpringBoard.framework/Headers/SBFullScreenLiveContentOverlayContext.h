// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFULLSCREENLIVECONTENTOVERLAYCONTEXT_H
#define SBFULLSCREENLIVECONTENTOVERLAYCONTEXT_H

@protocol SBFullScreenSwitcherSceneLiveContentOverlay;

#import <Foundation/Foundation.h>


@interface SBFullScreenLiveContentOverlayContext : NSObject

@property (readonly, nonatomic) NSObject<SBFullScreenSwitcherSceneLiveContentOverlay> *overlay; // ivar: _overlay
@property (readonly, nonatomic) NSInteger overlayType; // ivar: _overlayType


-(id)initWithOverlay:(id)arg0 ;


@end


#endif