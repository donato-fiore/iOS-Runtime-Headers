// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYERITEMCONFIGURATOR_H
#define MPCPLAYERITEMCONFIGURATOR_H

@class NSString, MPAVLightweightRoutingController;
@protocol MPAVLightweightRoutingControllerDelegate, MFPlaybackStackController><MFQueueManagement, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MPCModelGenericAVItem.h"
#import "MPCPlayerAudioRoute.h"
#import "MPCPlaybackEngine.h"
#import "MPCMediaFoundationTranslator.h"

@interface MPCPlayerItemConfigurator : NSObject <MPAVLightweightRoutingControllerDelegate>



@property (readonly, weak, nonatomic) MPCModelGenericAVItem *currenItem; // ivar: _currenItem
@property (readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute; // ivar: _currentAudioRoute
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultEQPresetType; // ivar: _defaultEQPresetType
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) MPAVLightweightRoutingController *routingController; // ivar: _routingController
@property (readonly, weak, nonatomic) NSObject<MFPlaybackStackController><MFQueueManagement> *stackController; // ivar: _stackController
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator
@property (retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer; // ivar: _userDefaultsDebouncer


-(BOOL)_setupQueueItemForHLSPlayback:(id)arg0 error:(*id)arg1 ;
-(BOOL)configureQueuePlayerItem:(id)arg0 error:(*id)arg1 ;
-(id)_HLSMetadataForAsset:(id)arg0 error:(*id)arg1 ;
-(id)_audioFormatsDictionaryWithHLSMetadata:(id)arg0 ;
-(id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)arg0 error:(*id)arg1 ;
-(id)currentItem;
-(id)initWithPlaybackEngine:(id)arg0 stackController:(id)arg1 translator:(id)arg2 ;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg0 ;
-(void)_preferredResolutionDidChange:(id)arg0 ;
-(void)_setupNotifications;
-(void)_setupPlayer;
-(void)_setupRoutingController;
-(void)_updatePreferredAudioFormatIfRequiredForItem:(id)arg0 route:(id)arg1 ;
-(void)dealloc;
-(void)lightweightRoutingController:(id)arg0 didChangePickedRoutes:(id)arg1 ;
-(void)processAudioQualityChanges;
-(void)setupDefaultsDebouncer;
-(void)tearDownDefaultsDebouncer;
-(void)updateCurrentAudioRouteWithPickedRoutes:(id)arg0 ;
-(void)updatePlayerConfiguration;


@end


#endif