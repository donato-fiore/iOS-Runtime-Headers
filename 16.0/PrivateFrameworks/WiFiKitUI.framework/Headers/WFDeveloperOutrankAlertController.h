// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDEVELOPEROUTRANKALERTCONTROLLER_H
#define WFDEVELOPEROUTRANKALERTCONTROLLER_H

@class NSString;


#import "WFPromptAlertController.h"

@interface WFDeveloperOutrankAlertController : WFPromptAlertController

@property (copy, nonatomic) NSString *okButtonTitle; // ivar: _okButtonTitle
@property (copy, nonatomic) NSString *settingButtonTitle; // ivar: _settingButtonTitle


+(id)developerOutrankAlertControllerWithNetworkName:(id)arg0 chinaDevice:(BOOL)arg1 completionHandler:(id)arg2 ;
+(id)messageForChinaDevice:(BOOL)arg0 ;
+(id)settingsButtonTitle;
+(id)titleForNetworkName:(id)arg0 chinaDevice:(BOOL)arg1 ;


@end


#endif