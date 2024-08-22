// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPOINTSOFINTERESTPICKERVIEWCONTROLLER_H
#define CPSPOINTSOFINTERESTPICKERVIEWCONTROLLER_H

@class UIViewPropertyAnimator, NSString, NSArray, UILabel;
@protocol UITableViewDataSource, UITableViewDelegate, CPSButtonDelegate, CPSPointsOfInterestPickerInfoDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding, CPSPointsOfInterestPickerDelegate, UIFocusEnvironment;


#import "CPSBaseEntityContentViewController.h"
#import "CPSActionButton.h"
#import "CPSPointsOfInterestPickerInfoView.h"
#import "CPSPointsOfInterestTableView.h"

@interface CPSPointsOfInterestPickerViewController : CPSBaseEntityContentViewController <UITableViewDataSource, UITableViewDelegate, CPSButtonDelegate, CPSPointsOfInterestPickerInfoDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding>



@property (retain, nonatomic) UIViewPropertyAnimator *animator; // ivar: _animator
@property (retain, nonatomic) CPSActionButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSPointsOfInterestPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPSPointsOfInterestPickerInfoView *infoView; // ivar: _infoView
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (nonatomic) NSUInteger pickerState; // ivar: _pickerState
@property (retain, nonatomic) NSObject<UIFocusEnvironment> *requestedFocusItem; // ivar: _requestedFocusItem
@property (nonatomic) CGFloat scrollHeight; // ivar: _scrollHeight
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSPointsOfInterestTableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_linearFocusItems;
-(id)initWithEntity:(id)arg0 resourceProvider:(id)arg1 ;
-(id)pointsOfInterest;
-(id)preferredFocusEnvironments;
-(id)selectedItem;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)template;
-(struct CGSize )buttonGlyphSize;
-(struct CGSize )buttonSize;
-(void)_updateFocusedItem:(id)arg0 ;
-(void)actionButtonPressed:(id)arg0 forModel:(id)arg1 ;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)completeTransition:(BOOL)arg0 ;
-(void)didSelectButton:(id)arg0 ;
-(void)didUpdateEntity:(id)arg0 ;
-(void)loadView;
-(void)modelDidDeselect:(id)arg0 ;
-(void)modelDidSelect:(id)arg0 ;
-(void)setSelectedItem:(id)arg0 ;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToPrimaryCard;
-(void)transitionToSecondaryCard;
-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif