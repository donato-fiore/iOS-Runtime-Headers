// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSECONDSCREENCONNECTION_H
#define AVSECONDSCREENCONNECTION_H

@class UIView, UIViewController, AVPlayer, AVPlayerLayer, AVDisplayCriteria;

#import <Foundation/Foundation.h>

#import "AVSecondScreen.h"
#import "AVSecondScreenDebugAssistant.h"
#import "AVObservationController.h"
#import "AVSecondScreenViewController.h"

@interface AVSecondScreenConnection : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) AVSecondScreen *connectedSecondScreen; // ivar: _connectedSecondScreen
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) AVSecondScreenDebugAssistant *debugAssistant; // ivar: _debugAssistant
@property (retain, nonatomic) AVPlayer *debugInfoPlayer; // ivar: _debugInfoPlayer
@property (nonatomic) CGSize maximumVideoResolution; // ivar: _maximumVideoResolution
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, weak, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria; // ivar: _preferredDisplayCriteria
@property (nonatomic, getter=isReady) BOOL ready; // ivar: _ready
@property (readonly, nonatomic, getter=isReadyToConnect) BOOL readyToConnect; // ivar: _readyToConnect
@property (nonatomic) BOOL requiresTVOutScreen; // ivar: _requiresTVOutScreen
@property (retain, nonatomic) AVSecondScreenViewController *secondScreenViewController; // ivar: _secondScreenViewController
@property (readonly, nonatomic) CGFloat videoDisplayScale;
@property (readonly, nonatomic) CGSize videoDisplaySize;


-(BOOL)_allowsNonAirPlayExternalPlayback;
-(BOOL)_currentItemIsReadyToPlayVideoOrLoadingWhileActive;
-(BOOL)_determineIsReadyToConnect;
-(id)initWithPlayer:(id)arg0 playerLayer:(id)arg1 ;
-(void)_loadSecondScreenViewControllerIfNeeded;
-(void)_postNotification:(id)arg0 oldValue:(id)arg1 newValue:(id)arg2 ;
-(void)_startObservingPlayer;
-(void)_updatePreferredDisplayCriteria;
-(void)_updatePreferredDisplayCriteriaFromPreparedAssetIfNeeded:(id)arg0 ;
-(void)_updateReadyToConnect;
-(void)connectWithScreen:(id)arg0 active:(BOOL)arg1 ;
-(void)dealloc;
-(void)startUpdates;


@end


#endif