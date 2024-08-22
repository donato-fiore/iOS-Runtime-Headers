// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERNAVIGATIONVIEWCONTROLLER_H
#define CNPHOTOPICKERNAVIGATIONVIEWCONTROLLER_H

@class NSArray;


#import "CNPortraitOnlyNavigationController.h"
#import "CNPhotoPickerTrapView.h"

@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController

@property (nonatomic) BOOL allowRotation; // ivar: _allowRotation
@property (nonatomic) BOOL disablingRotation; // ivar: _disablingRotation
@property (nonatomic) BOOL isShowingKeyboard; // ivar: _isShowingKeyboard
@property (nonatomic) CGSize previousSize; // ivar: _previousSize
@property (retain, nonatomic) NSArray *trapOverlayConstraints; // ivar: _trapOverlayConstraints
@property (retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView; // ivar: _trapOverlayView


-(BOOL)isDisplayingTrapView;
-(BOOL)shouldDisplayTrapOverlayView;
-(id)initWithRootViewController:(id)arg0 ;
-(void)beginDisablingAutorotation;
-(void)dealloc;
-(void)endDisablingAutorotation;
-(void)endDisablingAutorotationIfNeeded;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)setupTrapOverlayView;
-(void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif