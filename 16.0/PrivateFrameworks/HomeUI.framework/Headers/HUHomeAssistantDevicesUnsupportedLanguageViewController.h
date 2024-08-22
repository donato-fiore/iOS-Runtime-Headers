// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEASSISTANTDEVICESUNSUPPORTEDLANGUAGEVIEWCONTROLLER_H
#define HUHOMEASSISTANTDEVICESUNSUPPORTEDLANGUAGEVIEWCONTROLLER_H

@class OBTableWelcomeController, OBTrayButton, NSString, NSLayoutConstraint, NSArray;
@protocol UITableViewDelegate, UITableViewDataSource, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;



@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch; // ivar: _homeAssistantDevicesHavingLanguageMismatch
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(Class)onboardingFlowClass;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)hu_preloadContent;
-(id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg0 home:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_continue;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif