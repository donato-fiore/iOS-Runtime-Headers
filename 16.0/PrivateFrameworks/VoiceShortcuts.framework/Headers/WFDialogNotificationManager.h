// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDIALOGNOTIFICATIONMANAGER_H
#define WFDIALOGNOTIFICATIONMANAGER_H

@class NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>

#import "WFUserNotificationManager.h"

@interface WFDialogNotificationManager : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager; // ivar: _userNotificationManager


+(id)categoryIdentifiers;
+(id)dialogNotificationCategory;
+(id)dialogNotificationConfirmationCategory;
-(NSUInteger)vcShortcutPresentationModeFromWFDialogPresentationMode:(NSUInteger)arg0 ;
-(id)initWithUserNotificationManager:(id)arg0 ;
-(void)postNotificationWithRequest:(id)arg0 presentationMode:(NSUInteger)arg1 runningContext:(id)arg2 ;
-(void)removeStaleNotifications;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif