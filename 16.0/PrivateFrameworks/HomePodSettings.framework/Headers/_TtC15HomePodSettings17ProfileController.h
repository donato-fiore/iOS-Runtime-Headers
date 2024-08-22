// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HOMEPODSETTINGS17PROFILECONTROLLER_H
#define _TTC15HOMEPODSETTINGS17PROFILECONTROLLER_H

@class SwiftObject;
@protocol _TtP15HomePodSettings35ProfileControllerXPCClientInterface_;



@interface _TtC15HomePodSettings17ProfileController : SwiftObject <_TtP15HomePodSettings35ProfileControllerXPCClientInterface_>

 {
    ? $defaultActor;
    ? observedTargets;
    ? profilesUpdatedHandler;
    ? target;
    ? xpc;
}




-(void)profilesChangedForLocalDeviceWithProfiles:(id)arg0 ;


@end


#endif