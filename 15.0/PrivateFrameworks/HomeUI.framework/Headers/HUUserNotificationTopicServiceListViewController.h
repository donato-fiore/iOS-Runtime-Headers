// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUUSERNOTIFICATIONTOPICSERVICELISTVIEWCONTROLLER_H
#define HUUSERNOTIFICATIONTOPICSERVICELISTVIEWCONTROLLER_H

@class HMHome, HFUserNotificationServiceTopic;


#import "HUItemTableViewController.h"
#import "HUAnnounceSettingsItemModuleController.h"
#import "HUFaceRecognitionItemModuleController.h"
#import "HUUserNotificationTopicServiceListModuleController.h"

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController

@property (retain, nonatomic) HUAnnounceSettingsItemModuleController *announceSettingsModuleController; // ivar: _announceSettingsModuleController
@property (retain, nonatomic) HUFaceRecognitionItemModuleController *faceRecognitionModuleController; // ivar: _faceRecognitionModuleController
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController; // ivar: _moduleController
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic; // ivar: _topic


-(BOOL)_shouldShowFaceRecognition;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithHome:(id)arg0 topic:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg0 animated:(BOOL)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg0 personManager:(id)arg1 animated:(BOOL)arg2 ;
-(id)showNotificationSettingsForHomeKitObject:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif