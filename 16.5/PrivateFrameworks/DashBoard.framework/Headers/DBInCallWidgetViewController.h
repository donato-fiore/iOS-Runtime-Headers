// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBINCALLWIDGETVIEWCONTROLLER_H
#define DBINCALLWIDGETVIEWCONTROLLER_H

@class UIFocusContainerGuide, UILayoutGuide, CADisplayLink, UILabel, NSArray, TUCall, NSString;
@protocol BSInvalidatable;


#import "DBWidgetViewController.h"
#import "DBInCallWidgetAppIconButton.h"
#import "DBInCallWidgetAvatarView.h"
#import "DBInCallWidgetButton.h"
#import "DBInCallWidgetMultiwayTitleButton.h"

@interface DBInCallWidgetViewController : DBWidgetViewController <BSInvalidatable>



@property (retain, nonatomic) DBInCallWidgetAppIconButton *appIconButton; // ivar: _appIconButton
@property (retain, nonatomic) DBInCallWidgetAvatarView *avatarButton; // ivar: _avatarButton
@property (retain, nonatomic) UIFocusContainerGuide *bottomFocusContainerGuide; // ivar: _bottomFocusContainerGuide
@property (retain, nonatomic) UILayoutGuide *bottomRowGuide; // ivar: _bottomRowGuide
@property (retain, nonatomic) CADisplayLink *callTimeDisplayLink; // ivar: _callTimeDisplayLink
@property (retain, nonatomic) UILabel *callTimeLabel; // ivar: _callTimeLabel
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILabel *contactNameLabel; // ivar: _contactNameLabel
@property (retain, nonatomic) TUCall *currentCall; // ivar: _currentCall
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBInCallWidgetButton *endCallButton; // ivar: _endCallButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) UILayoutGuide *labelContainerGuide; // ivar: _labelContainerGuide
@property (nonatomic) CGSize lastViewSize; // ivar: _lastViewSize
@property (retain, nonatomic) UILayoutGuide *leftButtonGuide; // ivar: _leftButtonGuide
@property (retain, nonatomic) UILayoutGuide *midBottomGuide; // ivar: _midBottomGuide
@property (retain, nonatomic) UILayoutGuide *midButtonGuide; // ivar: _midButtonGuide
@property (retain, nonatomic) UILayoutGuide *midTopRowGuide; // ivar: _midTopRowGuide
@property (retain, nonatomic) UIFocusContainerGuide *multiwayLabelFocusContainerGuide; // ivar: _multiwayLabelFocusContainerGuide
@property (retain, nonatomic) DBInCallWidgetMultiwayTitleButton *multiwayTitleButton; // ivar: _multiwayTitleButton
@property (retain, nonatomic) DBInCallWidgetButton *muteButton; // ivar: _muteButton
@property (retain, nonatomic) UILayoutGuide *rightButtonGuide; // ivar: _rightButtonGuide
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tallMultiwayOnlyConstraints; // ivar: _tallMultiwayOnlyConstraints
@property (retain, nonatomic) NSArray *tallNonMultiwayConstraints; // ivar: _tallNonMultiwayConstraints
@property (retain, nonatomic) UIFocusContainerGuide *topFocusContainerGuide; // ivar: _topFocusContainerGuide
@property (retain, nonatomic) UILayoutGuide *topRowGuide; // ivar: _topRowGuide
@property (nonatomic) NSUInteger widgetStyle; // ivar: _widgetStyle


-(BOOL)_shouldUseMultilineTitleButton;
-(BOOL)entireWidgetFocusable;
-(id)_displayNameForCall:(id)arg0 ;
-(id)linearFocusItems;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_muteStateChanged:(id)arg0 ;
-(void)_updateUIForCallState;
-(void)buttonTapped:(id)arg0 ;
-(void)dealloc;
-(void)handleCallStatusChanged;
-(void)invalidate;
-(void)setHidden:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)updateLabelsForCurrentStyle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)widgetViewTapped;


@end


#endif