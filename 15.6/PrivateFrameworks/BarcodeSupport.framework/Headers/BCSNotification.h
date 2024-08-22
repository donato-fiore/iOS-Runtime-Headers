// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSNOTIFICATION_H
#define BCSNOTIFICATION_H

@class NSString, NSMutableDictionary, UNNotificationRequest;

#import <Foundation/Foundation.h>

#import "BCSAction.h"
#import "BCSNotificationIcon.h"

@interface BCSNotification : NSObject {
    BCSAction *_action;
    NSString *_identifier;
    BCSNotificationIcon *_attachmentIcon;
    NSMutableDictionary *_localActions;
}


@property (readonly, nonatomic) BOOL canHandleActionLocally;
@property (readonly, nonatomic) NSInteger codeType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UNNotificationRequest *request;
@property (nonatomic) int requestingProcessID; // ivar: _requestingProcessID
@property (readonly, nonatomic) BOOL shouldSkipBanner;


+(id)_tlAlertConfiguration;
+(id)notificationForAction:(id)arg0 ;
+(id)tempVCardFileURL;
-(BOOL)_contentIsPreviewable;
-(BOOL)_shouldHandleActionPickerItemLocally:(id)arg0 ;
-(BOOL)_shouldManuallyRequireAuthenticationForURL:(id)arg0 ;
-(BOOL)_shouldRequireUserToPickTargetApp;
-(BOOL)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg0 ;
-(BOOL)shouldHandleBulletinActionWithIdentifier:(id)arg0 ;
-(id)_actionDescriptionString;
-(id)_actionTypeStringForNFC;
-(id)_actionTypeStringForQRCode;
-(id)_attachmentIconURL;
-(id)_content;
-(id)_contentExtensionData;
-(id)_defaultURL;
-(id)_fbOptionsHandlingUnlockIfNecessary;
-(id)_initWithAction:(id)arg0 ;
-(id)_notificationActionFromActionPickerItem:(id)arg0 ;
-(id)_orderAppLinkActionsByRecency:(id)arg0 ;
-(id)_pickerLabelForURLActionPickerItem:(id)arg0 ;
-(id)_supplementActions;
-(id)_title;
-(void)_handleCalendarEventWithICSString:(id)arg0 ;
-(void)_handleContactInfo:(id)arg0 ;
-(void)_performActionAfterUnlock:(id)arg0 ;
-(void)_showAppPickerAlertWithFBOptions:(id)arg0 ;
-(void)didHandleBulletinActionWithIdentifier:(id)arg0 ;
-(void)handleActionWithIdentifier:(id)arg0 notificationResponseOriginID:(id)arg1 ;


@end


#endif