// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI27PLAYERPROFILEVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI27PLAYERPROFILEVIEWCONTROLLER_H

@class TtC12GameCenterUI33BaseSplitCollectionViewController, PSRootController, PSSpecifier;
@protocol PSController;


#import "_TtC12GameCenterUI18BaseSplitPresenter.h"

@interface _TtC12GameCenterUI27PlayerProfileViewController : TtC12GameCenterUI33BaseSplitCollectionViewController <PSController>

 {
    ? profilePresenter;
    ? clippingLayer;
    ? startTime;
    ? friendSuggestionsSectionFocusGuide;
}


@property (nonatomic, retain) PSRootController *_rootController; // ivar: _rootController
@property (nonatomic, retain) PSSpecifier *_specifier; // ivar: _specifier
@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, readonly) BOOL shouldDisplayInSplitView;


+(void)showProfileFor:(id)arg0 from:(id)arg1 completion:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(id)contentScrollView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)parentController;
-(id)readPreferenceValue:(id)arg0 ;
-(id)rootController;
-(id)specifier;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)donePressed:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)mainSecondaryCollectionViewLayout;
-(void)setParentController:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setRootController:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif