// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDEBUGGINGINFORMATIONINSPECTORDETAILVIEWCONTROLLER_H
#define UIDEBUGGINGINFORMATIONINSPECTORDETAILVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "UIViewController.h"
#import "UIView.h"
#import "UITableView.h"

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSArray *_data;
    UIView *_inspectedView;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_flush;
-(void)_forceViewLayout;
-(void)_updateData;
-(void)inspectView:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif