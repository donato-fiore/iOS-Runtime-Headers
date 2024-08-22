// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTAPPCLIPSETTINGSCONTROLLER_H
#define ASSISTANTAPPCLIPSETTINGSCONTROLLER_H

@class PSListController, NSMutableSet;



@interface AssistantAppClipSettingsController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledSpotlightApps;
}




+(id)bundle;
-(id)learnFromAppClipsEnabled:(id)arg0 ;
-(id)showInSearchEnabled:(id)arg0 ;
-(id)specifiers;
-(id)suggestAppClipsEnabled:(id)arg0 ;
-(void)setLearnFromAppClipsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setShowInSearchEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSuggestAppClipsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif