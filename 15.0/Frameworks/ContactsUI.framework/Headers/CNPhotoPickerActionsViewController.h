// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERACTIONSVIEWCONTROLLER_H
#define CNPHOTOPICKERACTIONSVIEWCONTROLLER_H

@class UIViewController, UIStackView, CAShapeLayer, NSString, UIView;
@protocol CNPhotoPickerActionsDelegate, UIAdaptivePresentationControllerDelegate, CNPhotoPickerActionsViewControllerLayout, CNPhotoPickerActionsViewControllerDelegate;


#import "CNPhotoPickerActionsModel.h"
#import "CNPhotoPickerActionButton.h"

@interface CNPhotoPickerActionsViewController : UIViewController <CNPhotoPickerActionsDelegate, UIAdaptivePresentationControllerDelegate>



@property (retain, nonatomic) CNPhotoPickerActionsModel *actionsModel; // ivar: _actionsModel
@property (retain, nonatomic) UIStackView *buttonsView; // ivar: _buttonsView
@property (retain, nonatomic) CAShapeLayer *clippingLayer; // ivar: _clippingLayer
@property (retain, nonatomic) NSObject<CNPhotoPickerActionsViewControllerLayout> *currentLayout; // ivar: _currentLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPhotoPickerActionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNPhotoPickerActionButton *deleteButton; // ivar: _deleteButton
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNPhotoPickerActionButton *duplicateButton; // ivar: _duplicateButton
@property (retain, nonatomic) CNPhotoPickerActionButton *editButton; // ivar: _editButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *imageContainerView; // ivar: _imageContainerView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *transitionContainerView; // ivar: _transitionContainerView


+(id)log;
-(CGFloat)deleteMoveInDelay;
-(CGFloat)deleteMoveInDuration;
-(CGFloat)duplicateScaleDelay;
-(CGFloat)duplicateScaleDuration;
-(id)initWithActionsModel:(id)arg0 ;
-(void)actionsModel:(id)arg0 didAssignToContact:(id)arg1 atIndexPath:(id)arg2 ;
-(void)actionsModel:(id)arg0 didDelete:(id)arg1 atIndexPath:(id)arg2 withSourceView:(id)arg3 ;
-(void)actionsModel:(id)arg0 didDuplicate:(id)arg1 atIndexPath:(id)arg2 completionBlock:(id)arg3 ;
-(void)actionsModel:(id)arg0 didEdit:(id)arg1 atIndexPath:(id)arg2 ;
-(void)applyLayout:(id)arg0 ;
-(void)didTapDone;
-(void)layoutViewFromModel:(id)arg0 ;
-(void)performDeleteTransitionToItem:(id)arg0 ;
-(void)performDuplicateTransitionToItem:(id)arg0 fromView:(id)arg1 completionBlock:(id)arg2 ;
-(void)presentDeleteConfirmationWithSourceView:(id)arg0 withCompletion:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)updateActionsModelWithProviderItem:(id)arg0 ;
-(void)updateButtonsFromModel:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif