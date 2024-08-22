// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDTURNDETAILVIEWCONTROLLER_H
#define GKDASHBOARDTURNDETAILVIEWCONTROLLER_H

@class UIView, UILabel, UIButton, GKTurnBasedMatch, NSLayoutConstraint;


#import "GKDetailViewController.h"

@interface GKDashboardTurnDetailViewController : GKDetailViewController

@property (nonatomic) UIView *contentVerticalCenteringView; // ivar: _contentVerticalCenteringView
@property (nonatomic) UILabel *createdLabel; // ivar: _createdLabel
@property (nonatomic) UIButton *firstButton; // ivar: _firstButton
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (nonatomic) UILabel *playingWithLabel; // ivar: _playingWithLabel
@property (nonatomic) UIButton *secondButton; // ivar: _secondButton
@property (nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint; // ivar: _secondButtonCenteringConstraint
@property (nonatomic) BOOL shouldShowPlay; // ivar: _shouldShowPlay
@property (nonatomic) BOOL shouldShowQuit; // ivar: _shouldShowQuit
@property (nonatomic) UIView *turnDetailContentView; // ivar: _turnDetailContentView


-(id)initWithTurnBasedMatch:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(void)acceptInvitation:(id)arg0 ;
-(void)chooseMatch:(id)arg0 ;
-(void)dealloc;
-(void)declineInvitation:(id)arg0 ;
-(void)disableButtons;
-(void)handleTurnBasedEvent:(id)arg0 ;
-(void)quitMatch:(id)arg0 ;
-(void)refreshPresenter;
-(void)removeMatch:(id)arg0 ;
-(void)turnOK:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif