// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUICOUNTDOWNVIEW_H
#define ARUICOUNTDOWNVIEW_H



#import "ARUIRingsView.h"
#import "ARUIRingGroupController.h"

@interface ARUICountdownView : ARUIRingsView

@property (readonly, nonatomic) ARUIRingGroupController *countdownController;


+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForDisplayWithRingDiameter:(float)arg0 ;
+(id)countdownViewConfiguredForWatch;
-(id)backingTrackRingGroup;
-(id)ringGroup;


@end


#endif