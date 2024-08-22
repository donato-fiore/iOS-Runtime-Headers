// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSIGNATURECREATIONVIEWCONTROLLER_IOS_H
#define AKSIGNATURECREATIONVIEWCONTROLLER_IOS_H

@class UIViewController, NSUndoManager, UIButton, NSString, UILabel, UINavigationBar, UIResponder;
@protocol UINavigationBarDelegate, AKSignatureCreationControllerDelegate;


#import "AKSignatureBaselineView.h"
#import "AKController.h"
#import "AKSmoothPathView.h"
#import "AKInkSignatureView.h"

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate>



@property (retain, nonatomic) NSUndoManager *_undoManager; // ivar: __undoManager
@property (retain, nonatomic) AKSignatureBaselineView *baselineView; // ivar: _baselineView
@property (retain, nonatomic) UIButton *clearButton; // ivar: _clearButton
@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (retain, nonatomic) NSString *customDescription; // ivar: _customDescription
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<AKSignatureCreationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSInteger descriptionTag; // ivar: _descriptionTag
@property (retain, nonatomic) UIButton *downArrowButton; // ivar: _downArrowButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UINavigationBar *navBar; // ivar: _navBar
@property (retain, nonatomic) AKSmoothPathView *pathView; // ivar: _pathView
@property (weak, nonatomic) UIResponder *responderToRestore; // ivar: _responderToRestore
@property (retain, nonatomic) AKInkSignatureView *signatureView; // ivar: _signatureView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)undoManager;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_clear:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_notifyDidDismiss;
-(void)_removeSignatureDescription;
-(void)_showSignatureDescriptionSelectionAlert;
-(void)_updateSignatureDescriptionWithStringValue:(id)arg0 ;
-(void)_validateButtons;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)motionEnded:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)showEditCustomDescriptionAlert;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif