// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIBENEFICIARYWELCOMEVIEWCONTROLLER_H
#define CDPUIBENEFICIARYWELCOMEVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, CDPUIBeneficiaryWelcomeViewControllerDelegate;



@interface CDPUIBeneficiaryWelcomeViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>

 {
    NSArray *_accessibleAppsDetails;
    NSArray *_restrictedAppsDetails;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CDPUIBeneficiaryWelcomeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_configurationForIndexPath:(id)arg0 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setupAppOptions;
-(void)_setupTableView;
-(void)_setupViews;
-(void)cancelTapped:(id)arg0 ;
-(void)learnMoreTapped:(id)arg0 ;
-(void)okTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif