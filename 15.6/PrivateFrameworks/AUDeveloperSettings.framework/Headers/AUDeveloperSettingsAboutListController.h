// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUDEVELOPERSETTINGSABOUTLISTCONTROLLER_H
#define AUDEVELOPERSETTINGSABOUTLISTCONTROLLER_H

@class PSListController;



@interface AUDeveloperSettingsAboutListController : PSListController



-(id)getActiveVersion:(id)arg0 ;
-(id)getAssetLocation:(id)arg0 ;
-(id)getFusing:(id)arg0 ;
-(id)getModelNumber:(id)arg0 ;
-(id)getSerialNumber:(id)arg0 ;
-(id)isOTADisabled:(id)arg0 ;
-(id)specifiers;
-(void)setOTADisableStatus:(id)arg0 specifier:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif