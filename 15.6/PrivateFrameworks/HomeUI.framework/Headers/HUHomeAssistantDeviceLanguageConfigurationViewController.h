// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEASSISTANTDEVICELANGUAGECONFIGURATIONVIEWCONTROLLER_H
#define HUHOMEASSISTANTDEVICELANGUAGECONFIGURATIONVIEWCONTROLLER_H

@class OBTableWelcomeController, OBLinkTrayButton, OBTrayButton, NAFuture, NSTimer, NSString, NSLayoutConstraint, NSArray, UIActivityIndicatorView;
@protocol UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;



@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) OBTrayButton *changeLanguageButton; // ivar: _changeLanguageButton
@property (retain, nonatomic) NAFuture *changeLanguageFuture; // ivar: _changeLanguageFuture
@property (retain, nonatomic) NSTimer *changeLanguageTimer; // ivar: _changeLanguageTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) NSArray *languageMismatchedHomeAssistantDevices; // ivar: _languageMismatchedHomeAssistantDevices
@property (nonatomic) NSInteger selectedLanguageIndex; // ivar: _selectedLanguageIndex
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages; // ivar: _supportedVoiceRecognitionLanguages


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_configureTitleDescriptionContentViewForCell:(id)arg0 ;
-(id)hu_preloadContent;
-(id)initWithSupportedVoiceRecognitionLanguages:(id)arg0 languageMismatchedHomeAssistantDevices:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelLanguageChange;
-(void)_changeLanguage;
-(void)_hideSpinner;
-(void)_showSpinner;
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif