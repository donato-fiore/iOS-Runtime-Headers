// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEPERSONALIDENTITYDEVICECONFIGURATIONVIEWCONTROLLER_H
#define HUHOMEPERSONALIDENTITYDEVICECONFIGURATIONVIEWCONTROLLER_H

@class OBTableWelcomeController, OBLinkTrayButton, OBTrayButton, NSString, NSLayoutConstraint, NSArray;
@protocol UITableViewDelegate, UITableViewDataSource, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;



@interface HUHomePersonalIdentityDeviceConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) OBTrayButton *changeLanguageButton; // ivar: _changeLanguageButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) NSArray *mediaProfilesAndLanguageInfoList; // ivar: _mediaProfilesAndLanguageInfoList
@property (nonatomic) NSInteger selectedLanguageIndex; // ivar: _selectedLanguageIndex
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(Class)onboardingFlowClass;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_configureTitleDescriptionContentViewForCell:(id)arg0 ;
-(id)hu_preloadContent;
-(id)initWithMediaProfileAndLanguageInfo:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelLanguageChange;
-(void)_changeLanguage;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif