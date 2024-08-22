// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMTRIMMERVIEWCONTROLLER_H
#define PMTRIMMERVIEWCONTROLLER_H

@class UIViewController, AVPlayerItem, NSString, UIMovieScrubber, NSMutableArray, AVPlayer, UIView;
@protocol UIMovieScrubberDelegate, UIMovieScrubberDataSource, PMTrimmerDelegate;

#import <Foundation/Foundation.h>

#import "PMClipProvider.h"
#import "PMTrimmerDebugView.h"
#import "PMScrubberImageSource.h"

@interface PMTrimmerViewController : UIViewController <UIMovieScrubberDelegate, UIMovieScrubberDataSource>

 {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setPlayerItemForObserving:) AVPlayerItem *_playerItemForObserving; // ivar: __playerItemForObserving
@property (retain, nonatomic) PMClipProvider *clipProvider; // ivar: _clipProvider
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PMTrimmerDebugView *debugOverlay; // ivar: _debugOverlay
@property (nonatomic) CGFloat deferredSeekTime; // ivar: _deferredSeekTime
@property (weak, nonatomic) NSObject<PMTrimmerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int inUseScrubberHandle; // ivar: _inUseScrubberHandle
@property (nonatomic) CGFloat lastSeekWallClockTime; // ivar: _lastSeekWallClockTime
@property (retain, nonatomic) UIMovieScrubber *movieScrubber; // ivar: _movieScrubber
@property (retain, nonatomic) NSMutableArray *otherRangeLayers; // ivar: _otherRangeLayers
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property BOOL playerBusySeeking; // ivar: _playerBusySeeking
@property (retain, nonatomic) NSObject *playerPeriodicTimeObserver; // ivar: _playerPeriodicTimeObserver
@property (nonatomic) int projectFrameRate; // ivar: _projectFrameRate
@property (retain, nonatomic) UIView *scrubberView; // ivar: _scrubberView
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic) BOOL showsDebugMetadataOverlay; // ivar: _showsDebugMetadataOverlay
@property (readonly) Class superclass;
@property (retain, nonatomic) PMScrubberImageSource *thumbnailSource; // ivar: _thumbnailSource
@property (retain, nonatomic) NSString *thumbnailSourceAssetID; // ivar: _thumbnailSourceAssetID
@property (retain, nonatomic) NSObject *trimBoundaryTimeObserver; // ivar: _trimBoundaryTimeObserver
@property (nonatomic) CGFloat videoAspectRatio; // ivar: _videoAspectRatio
@property (nonatomic) CGFloat videoDuration; // ivar: _videoDuration


-(CGFloat)movieScrubberDuration:(id)arg0 ;
-(CGFloat)movieScrubberThumbnailAspectRatio:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)movieScrubber:(id)arg0 evenlySpacedTimestamps:(int)arg1 startingAt:(id)arg2 endingAt:(id)arg3 ;
-(void)_commonInit;
-(void)_createView;
-(void)_deferredSeek;
-(void)_deferredSeekToTime:(CGFloat)arg0 ;
-(void)_invalidate;
-(void)_playerItemDidReachEnd:(id)arg0 ;
-(void)_seekPlayerToBeginning;
-(void)_seekToTime:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)_updateDebugOverlay;
-(void)_updateOtherRanges;
-(void)_updateScrubberThumbVisibility;
-(void)_updateScrubberTime;
-(void)_updateTrimHandles;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)movieScrubber:(id)arg0 editingEndValueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 editingStartValueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 requestThumbnailImageForTimestamp:(id)arg1 ;
-(void)movieScrubber:(id)arg0 valueDidChange:(CGFloat)arg1 ;
-(void)movieScrubber:(id)arg0 willZoomToMinimumValue:(CGFloat)arg1 maximumValue:(CGFloat)arg2 ;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg0 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg0 withHandle:(int)arg1 ;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg0 ;
-(void)movieScrubberDidEndScrubbing:(id)arg0 withHandle:(int)arg1 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateDebugMetadataOverlay;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif