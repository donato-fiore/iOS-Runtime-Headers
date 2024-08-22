// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEBUGGINGKBAUTOFILLVIEWCONTROLLER_H
#define UIDEBUGGINGKBAUTOFILLVIEWCONTROLLER_H

@class NSString;
@protocol UITableViewDataSource, UITableViewDelegate, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate, UIDebuggingInformationViewController;


#import "UIViewController.h"
#import "UITableView.h"

@interface UIDebuggingKBAutoFillViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate, UIDebuggingInformationViewController>

 {
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_formTypeFileName:(NSInteger)arg0 ;
-(id)_getTopMostViewControllerInWindow:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_archiveTopMostViewControllerForAutoFillTest;
-(void)autoFillTestGroundTruthGenerationViewController:(id)arg0 didFinishWithResult:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif