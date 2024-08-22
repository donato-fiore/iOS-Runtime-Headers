// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITTOOLPICKERCONTROLLER_H
#define PUPHOTOEDITTOOLPICKERCONTROLLER_H

@class UIViewController, NSArray, UIView;


#import "PUViewControllerSpec.h"
#import "PUPhotoEditToolPickerSpec.h"

@interface PUPhotoEditToolPickerController : UIViewController

@property (nonatomic) CGFloat interToolSpacing; // ivar: _interToolSpacing
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (retain, nonatomic) PUViewControllerSpec *parentSpec; // ivar: _parentSpec
@property (nonatomic) NSInteger selectedToolTag; // ivar: _selectedToolTag
@property (retain, nonatomic) NSArray *selectionIndicatorConstraints; // ivar: _selectionIndicatorConstraints
@property (retain, nonatomic) UIView *selectionIndicatorView; // ivar: _selectionIndicatorView
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSArray *toolButtonConstraints; // ivar: _toolButtonConstraints
@property (copy, nonatomic) NSArray *toolButtons; // ivar: _toolButtons
@property (retain, nonatomic) PUPhotoEditToolPickerSpec *toolPickerSpec; // ivar: _toolPickerSpec


-(id)initWithLayoutDirection:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(void)createSelectionIndicatorView;
-(void)loadView;
-(void)updateSelectionIndicatorConstraints;
-(void)updateViewConstraints;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif