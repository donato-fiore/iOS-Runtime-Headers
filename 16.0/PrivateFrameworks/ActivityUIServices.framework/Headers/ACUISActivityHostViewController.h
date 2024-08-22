// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYHOSTVIEWCONTROLLER_H
#define ACUISACTIVITYHOSTVIEWCONTROLLER_H

@class UIViewController, NSString, UIColor, NSArray, BSColor;
@protocol _TtP18ActivityUIServices34ActivityHostViewControllerDelegate_, ACUISActivitySceneHosting, BSInvalidatable, BLSHBacklightSceneHostEnvironment, ACUISActivityHostViewControllerDelegate;


#import "_TtC18ActivityUIServices26ActivityHostViewController.h"
#import "ACUISActivitySceneDescriptor.h"

@interface ACUISActivityHostViewController : UIViewController <_TtP18ActivityUIServices34ActivityHostViewControllerDelegate_, ACUISActivitySceneHosting, BSInvalidatable>

 {
    _TtC18ActivityUIServices26ActivityHostViewController *_activityHostViewController;
}


@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) ACUISActivitySceneDescriptor *activitySceneDescriptor; // ivar: _activitySceneDescriptor
@property (readonly, nonatomic) UIColor *backgroundTintColor;
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACUISActivityHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hostIgnoredTouchedRects;
@property (readonly, nonatomic) BSColor *platterTintColor;
@property (nonatomic) NSUInteger presentationMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *textColor;
@property (nonatomic) NSUInteger visibility; // ivar: _visibility


-(BOOL)_canShowWhileLocked;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)initWithActivityHostViewController:(id)arg0 ;
-(unsigned int)swiftPresentationMode:(NSUInteger)arg0 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)activityHostViewControllerBackgroundTintColorDidChangeWithViewController:(id)arg0 ;
-(void)activityHostViewControllerHostShouldCancelTouchesWithViewController:(id)arg0 ;
-(void)activityHostViewControllerSignificantUserInteractionBeganWithViewController:(id)arg0 ;
-(void)activityHostViewControllerSignificantUserInteractionEndedWithViewController:(id)arg0 ;
-(void)activityHostViewControllerTextColorDidChangeWithViewController:(id)arg0 ;
-(void)activityHostViewControllerWithViewController:(id)arg0 requestsLaunchWithAction:(id)arg1 ;
-(void)dealloc;
-(void)ensureContent:(CGFloat)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)setShouldShareTouchesWithHost:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif