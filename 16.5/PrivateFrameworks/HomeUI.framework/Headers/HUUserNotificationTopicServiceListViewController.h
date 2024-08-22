// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUSERNOTIFICATIONTOPICSERVICELISTVIEWCONTROLLER_H
#define HUUSERNOTIFICATIONTOPICSERVICELISTVIEWCONTROLLER_H

@class NSString, HMHome, HFUserNotificationServiceTopic;
@protocol HUSafetyAndSecuritySettingsModuleControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUAnnounceSettingsItemModuleController.h"
#import "HUFaceRecognitionItemModuleController.h"
#import "HUUserNotificationTopicServiceListModuleController.h"
#import "HUSafetyAndSecuritySettingsItemModuleController.h"

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController <HUSafetyAndSecuritySettingsModuleControllerDelegate>



@property (retain, nonatomic) HUAnnounceSettingsItemModuleController *announceSettingsModuleController; // ivar: _announceSettingsModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUFaceRecognitionItemModuleController *faceRecognitionModuleController; // ivar: _faceRecognitionModuleController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController; // ivar: _moduleController
@property (retain, nonatomic) HUSafetyAndSecuritySettingsItemModuleController *safetyAndSecuritySettingsItemModuleController; // ivar: _safetyAndSecuritySettingsItemModuleController
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic; // ivar: _topic


-(BOOL)_shouldShowFaceRecognition;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithHome:(id)arg0 topic:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg0 personManager:(id)arg1 animated:(BOOL)arg2 ;
-(id)showNotificationSettingsForHomeKitObject:(id)arg0 animated:(BOOL)arg1 ;
-(void)dismissToHomeSettings;
-(void)presentHH2OnboardingForHome:(id)arg0 withDevices:(id)arg1 ;


@end


#endif