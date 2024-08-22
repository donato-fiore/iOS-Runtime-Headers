// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGHOMEBUTTONCUSTOMIZECONTROLLER_H
#define PSGHOMEBUTTONCUSTOMIZECONTROLLER_H

@class UIViewController, BFFPaneHeaderView, UITapGestureRecognizer, NSString;
@protocol PSGCircleSegmentedControlDelegate, SBSHardwareButtonEventConsuming, BSInvalidatable, PSGHomeButtonCustomizeControllerDelegate;


#import "PSGCircleSegmentedControl.h"

@interface PSGHomeButtonCustomizeController : UIViewController <PSGCircleSegmentedControlDelegate, SBSHardwareButtonEventConsuming>

 {
    BFFPaneHeaderView *_headerView;
    PSGCircleSegmentedControl *_segmentedControl;
    UITapGestureRecognizer *_menuButtonRecognizer;
    id<BSInvalidatable> *_eventConsumerToken;
    BOOL _visible;
    BOOL _forceFeelValueChanged;
    BOOL _reachabilityEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSGHomeButtonCustomizeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesDoneButton; // ivar: _usesDoneButton


-(NSUInteger)getForceFeel;
-(id)init;
-(void)_makeConstraints;
-(void)_updateDetailText;
-(void)barButtonTapped;
-(void)consumeAnyPressEventForButtonKind:(NSInteger)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)segmentedControl:(id)arg0 didSelectSegmentAtIndex:(NSUInteger)arg1 ;
-(void)setForceFeel:(NSUInteger)arg0 ;
-(void)setListeningForHomeButtonPresses:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBecomeActive;
-(void)willResignActive;


@end


#endif