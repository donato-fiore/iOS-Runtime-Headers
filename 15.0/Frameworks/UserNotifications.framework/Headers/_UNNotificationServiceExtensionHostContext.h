// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UNNOTIFICATIONSERVICEEXTENSIONHOSTCONTEXT_H
#define _UNNOTIFICATIONSERVICEEXTENSIONHOSTCONTEXT_H

@class UNNotificationServiceExtensionContext, NSString;
@protocol _UNNotificationServiceExtensionHostXPCInterface;



@interface _UNNotificationServiceExtensionHostContext : UNNotificationServiceExtensionContext <_UNNotificationServiceExtensionHostXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif