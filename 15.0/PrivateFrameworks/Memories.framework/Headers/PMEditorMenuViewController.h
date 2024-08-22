// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMEDITORMENUVIEWCONTROLLER_H
#define PMEDITORMENUVIEWCONTROLLER_H

@class NSString, NSIndexPath, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, PMEditorMenuViewControllerDelegate;


#import "PMEditorBasePlayerViewController.h"
#import "VEKProduction.h"
#import "PMTitleEditorProvider.h"

@interface PMEditorMenuViewController : PMEditorBasePlayerViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PMEditorMenuViewControllerDelegate> *menuDelegate; // ivar: _menuDelegate
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (nonatomic) BOOL showingActivityIndicatorForContentEditor; // ivar: _showingActivityIndicatorForContentEditor
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider; // ivar: _titleProvider


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_getTimeStringFromSeconds:(CGFloat)arg0 ;
-(id)_normalizedIndexPathForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_updateFonts;
-(void)dealloc;
-(void)popFromNavigationController;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif