// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEBUGGINGINFORMATIONOVERLAYWINDOWPICKERVIEWCONTROLLER_H
#define UIDEBUGGINGINFORMATIONOVERLAYWINDOWPICKERVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "UIViewController.h"
#import "UITableView.h"

@interface UIDebuggingInformationOverlayWindowPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSArray *windows; // ivar: _windows


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)loadData;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif