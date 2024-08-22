// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSWITCHPARAMETERCOMPONENTCONTROLLER_H
#define WFSWITCHPARAMETERCOMPONENTCONTROLLER_H

@class UISwitch;


#import "CKComponentController.h"

@interface WFSwitchParameterComponentController : CKComponentController {
    UISwitch *_toggleSwitch;
}




-(void)didUnmount;
-(void)willUnmount;


@end


#endif