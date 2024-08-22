// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILECONTROLSVIEWCONTROLLER_H
#define AVMOBILECONTROLSVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol AVControlEventPublishing, AVMobileControlsViewControllerDelegate, AVKitLayoutItem, AVVolumeController;


#import "AVControlEventManager.h"
#import "AVMobileFullscreenController.h"
#import "AVPictureInPictureController.h"
#import "AVPlaybackSpeedCollection.h"
#import "AVPlayerController.h"
#import "AVRoutingConfiguration.h"

@interface AVMobileControlsViewController : UIViewController <AVControlEventPublishing>

 {
    AVControlEventManager *_eventManager;
}


@property (copy, nonatomic) NSArray *controlItems; // ivar: _controlItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVMobileControlsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<AVKitLayoutItem> *displayModeControlsLayoutItem; // ivar: _displayModeControlsLayoutItem
@property (retain, nonatomic) AVMobileFullscreenController *fullscreenController; // ivar: _fullscreenController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger includedControls; // ivar: _includedControls
@property (nonatomic) BOOL optimizeForPerformance; // ivar: _optimizeForPerformance
@property (retain, nonatomic) AVPictureInPictureController *pipController; // ivar: _pipController
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // ivar: _playbackSpeedCollection
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (retain, nonatomic) AVRoutingConfiguration *routingConfiguration; // ivar: _routingConfiguration
@property (nonatomic) NSUInteger secondaryPlaybackControlsType; // ivar: _secondaryPlaybackControlsType
@property (nonatomic) BOOL showsFullScreenControl; // ivar: _showsFullScreenControl
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *transportBarCustomMenuItems; // ivar: _transportBarCustomMenuItems
@property (readonly, nonatomic) NSObject<AVKitLayoutItem> *transportControlsLayoutItem; // ivar: _transportControlsLayoutItem
@property (nonatomic) NSUInteger visibileControls; // ivar: _visibileControls
@property (nonatomic) NSUInteger visibilityPolicy; // ivar: _visibilityPolicy
@property (retain, nonatomic) NSObject<AVVolumeController> *volumeController; // ivar: _volumeController
@property (readonly, nonatomic) NSObject<AVKitLayoutItem> *volumeControlsLayoutItem; // ivar: _volumeControlsLayoutItem


+(CGFloat)autoHideInterval;
-(id)eventManager;
-(id)init;
-(void)addAction:(SEL)arg0 withTarget:(id)arg1 forControlEvent:(id)arg2 ;
-(void)flashControlsWithDuration:(CGFloat)arg0 ;
-(void)toggleVisibility:(id)arg0 ;
-(void)updateVisibilityPolicy:(NSUInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif