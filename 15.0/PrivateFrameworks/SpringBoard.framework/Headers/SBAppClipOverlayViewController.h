// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPCLIPOVERLAYVIEWCONTROLLER_H
#define SBAPPCLIPOVERLAYVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, NSString, CPSClipOverlayViewController;
@protocol SBAppClipOverlayCoordinatorParticipant, SBAppClipOverlayViewDelegate, BSInvalidatable;


#import "SBAppClipOverlayCoordinator.h"

@interface SBAppClipOverlayViewController : SBFTouchPassThroughViewController <SBAppClipOverlayCoordinatorParticipant, SBAppClipOverlayViewDelegate, BSInvalidatable>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) SBAppClipOverlayCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayedOverPlaceholder; // ivar: _displayedOverPlaceholder
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (retain, nonatomic) CPSClipOverlayViewController *overlayViewController; // ivar: _overlayViewController
@property (nonatomic) NSInteger sceneActivationState; // ivar: _sceneActivationState
@property (readonly, copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *webClipIdentifier; // ivar: _webClipIdentifier


-(NSInteger)preferredStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinator:(id)arg0 bundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)participantName;
-(id)view;
-(void)appClipOverlayCoordinator:(id)arg0 requestsSurrenderOfViewController:(id)arg1 ;
-(void)appClipPlaceholderViewDidInvalidate:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif