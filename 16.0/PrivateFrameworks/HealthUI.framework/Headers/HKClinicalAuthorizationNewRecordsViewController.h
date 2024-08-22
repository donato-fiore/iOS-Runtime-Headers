// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALAUTHORIZATIONNEWRECORDSVIEWCONTROLLER_H
#define HKCLINICALAUTHORIZATIONNEWRECORDSVIEWCONTROLLER_H

@class NSString, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController, HKHealthPrivacyServicePromptControllerDelegate;


#import "HKViewController.h"
#import "HKClinicalAuthorizationSequenceContext.h"
#import "HKClinicalAuthorizationDisplayController.h"

@interface HKClinicalAuthorizationNewRecordsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>



@property (nonatomic) NSInteger authorizationMode; // ivar: _authorizationMode
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePromptControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController; // ivar: _displayController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_indexPathIsValidRow:(id)arg0 ;
-(NSInteger)_shareAuthorizationModeForIndexPath:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createFooterView;
-(id)_createHeaderView;
-(id)_indexPathForShareAuthorizationMode:(NSInteger)arg0 ;
-(id)_shareAuthorizationModeCellForIndexPath:(id)arg0 ;
-(id)_titleForShareAuthorizationModeFooter;
-(id)_visibleShareAuthorizationModeCellForMode:(NSInteger)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureNavigationItem;
-(void)_configureTableView;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_shareAuthorizationModeCellPressed:(id)arg0 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)_updateShareAuthorizationModeSectionFooter;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif