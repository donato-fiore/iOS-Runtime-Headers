// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC20SCREENTIMESETTINGSUI28STINTROPRESETSVIEWCONTROLLER_H
#define _TTC20SCREENTIMESETTINGSUI28STINTROPRESETSVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC20ScreenTimeSettingsUI28STIntroPresetsViewController : OBWelcomeController {
    ? continueHandler;
    ? dsid;
    ? childAge;
    ? model;
    ? restrictionsDataSource;
    ? name;
    ? settingsPresetViewModel;
    ? restrictionsToPresetMappingViewModel;
    ? presetsVC;
}




-(id)initWithDsid:(id)arg0 childAge:(id)arg1 model:(id)arg2 restrictionsDataSource:(id)arg3 name:(id)arg4 onContinue:(id)arg5 ;
-(id)initWithDsid:(id)arg0 childAge:(id)arg1 model:(id)arg2 restrictionsToPresetMappingViewModel:(id)arg3 restrictionsDataSource:(id)arg4 name:(id)arg5 onContinue:(id)arg6 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)continue;
-(void)notNow;
-(void)viewDidLoad;


@end


#endif