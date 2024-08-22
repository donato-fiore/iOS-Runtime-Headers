// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIALLOWLOCATIONRESTRICTIONSCONTROLLER_H
#define PUIALLOWLOCATIONRESTRICTIONSCONTROLLER_H

@class PSSpecifier;


#import "PUILocationServicesListController.h"

@interface PUIAllowLocationRestrictionsController : PUILocationServicesListController {
    PSSpecifier *_allowedGroup;
}




-(id)specifiers;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif