// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEADPHONELIGHTNINGADAPTERSCONTROLLER_H
#define SHSHEADPHONELIGHTNINGADAPTERSCONTROLLER_H

@class PSListController, ADASManager;



@interface SHSHeadphoneLightningAdaptersController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager; // ivar: _audioSettingsManager


-(id)getConnectedToHeadphonesEnabled;
-(id)init;
-(id)specifiers;
-(void)confirmForgetLightningAdaptersAction;
-(void)dealloc;
-(void)deleteAllLightningAdapterData;
-(void)loadView;
-(void)setConnectedToHeadphonesEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif