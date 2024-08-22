// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKACCESSPOINT_H
#define GKACCESSPOINT_H

@class UIWindow, UIGestureRecognizer;
@protocol GKGameCenterControllerDelegate;

#import <Foundation/Foundation.h>

#import "GKGameCenterViewController.h"

@interface GKAccessPoint : NSObject <GKGameCenterControllerDelegate>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) CGFloat delay;
@property (nonatomic, getter=isFocused) BOOL focused; // ivar: _focused
@property (nonatomic) CGRect frameInScreenCoordinates; // ivar: _frameInScreenCoordinates
@property (nonatomic) CGRect frameInScreenCoordinates;
@property (retain, nonatomic) GKGameCenterViewController *gameCenterViewController; // ivar: _gameCenterViewController
@property (retain, nonatomic) GKGameCenterViewController *gameCenterViewController;
@property (nonatomic) NSInteger hideCount; // ivar: _hideCount
@property (nonatomic) NSInteger hideCount;
@property (nonatomic) BOOL isPresentingGameCenter; // ivar: _isPresentingGameCenter
@property (nonatomic) BOOL isPresentingGameCenter;
@property (nonatomic) NSInteger location; // ivar: _location
@property (weak, nonatomic) UIWindow *parentWindow; // ivar: _parentWindow
@property (retain, nonatomic) NSObject *privateImplementation; // ivar: _privateImplementation
@property (retain, nonatomic) NSObject *privateImplementation;
@property (nonatomic) BOOL showHighlights; // ivar: _showHighlights
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) CGFloat timeLastShown; // ivar: _timeLastShown
@property (nonatomic) CGFloat timeLastShown;
@property (retain, nonatomic) id *viewController; // ivar: _viewController
@property (retain, nonatomic) id *viewController;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL willBecomeActive; // ivar: _willBecomeActive
@property (nonatomic) BOOL willBecomeActive;
@property (retain, nonatomic) UIWindow *window; // ivar: _window
@property (retain, nonatomic) UIWindow *window;


+(id)shared;
-(void)configureIfNeeded;
-(void)dismissGameCenter;
-(void)gameCenterViewControllerDidFinish:(id)arg0 ;
-(void)hideAccessPoint;
-(void)loadModels;
-(void)recordAccessPointClick;
-(void)removeWindow;
-(void)resetUI;
-(void)showAccessPoint;
-(void)showDashboardWithState:(NSInteger)arg0 dismiss:(id)arg1 ;
-(void)showWindow;
-(void)triggerAccessPointWithHandler:(id)arg0 ;
-(void)triggerAccessPointWithState:(NSInteger)arg0 handler:(id)arg1 ;
-(void)updateUI;


@end


#endif