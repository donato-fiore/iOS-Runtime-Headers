// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYCOVERSHEETVIEWCONTROLLER_H
#define SBEXTERNALDISPLAYCOVERSHEETVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, SBFZStackParticipant;
@protocol SBFZStackParticipantDelegate, SBExternalDisplayWallpaperConfigurations, SBWallpaperEffectViewFactory;


#import "SBBacklightController.h"
#import "SBFloatingDockBehaviorAssertion.h"
#import "SBWindowScene.h"

@interface SBExternalDisplayCoverSheetViewController : UIViewController <SBFZStackParticipantDelegate, SBExternalDisplayWallpaperConfigurations, SBWallpaperEffectViewFactory>



@property (readonly, nonatomic) SBBacklightController *backlightController; // ivar: _backlightController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *externalDisplayFloatingDockBehaviorAssertion; // ivar: _externalDisplayFloatingDockBehaviorAssertion
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresented; // ivar: _isPresented
@property (weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene; // ivar: _sbWindowScene
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *wallpaperContainerView; // ivar: _wallpaperContainerView
@property (retain, nonatomic) UIView *wallpaperEffectView; // ivar: _wallpaperEffectView
@property (readonly, nonatomic) NSObject<SBWallpaperEffectViewFactory> *wallpaperEffectViewFactory; // ivar: _wallpaperEffectViewFactory
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(BOOL)enableBlurEffects;
-(id)_floatingDockController;
-(id)_initWithWindowScene:(id)arg0 wallpaperEffectViewFactory:(id)arg1 ;
-(id)newWallpaperEffectView;
-(void)cleanupAfterDismissal;
-(void)dealloc;
-(void)prepareForPresentation;
-(void)viewDidLoad;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif