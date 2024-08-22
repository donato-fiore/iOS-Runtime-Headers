// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMROTATIONVIEWCONTROLLER_H
#define PMROTATIONVIEWCONTROLLER_H

@class UIViewController, UIView, AVPlayerViewController;


#import "PMTitleSubtitleView.h"

@interface PMRotationViewController : UIViewController

@property (nonatomic) CGFloat orientationSwitchTime; // ivar: _orientationSwitchTime
@property (copy) id *playerDidSwapBlock; // ivar: _playerDidSwapBlock
@property (retain, nonatomic) UIView *playerRotationView; // ivar: _playerRotationView
@property (nonatomic) CGSize playerSize; // ivar: _playerSize
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (nonatomic) BOOL preventRotation; // ivar: _preventRotation
@property (retain, nonatomic) id *proVideoPeriodicCaller; // ivar: _proVideoPeriodicCaller
@property (nonatomic) CGFloat screenHorizontalAspect; // ivar: _screenHorizontalAspect
@property (nonatomic) CGSize screenSize; // ivar: _screenSize
@property (retain, nonatomic) PMTitleSubtitleView *titleView; // ivar: _titleView
@property (nonatomic) BOOL zoomedToFill; // ivar: _zoomedToFill


-(CGFloat)scaleForFullscreen:(struct CGSize )arg0 ;
-(id)_snapshotPlayer;
-(id)_snapshotPlayerWithAspect:(CGFloat)arg0 ;
-(id)playerItem;
-(struct ? )currentPlayerTime;
-(void)ImAfraidOfStuckBlur;
-(void)addProVideoTimeObserver;
-(void)adjustPlayerSizeAndViewTransform:(struct CGSize )arg0 ;
-(void)createAVPlayer;
-(void)dealloc;
-(void)destroyAVPlayer;
-(void)effectRenderedTime:(struct ? )arg0 ;
-(void)externalClientMessedWithPlayerItem;
-(void)extremeRebuild;
-(void)gentleRebuild;
-(void)mediaServicesReset;
-(void)refreshCompositionIfNotPlaying;
-(void)removeProVideoTimeObserver;
-(void)signalCustomCompositorScheduler;
-(void)signalCustomCompositorScheduler:(struct ? )arg0 playerRate:(float)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif