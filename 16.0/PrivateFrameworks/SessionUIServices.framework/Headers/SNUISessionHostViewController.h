// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONHOSTVIEWCONTROLLER_H
#define SNUISESSIONHOSTVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, BSColor;
@protocol _TtP17SessionUIServices33SessionHostViewControllerDelegate_, SNUISessionSceneHosting, BSInvalidatable, BLSHBacklightSceneHostEnvironment, SNUISessionHostViewControllerDelegate;


#import "SNUISessionSceneHandle.h"
#import "_TtC17SessionUIServices25SessionHostViewController.h"
#import "SNUISessionSceneDescriptor.h"

@interface SNUISessionHostViewController : UIViewController <_TtP17SessionUIServices33SessionHostViewControllerDelegate_, SNUISessionSceneHosting, BSInvalidatable>



@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SNUISessionHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hostIgnoredTouchedRects;
@property (readonly, nonatomic) BSColor *platterTintColor;
@property (nonatomic) NSUInteger presentationMode;
@property (readonly, nonatomic) SNUISessionSceneHandle *sceneHandle;
@property (retain, nonatomic) _TtC17SessionUIServices25SessionHostViewController *sessionHostViewController; // ivar: _sessionHostViewController
@property (retain, nonatomic) SNUISessionSceneDescriptor *sessionSceneDescriptor; // ivar: _sessionSceneDescriptor
@property (retain, nonatomic) SNUISessionSceneHandle *sessionSceneHandle; // ivar: _sessionSceneHandle
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visibility; // ivar: _visibility


-(BOOL)_canShowWhileLocked;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)initWithSessionHostViewController:(id)arg0 ;
-(unsigned int)swiftPresentationMode:(NSUInteger)arg0 ;
-(void)_preferredContentSizeDidChangeForChildViewController:(id)arg0 ;
-(void)activateSceneWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sessionHostViewControllerHostShouldCancelTouchesWithViewController:(id)arg0 ;
-(void)sessionHostViewControllerSignificantUserInteractionBeganWithViewController:(id)arg0 ;
-(void)sessionHostViewControllerSignificantUserInteractionEndedWithViewController:(id)arg0 ;
-(void)setShouldShareTouchesWithHost:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif