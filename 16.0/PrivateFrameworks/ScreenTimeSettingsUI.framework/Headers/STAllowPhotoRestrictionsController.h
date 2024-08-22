// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STALLOWPHOTORESTRICTIONSCONTROLLER_H
#define STALLOWPHOTORESTRICTIONSCONTROLLER_H

@class PUIPhotosPrivacyController, PSSpecifier;



@interface STAllowPhotoRestrictionsController : PUIPhotosPrivacyController {
    PSSpecifier *_allowedGroup;
}




-(id)specifiers;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif