// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUUSERNOTIFICATIONTOPICLISTMODULECONTROLLER_H
#define HUUSERNOTIFICATIONTOPICLISTMODULECONTROLLER_H

@class HFPinCodeManager;


#import "HUItemModuleController.h"

@interface HUUserNotificationTopicListModuleController : HUItemModuleController

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)presentNotificationSettingsForTopic:(id)arg0 animated:(BOOL)arg1 ;
-(id)showNotificationSettingsForHomeKitObject:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif