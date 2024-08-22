// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7NEWSUI225NOTIFICATIONPROMPTMANAGER_H
#define _TTC7NEWSUI225NOTIFICATIONPROMPTMANAGER_H

@class SwiftObject;
@protocol TSNotificationManagerType;



@interface _TtC7NewsUI225NotificationPromptManager : SwiftObject <TSNotificationManagerType>

 {
    ? appConfigurationManager;
    ? notificationConfiguration;
    ? notificationService;
    ? pptContext;
    ? settings;
    ? authorizationStatus;
}




-(NSInteger)notificationPrompt;
-(NSInteger)subscribeNotificationPromptForTagID:(id)arg0 ;


@end


#endif