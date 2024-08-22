// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCESSORYSUBCONTROLLER_H
#define ACCESSORYSUBCONTROLLER_H

@class PSListItemsController;


#import "BTSDevice.h"

@interface AccessorySubController : PSListItemsController {
    BTSDevice *_currentDevice;
}




-(id)init;
-(id)specifiers;
-(void)dealloc;
-(void)listItemSelected:(id)arg0 ;


@end


#endif