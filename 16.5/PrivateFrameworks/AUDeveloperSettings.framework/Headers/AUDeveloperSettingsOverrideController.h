// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUDEVELOPERSETTINGSOVERRIDECONTROLLER_H
#define AUDEVELOPERSETTINGSOVERRIDECONTROLLER_H

@class PSListController, PSSpecifier;



@interface AUDeveloperSettingsOverrideController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_customerStagingSpecifier;
    PSSpecifier *_descriptionSpecifier;
}




-(id)specifiers;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDescriptionForSpecifier:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif