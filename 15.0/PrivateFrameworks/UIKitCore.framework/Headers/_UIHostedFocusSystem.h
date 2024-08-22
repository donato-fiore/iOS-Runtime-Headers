// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHOSTEDFOCUSSYSTEM_H
#define _UIHOSTEDFOCUSSYSTEM_H

@protocol _UIHostedFocusSystemDelegate, UIFocusEnvironment;


#import "UIFocusSystem.h"

@interface _UIHostedFocusSystem : UIFocusSystem {
    BOOL _didSetFocusSoundGenerator;
}


@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) NSObject<_UIHostedFocusSystemDelegate> *delegate;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *hostEnvironment; // ivar: _hostEnvironment


-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_isEligibleForFocusOcclusion;
-(BOOL)_postsFocusUpdateNotifications;
-(BOOL)_prefersDeferralForFocusUpdateInContext:(id)arg0 ;
-(BOOL)_requiresFocusedItemToHaveContainingView;
-(BOOL)containsChildOfHostEnvironment:(id)arg0 ;
-(id)_focusSoundGenerator;
-(id)_hostFocusSystem;
-(id)_initWithHostEnvironment:(id)arg0 ;
-(void)_setFocusSoundGenerator:(id)arg0 ;


@end


#endif