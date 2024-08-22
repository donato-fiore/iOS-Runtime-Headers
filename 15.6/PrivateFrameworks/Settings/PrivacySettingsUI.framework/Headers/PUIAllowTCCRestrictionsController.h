// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIALLOWTCCRESTRICTIONSCONTROLLER_H
#define PUIALLOWTCCRESTRICTIONSCONTROLLER_H

@class PSSpecifier;


#import "PUITCCAccessController.h"

@interface PUIAllowTCCRestrictionsController : PUITCCAccessController {
    PSSpecifier *_allowedGroup;
}




-(id)specifiers;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif