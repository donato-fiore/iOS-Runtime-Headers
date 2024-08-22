// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATIONPUSHSERVICEEXTENSIONREMOTECONTEXT_H
#define CLLOCATIONPUSHSERVICEEXTENSIONREMOTECONTEXT_H

@protocol CLLocationPushServiceExtensionRemoteXPCInterface;


#import "CLLocationPushServiceExtensionContext.h"

@interface CLLocationPushServiceExtensionRemoteContext : CLLocationPushServiceExtensionContext <CLLocationPushServiceExtensionRemoteXPCInterface>





-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)didReceiveLocationPushPayload:(id)arg0 reply:(id)arg1 ;
-(void)serviceExtensionPerformCleanup;
-(void)serviceExtensionWillTerminate;


@end


#endif