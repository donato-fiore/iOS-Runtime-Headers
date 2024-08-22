// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREABLECREDENTIALSEXPRESSPASSSELECTIONVIEWCONTROLLER_H
#define PKSHAREABLECREDENTIALSEXPRESSPASSSELECTIONVIEWCONTROLLER_H

@class NSArray, PKGroupsController, NSIndexPath, PKSecureElementPass;
@protocol PKPaymentSetupViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"

@interface PKShareableCredentialsExpressPassSelectionViewController : PKPaymentSetupTableViewController {
    NSArray *_passes;
    PKGroupsController *_groupsController;
    BOOL _hasSetDefault;
    PKTableHeaderView *_tableHeader;
    CGFloat _cachedHeaderViewWidth;
    NSIndexPath *_previouslySelectedIndexPath;
    PKSecureElementPass *_previouslySelectedPass;
    id<PKPaymentSetupViewControllerDelegate> *_delegate;
}




-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPasses:(id)arg0 groupsController:(id)arg1 context:(NSInteger)arg2 delegate:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_done;
-(void)_enableView:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif