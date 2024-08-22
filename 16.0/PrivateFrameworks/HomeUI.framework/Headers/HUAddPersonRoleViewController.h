// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUADDPERSONROLEVIEWCONTROLLER_H
#define HUADDPERSONROLEVIEWCONTROLLER_H

@class OBTableWelcomeController, NSString, HMHome, HFPinCodeManager;
@protocol UITableViewDataSource, UITableViewDelegate, HUPresentationDelegate, HUAddPeopleViewControllerDelegate;



@interface HUAddPersonRoleViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HUPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAddPeopleViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (readonly) Class superclass;


-(BOOL)_disableAddGuest;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif