// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSIGNATURESVIEWCONTROLLER_IOS_H
#define AKSIGNATURESVIEWCONTROLLER_IOS_H

@class UIViewController, NSString, NSArray, UINavigationBar, UIResponder, UIColor, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate, AKSignaturesViewControllerDelegate;


#import "AKController.h"

@interface AKSignaturesViewController_iOS : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate>



@property (nonatomic) BOOL allowsEdits; // ivar: _allowsEdits
@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKSignaturesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *editingLeftBarItems; // ivar: _editingLeftBarItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat idealHeight;
@property (retain, nonatomic) NSArray *leftBarItems; // ivar: _leftBarItems
@property (retain, nonatomic) UINavigationBar *navBar; // ivar: _navBar
@property (nonatomic) BOOL presentedInAlert; // ivar: _presentedInAlert
@property (weak, nonatomic) UIResponder *responderToRestore; // ivar: _responderToRestore
@property (retain, nonatomic) NSArray *rightBarItems; // ivar: _rightBarItems
@property (nonatomic) BOOL showAddEditButtonRow; // ivar: _showAddEditButtonRow
@property (nonatomic) BOOL showsNavigationBar; // ivar: _showsNavigationBar
@property (nonatomic) NSInteger signatureImageContentMode; // ivar: _signatureImageContentMode
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tableBackgroundColor; // ivar: _tableBackgroundColor
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_signatures;
-(id)initWithController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_cancelPicker:(id)arg0 ;
-(void)_configureUI;
-(void)_continueToCreateSignature:(id)arg0 ;
-(void)_deleteSignature:(id)arg0 ;
-(void)_updateSignatureCellLayout;
-(void)signatureCreationControllerDidCreateSignature:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif