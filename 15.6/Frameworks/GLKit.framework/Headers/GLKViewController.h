// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GLKVIEWCONTROLLER_H
#define GLKVIEWCONTROLLER_H

@class UIViewController, NSString, CADisplayLink, UIScreen;
@protocol NSCoding, GLKViewDelegate, GLKViewControllerDelegate;


#import "GLKDisplayLinkMessenger.h"

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<GLKViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) GLKDisplayLinkMessenger *displayLinkMessenger; // ivar: _displayLinkMessenger
@property (nonatomic) BOOL displayLinkPaused; // ivar: _displayLinkPaused
@property (nonatomic) BOOL firstResumeOccurred; // ivar: _firstResumeOccurred
@property (readonly, nonatomic) NSInteger framesDisplayed; // ivar: _framesDisplayed
@property (readonly, nonatomic) NSInteger framesPerSecond; // ivar: _framesPerSecond
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastDrawOccurred; // ivar: _lastDrawOccurred
@property (nonatomic) BOOL lastResumeOccurred; // ivar: _lastResumeOccurred
@property (nonatomic) BOOL lastUpdateOccurred; // ivar: _lastUpdateOccurred
@property (nonatomic) BOOL pauseOnWillResignActive; // ivar: _pauseOnWillResignActive
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (nonatomic) BOOL resumeOnDidBecomeActive; // ivar: _resumeOnDidBecomeActive
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (nonatomic) NSInteger screenFramesPerSecond; // ivar: _screenFramesPerSecond
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeSinceFirstResume; // ivar: _timeSinceFirstResume
@property (nonatomic) CGFloat timeSinceFirstResumeStartTime; // ivar: _timeSinceFirstResumeStartTime
@property (readonly, nonatomic) CGFloat timeSinceLastDraw; // ivar: _timeSinceLastDraw
@property (nonatomic) CGFloat timeSinceLastDrawPreviousTime; // ivar: _timeSinceLastDrawPreviousTime
@property (readonly, nonatomic) CGFloat timeSinceLastResume; // ivar: _timeSinceLastResume
@property (nonatomic) CGFloat timeSinceLastResumeStartTime; // ivar: _timeSinceLastResumeStartTime
@property (readonly, nonatomic) CGFloat timeSinceLastUpdate; // ivar: _timeSinceLastUpdate
@property (nonatomic) CGFloat timeSinceLastUpdatePreviousTime; // ivar: _timeSinceLastUpdatePreviousTime
@property (nonatomic) *unk updateIMP; // ivar: _updateIMP
@property (nonatomic) BOOL viewIsVisible; // ivar: _viewIsVisible


-(NSInteger)_calculateScreenFramesPerSecond:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_configureNotifications;
-(void)_createDisplayLinkForScreen:(id)arg0 ;
-(void)_initCommon;
-(void)_pauseByNotification;
-(void)_resumeByNotification;
-(void)_updateAndDraw;
-(void)_updateScreenIfChanged;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)glkView:(id)arg0 drawInRect:(struct CGRect )arg1 ;
-(void)loadView;
-(void)setView:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif