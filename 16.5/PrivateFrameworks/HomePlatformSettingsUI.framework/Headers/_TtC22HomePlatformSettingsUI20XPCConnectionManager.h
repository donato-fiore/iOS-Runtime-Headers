// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC22HOMEPLATFORMSETTINGSUI20XPCCONNECTIONMANAGER_H
#define _TTC22HOMEPLATFORMSETTINGSUI20XPCCONNECTIONMANAGER_H

@class SwiftObject;
@protocol _TtP22HomePlatformSettingsUI31CarrySettingsXPCServerInterface_, _TtP22HomePlatformSettingsUI32BetaEnrollmentXPCServerInterface_;



@interface _TtC22HomePlatformSettingsUI20XPCConnectionManager : SwiftObject <_TtP22HomePlatformSettingsUI31CarrySettingsXPCServerInterface_, _TtP22HomePlatformSettingsUI32BetaEnrollmentXPCServerInterface_>

 {
    ? $defaultActor;
    ? maker;
    ? retryPolicy;
    ? internalCnx;
    ? delayedRetryTask;
    ? retries;
}




-(?)receiveWithBetaEnrollmentHomeIDcompletionHandler;
-(?)receiveWithCarrySettingsHomeIDcompletionHandler;


@end


#endif