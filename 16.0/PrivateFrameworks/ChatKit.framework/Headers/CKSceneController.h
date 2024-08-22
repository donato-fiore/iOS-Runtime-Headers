// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSCENECONTROLLER_H
#define CKSCENECONTROLLER_H

@class NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface CKSceneController : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldSuppressNotificationForMessageWithRelevantContext:(id)arg0 withAlertSupressionContextForScenes:(id)arg1 ;
-(id)_suppressionContextsForChatIdentifier:(id)arg0 personCentricID:(id)arg1 ;
-(id)alertSuppressionContextsFromForegroundActiveScenes;
-(id)messagesSceneDelegate;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif