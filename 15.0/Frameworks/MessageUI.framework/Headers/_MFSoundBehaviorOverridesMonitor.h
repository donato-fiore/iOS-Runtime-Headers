// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFSOUNDBEHAVIOROVERRIDESMONITOR_H
#define _MFSOUNDBEHAVIOROVERRIDESMONITOR_H

@class DNDEventBehaviorResolutionService, EFFuture;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MFSoundBehaviorOverridesMonitor : NSObject {
    DNDEventBehaviorResolutionService *_dndBehaviorResolutionService;
    NSObject<OS_dispatch_queue> *_dndBehaviorResolutionServiceQueue;
}


@property (readonly) EFFuture *behaviorOverrideTypes; // ivar: _behaviorOverrideTypes


+(id)sharedInstance;
-(id)_resolveDNDBehavior;
-(id)init;


@end


#endif