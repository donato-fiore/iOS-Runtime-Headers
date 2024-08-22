// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVNETWORKPLAYBACKPERFHUDLAYER_H
#define AVNETWORKPLAYBACKPERFHUDLAYER_H

@class CATextLayer, NSNumber, NSMutableDictionary;
@protocol OS_dispatch_source;


#import "AVPlayer.h"
#import "AVPlayerLayer.h"

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {
    NSObject<OS_dispatch_source> *_hudTimer;
    BOOL _showHud;
    BOOL _spatialDiagnostics;
    int _colorId;
    CGFloat _opacity;
    int _fontSizeInt;
    BOOL _updateUISettings;
    int _hudXoffset;
    int _hudYoffset;
    NSUInteger _hudUpdateInterval;
    BOOL _showCompleteURI;
    NSInteger _prevVariantIdx;
    NSInteger _prevStallCount;
    NSInteger _totalStallCount;
    NSNumber *_displayResolutionHeight;
    NSNumber *_displayResolutionWidth;
    NSNumber *_audioSpatializationMode;
    BOOL _requestInFlight;
    NSMutableDictionary *_loadingStatusCache;
}


@property (weak) AVPlayer *player; // ivar: _player
@property (weak) AVPlayerLayer *playerLayer; // ivar: _playerLayer


-(BOOL)hudEnabled;
-(BOOL)valueLoadedForKey:(id)arg0 onObject:(id)arg1 ;
-(float)getScaleFactorForDisplaySize:(struct CGSize )arg0 ;
-(id)displayStringGenerator;
-(id)init;
-(void)_hudUpdateTrigger;
-(void)copyPropertiesFromStringGenerator:(id)arg0 ;
-(void)currentItemChanged;
-(void)currentItemTracksChanged;
-(void)dealloc;
-(void)getHudSetting;
-(void)readHudSettingsAndCallCompletionHandler:(id)arg0 ;
-(void)setColor:(int)arg0 ;
-(void)startDispatchTimer;
-(void)updateBounds:(struct CGRect )arg0 ;
-(void)updateHudWithDisplayString:(id)arg0 ;


@end


#endif