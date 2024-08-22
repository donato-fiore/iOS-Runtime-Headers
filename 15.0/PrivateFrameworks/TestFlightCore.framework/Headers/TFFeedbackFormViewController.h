// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKFORMVIEWCONTROLLER_H
#define TFFEEDBACKFORMVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UIBarButtonItem, UITableView;
@protocol TFFeedbackFormPresenterView;


#import "TFFeedbackFormPresenter.h"
#import "TFFeedbackFormViewDataSource.h"

@interface TFFeedbackFormViewController : UIViewController <TFFeedbackFormPresenterView>



@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (readonly, nonatomic) UIBarButtonItem *activityItem; // ivar: _activityItem
@property (readonly, nonatomic) TFFeedbackFormPresenter *presenter; // ivar: _presenter
@property (readonly, nonatomic) UIBarButtonItem *submitButtonItem; // ivar: _submitButtonItem
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (readonly, nonatomic) TFFeedbackFormViewDataSource *viewDataSource; // ivar: _viewDataSource


-(id)initWithPresenter:(id)arg0 ;
-(void)adjustContentOffsetForKeyboardNotification:(id)arg0 ;
-(void)loadView;
-(void)prepareForEntryType:(NSUInteger)arg0 ;
-(void)registerNotifications;
-(void)reloadEntriesAtIndexPaths:(id)arg0 ;
-(void)reloadEntryGroupsAtIndices:(id)arg0 ;
-(void)setNavigationItemTitle:(id)arg0 ;
-(void)showErrorAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showSubmitButtonForSubmissionPendingState:(BOOL)arg0 ;
-(void)submitButtonPressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unregisterNotifications;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif