// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIPEOPLEBOOTSTRAPNAMINGVIEWCONTROLLER_H
#define PXUIPEOPLEBOOTSTRAPNAMINGVIEWCONTROLLER_H

@class UIViewController, NSString, PHPerson, UIView, NSLayoutConstraint;
@protocol PXPeopleNamePickerViewControllerDelegate, PXPeopleFlowViewController, PXPeopleFlowViewControllerActionDelegate;


#import "PXPeopleBootstrapContext.h"
#import "PXPeopleNamePickerViewController.h"
#import "PXPeopleNameSelection.h"

@interface PXUIPeopleBootstrapNamingViewController : UIViewController <PXPeopleNamePickerViewControllerDelegate, PXPeopleFlowViewController>



@property (weak, nonatomic) NSObject<PXPeopleFlowViewControllerActionDelegate> *actionDelegate; // ivar: actionDelegate
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext; // ivar: _bootstrapContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPeopleNamePickerViewController *namePicker; // ivar: _namePicker
@property (readonly, nonatomic) PHPerson *person;
@property (retain, nonatomic) UIView *pickerBackgroundView; // ivar: _pickerBackgroundView
@property (retain, nonatomic) NSLayoutConstraint *pickerBackgroundViewHeightConstraint; // ivar: _pickerBackgroundViewHeightConstraint
@property (readonly, nonatomic) CGSize preferredSize;
@property (retain, nonatomic) PXPeopleNameSelection *selection; // ivar: _selection
@property (readonly, nonatomic) BOOL shouldConfirmAdvancement;
@property (readonly) Class superclass;
@property (nonatomic) BOOL textDidChange; // ivar: _textDidChange
@property (readonly, nonatomic) NSUInteger type;
@property (readonly, nonatomic) BOOL wantsCancelButton; // ivar: _wantsCancelButton


-(id)_localizedTitleString;
-(id)initWithContext:(id)arg0 ;
-(void)_captureStringSelectionIfNeeded;
-(void)_updateNavigationBarForCurrentTraitCollection;
-(void)namePickerController:(id)arg0 didPickContact:(id)arg1 ;
-(void)namePickerController:(id)arg0 didPickPerson:(id)arg1 ;
-(void)namePickerController:(id)arg0 didPickString:(id)arg1 ;
-(void)namePickerControllerWillChangeText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willTransitionToNextInFlow;


@end


#endif