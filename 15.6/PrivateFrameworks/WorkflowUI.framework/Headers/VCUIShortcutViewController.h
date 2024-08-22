// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCUISHORTCUTVIEWCONTROLLER_H
#define VCUISHORTCUTVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, WFDatabase, NSString, UINavigationController, OBTrayButton, UIBarButtonItem, WFAutomationSuggestion, UITableView, WFTrigger, OBWelcomeController, WFWorkflow;
@protocol UITableViewDataSource, UITableViewDelegate, VCUIShortcutViewControllerDelegate;



@interface VCUIShortcutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (readonly, nonatomic) UIView *customViewContainer; // ivar: _customViewContainer
@property (readonly, nonatomic) NSLayoutConstraint *customViewContainerHeightConstraint; // ivar: _customViewContainerHeightConstraint
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VCUIShortcutViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) OBTrayButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // ivar: _rightBarButtonItem
@property (nonatomic) NSUInteger source; // ivar: _source
@property (retain, nonatomic) WFAutomationSuggestion *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // ivar: _tableViewHeightConstraint
@property (retain, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) OBWelcomeController *welcomeController; // ivar: _welcomeController
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)shouldShowActionCell;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)currentPreviewMode;
-(id)applicationBundleIdentifier;
-(id)headerImage;
-(id)initWithAutomationSuggestion:(id)arg0 workflow:(id)arg1 database:(id)arg2 ;
-(id)nameCell;
-(id)nameSectionTitle;
-(id)shortcutPreview;
-(id)shortcutPreviewImage;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)title;
-(int)eventSource;
-(void)dealloc;
-(void)didTapCancel;
-(void)didTapPrimaryButton;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)trackAddEvent;
-(void)updateCustomView;
-(void)updatePrimaryButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif