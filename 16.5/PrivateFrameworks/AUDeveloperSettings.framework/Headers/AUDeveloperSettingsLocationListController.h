// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUDEVELOPERSETTINGSLOCATIONLISTCONTROLLER_H
#define AUDEVELOPERSETTINGSLOCATIONLISTCONTROLLER_H

@class PSListController, PSSpecifier, PSTextFieldSpecifier, NSIndexPath;



@interface AUDeveloperSettingsLocationListController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_basejumperSpecifier;
    PSSpecifier *_customBuildSpecifier;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_customerStagingSpecifier;
    PSSpecifier *_internalSeedSpecifier;
    PSSpecifier *_livabilitySpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_customBasejumperBuildGroup;
    PSSpecifier *_customLivabilityBuildGroup;
    PSTextFieldSpecifier *_customTrainSpecifier;
    PSTextFieldSpecifier *_customBuildNumberSpecifier;
    BOOL _showingCustomBasejumperBuildSpecifiers;
    BOOL _showingCustomLivabilityBuildSpecifiers;
    NSIndexPath *_lastSelectedIndexPath;
    NSUInteger _defaultSpecifierListLength;
}




-(id)buildName;
-(id)specifiers;
-(id)trainName;
-(void)setBuildName:(id)arg0 ;
-(void)setTrainName:(id)arg0 ;
-(void)showCustomSpecifiersForSelectedSpecifier:(id)arg0 show:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif