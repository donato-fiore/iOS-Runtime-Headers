// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLMEDIAPLAYERVIEWCONTROLLER_H
#define HUQUICKCONTROLMEDIAPLAYERVIEWCONTROLLER_H

@class NSString, MRPlatterViewController, NSArray, MRUNowPlayingViewController, NSLayoutConstraint;
@protocol MRUNowPlayingViewControllerDelegate, MRPlatterViewControllerDelegate;


#import "HUQuickControlViewController.h"

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRUNowPlayingViewControllerDelegate, MRPlatterViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mediaAccessoryItemType; // ivar: _mediaAccessoryItemType
@property (retain, nonatomic) MRPlatterViewController *mediaControlViewController; // ivar: _mediaControlViewController
@property (retain, nonatomic) NSArray *mediaControlViewControllerConstraints; // ivar: _mediaControlViewControllerConstraints
@property (retain, nonatomic) MRUNowPlayingViewController *mediaControlsNowPlayingViewController; // ivar: _mediaControlsNowPlayingViewController
@property (retain, nonatomic) NSString *mediaRoutingIdentifier; // ivar: _mediaRoutingIdentifier
@property (nonatomic, getter=isSiriEndPointAccessory) BOOL siriEndPointAccessory; // ivar: _siriEndPointAccessory
@property (nonatomic, getter=isSpeakerAccessory) BOOL speakerAccessory; // ivar: _speakerAccessory
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *viewHeightConstraint; // ivar: _viewHeightConstraint


+(Class)controlItemClass;
+(id)controlItemPredicate;
-(BOOL)_canShowWhileLocked;
-(BOOL)hasSingleControlView;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(id)title;
-(void)_addMediaControlView;
-(void)_updateConstraints;
-(void)_updateMediaControlAppearanceForTraitCollection:(id)arg0 ;
-(void)dealloc;
// -(void)nowPlayingViewController:(id)arg0 didChangeSizeWithAnimations:(id)arg1 completion:(unk)arg2  ;
-(void)nowPlayingViewControllerDidChangeLayout:(id)arg0 ;
-(void)platterViewController:(id)arg0 didReceiveInteractionEvent:(id)arg1 ;
-(void)platterViewController:(id)arg0 didUpdateEndpointWithReason:(id)arg1 ;
-(void)setPreferredFrameLayoutGuide:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif