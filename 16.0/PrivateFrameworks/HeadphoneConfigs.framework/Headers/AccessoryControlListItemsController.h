// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCESSORYCONTROLLISTITEMSCONTROLLER_H
#define ACCESSORYCONTROLLISTITEMSCONTROLLER_H

@class PSListItemsController;


#import "BTSDevice.h"

@interface AccessoryControlListItemsController : PSListItemsController {
    BTSDevice *_currentDevice;
    ? _listeningModeConfigs;
}




-(BOOL)showItemForDevice:(unsigned int)arg0 ;
-(id)init;
-(id)specifiers;
-(void)dealloc;
-(void)listItemSelected:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif