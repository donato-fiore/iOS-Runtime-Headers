// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUDEVELOPERSETTINGSLOCATIONLISTCONTROLLER_H
#define AUDEVELOPERSETTINGSLOCATIONLISTCONTROLLER_H

@class PSListController, PSSpecifier, PSTextFieldSpecifier;



@interface AUDeveloperSettingsLocationListController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_livabilitySpecifier;
    PSSpecifier *_internalSeedSpecifier;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_basejumperSpecifier;
    PSSpecifier *_basejumperRadioGroup;
    PSSpecifier *_latestBasejumperSpecifier;
    PSSpecifier *_customBasejumperSpecifier;
    PSSpecifier *_customBasejumperBuildGroup;
    PSTextFieldSpecifier *_customTrainSpecifier;
    PSTextFieldSpecifier *_customBuildSpecifier;
    BOOL _showingCustomBasejumperBuildSpecifiers;
    BOOL _showingBasejumperSpecifiers;
}




-(id)buildName;
-(id)specifiers;
-(id)trainName;
-(void)setBuildName:(id)arg0 ;
-(void)setTrainName:(id)arg0 ;
-(void)showBasejumperSpecifiers:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showCustomBasejumperBuildSpecifiers:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif