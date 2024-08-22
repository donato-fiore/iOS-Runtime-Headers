// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUWAVEFORMCONTROLLER_H
#define MRUWAVEFORMCONTROLLER_H

@class MPArtworkCatalog, UIImage, NSString, MPAVEndpointRoute, MRNowPlayingController;
@protocol MRNowPlayingControllerDelegate, MRUAudioAnalyzerObserver, MRUNowPlayingControllerObserver, OS_dispatch_queue, MRUWaveformControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRUAudioAnalyzer.h"
#import "MRUNowPlayingController.h"
#import "MRUWaveformData.h"

@interface MRUWaveformController : NSObject <MRNowPlayingControllerDelegate, MRUAudioAnalyzerObserver, MRUNowPlayingControllerObserver>



@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (nonatomic) CGSize artworkFittingSize; // ivar: _artworkFittingSize
@property (readonly, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *artworkQueue; // ivar: _artworkQueue
@property (retain, nonatomic) MRUAudioAnalyzer *audioAnalyzer; // ivar: _audioAnalyzer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUWaveformControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute; // ivar: _endpointRoute
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnalyzingAudio; // ivar: _isAnalyzingAudio
@property (retain, nonatomic) MRNowPlayingController *mrNowPlayingController; // ivar: _mrNowPlayingController
@property (retain, nonatomic) MRUNowPlayingController *nowPlayingController; // ivar: _nowPlayingController
@property (nonatomic) int nowPlayingPID; // ivar: _nowPlayingPID
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly, nonatomic, getter=isRemoteRoute) BOOL remoteRoute; // ivar: _remoteRoute
@property (readonly, nonatomic) NSString *remoteRouteSymbolName; // ivar: _remoteRouteSymbolName
@property (nonatomic) BOOL requestArtworkImage; // ivar: _requestArtworkImage
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible
@property (readonly, nonatomic) MRUWaveformData *waveform; // ivar: _waveform


-(BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg0 ;
-(id)init;
-(void)audioAnalyzer:(id)arg0 didUpdateWaveform:(id)arg1 ;
-(void)controller:(id)arg0 playerPathDidChange:(id)arg1 ;
-(void)dealloc;
-(void)nowPlayingController:(id)arg0 endpointController:(id)arg1 didChangeRoute:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeArtwork:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2 ;
-(void)routeDidUpdateNotification:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)updateAnalyzer;
-(void)updateArtworkImage;
-(void)updateArtworkWithCatalog:(id)arg0 ;
-(void)updateRoute:(id)arg0 ;


@end


#endif