// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15HOMEPODSETTINGS20XPCCONNECTIONMANAGER_H
#define _TTC15HOMEPODSETTINGS20XPCCONNECTIONMANAGER_H

@class SwiftObject;
@protocol _TtP15HomePodSettings35ProfileControllerXPCServerInterface_;



@interface _TtC15HomePodSettings20XPCConnectionManager : SwiftObject <_TtP15HomePodSettings35ProfileControllerXPCServerInterface_>

 {
    ? $defaultActor;
    ? maker;
    ? retryPolicy;
    ? internalCnx;
    ? delayedRetryTask;
    ? retries;
}




-(?)installProfileWithDatacompletionHandler;
-(?)installedProfilesWithCompletionHandler;
-(?)removeProfileWithIdentifiercompletionHandler;


@end


#endif