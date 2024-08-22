// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUWAVEFORMVIEWCONTROLLER_H
#define MRUWAVEFORMVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol MRUWaveformControllerDelegate;


#import "MRUWaveformController.h"
#import "MRUWaveformSettings.h"
#import "MRUWaveformView.h"
#import "MRUWaveformData.h"

@interface MRUWaveformViewController : UIViewController <MRUWaveformControllerDelegate>



@property (nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) MRUWaveformController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayArtworkChange; // ivar: _delayArtworkChange
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) MRUWaveformSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUWaveformView *view;
@property (retain, nonatomic) MRUWaveformData *waveformData; // ivar: _waveformData


-(BOOL)_canShowWhileLocked;
-(id)initWithContext:(NSUInteger)arg0 waveformController:(id)arg1 ;
-(struct CAFrameRateRange )framerateRangeForData:(id)arg0 ;
-(void)loadView;
-(void)updateState;
-(void)updateVisibility;
-(void)updateWaveformWithData:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)waveformController:(id)arg0 artworkImageDidChange:(id)arg1 ;
-(void)waveformController:(id)arg0 remoteRouteSymbolNameDidChange:(id)arg1 ;
-(void)waveformController:(id)arg0 waveformDidChange:(id)arg1 ;
-(void)waveformControllerTrackDidChange:(id)arg0 ;


@end


#endif