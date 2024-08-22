// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UNNOTIFICATIONSERVICEEXTENSIONREMOTECONTEXT_H
#define _UNNOTIFICATIONSERVICEEXTENSIONREMOTECONTEXT_H

@class UNNotificationServiceExtensionContext, NSString;
@protocol _UNNotificationServiceExtensionRemoteXPCInterface;


#import "UNNotificationServiceExtension.h"

@interface _UNNotificationServiceExtensionRemoteContext : UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionRemoteXPCInterface>

 {
    atomic_flag _hasRepliedFlag;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UNNotificationServiceExtension *extensionInstance; // ivar: _extensionInstance
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)_stageAttachmentsForNotificationContent:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)didReceiveNotificationRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)serviceExtensionPerformCleanup;
-(void)serviceExtensionTimeWillExpire;


@end


#endif