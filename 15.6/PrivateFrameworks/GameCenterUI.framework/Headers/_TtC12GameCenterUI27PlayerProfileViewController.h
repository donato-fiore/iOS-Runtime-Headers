// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI27PLAYERPROFILEVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI27PLAYERPROFILEVIEWCONTROLLER_H

@class TtC12GameCenterUI28BaseCollectionViewController, PSRootController, PSSpecifier;
@protocol PSController;


#import "_TtC12GameCenterUI18BootstrapPresenter.h"
#import "_TtC12GameCenterUI22PlayerProfilePresenter.h"

@interface _TtC12GameCenterUI27PlayerProfileViewController : TtC12GameCenterUI28BaseCollectionViewController <PSController>

 {
    ? statePresenter;
    ? compositionalLayout;
    ? diffableDataSource;
    ? components;
    ? clippingLayer;
    ? startTime;
    ? friendSuggestionsSectionFocusGuide;
}


@property (nonatomic, retain) PSRootController *_rootController; // ivar: _rootController
@property (nonatomic, retain) PSSpecifier *_specifier; // ivar: _specifier
@property (nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter; // ivar: bootstrapPresenter
@property (nonatomic, readonly) _TtC12GameCenterUI22PlayerProfilePresenter *dataPresenter;


+(void)showProfileFor:(id)arg0 from:(id)arg1 completion:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)parentController;
-(id)readPreferenceValue:(id)arg0 ;
-(id)rootController;
-(id)specifier;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)setParentController:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setRootController:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif