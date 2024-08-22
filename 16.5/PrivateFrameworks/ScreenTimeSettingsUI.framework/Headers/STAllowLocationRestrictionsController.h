// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STALLOWLOCATIONRESTRICTIONSCONTROLLER_H
#define STALLOWLOCATIONRESTRICTIONSCONTROLLER_H

@class PUILocationServicesListController, PSSpecifier;



@interface STAllowLocationRestrictionsController : PUILocationServicesListController {
    PSSpecifier *_allowedGroup;
}




-(id)specifiers;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif