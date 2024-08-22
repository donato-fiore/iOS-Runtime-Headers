// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCREDENTIALREQUESTCABLECONSENTVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCABLECONSENTVIEWCONTROLLER_H

@class NSString;
@protocol UITableViewDataSource;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestCABLEConsentViewController : ASCredentialRequestPaneViewController <UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfTableRows;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initRequiringTableView:(BOOL)arg0 ;
-(void)_addHeaderSpacerViewWithCustomSpacingAfter:(CGFloat)arg0 ;
-(void)_continueButtonPressed;
-(void)_setUpContinueButton;
-(void)_setUpIconView;
-(void)_setUpTitleView;
-(void)viewDidLoad;


@end


#endif