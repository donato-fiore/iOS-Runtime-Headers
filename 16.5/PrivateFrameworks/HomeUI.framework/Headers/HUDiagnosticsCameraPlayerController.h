// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDIAGNOSTICSCAMERAPLAYERCONTROLLER_H
#define HUDIAGNOSTICSCAMERAPLAYERCONTROLLER_H

@class AVPlayerViewController, HMCameraProfile, NSString, HFCameraPlaybackEngine;
@protocol UIContextMenuInteractionDelegate;

#import <Foundation/Foundation.h>

#import "HUClipScrubberDataSource.h"
#import "HUDiagnosticsCameraTimelineView.h"

@interface HUDiagnosticsCameraPlayerController : NSObject <UIContextMenuInteractionDelegate>



@property (weak, nonatomic) AVPlayerViewController *cameraPlayerViewController; // ivar: _cameraPlayerViewController
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (weak, nonatomic) HUClipScrubberDataSource *clipScrubberDataSource; // ivar: _clipScrubberDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUDiagnosticsCameraTimelineView *diagnosticsView; // ivar: _diagnosticsView
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly) Class superclass;


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCameraPlayerViewController:(id)arg0 playbackEngine:(id)arg1 clipScrubberDataSource:(id)arg2 cameraProfile:(id)arg3 ;
-(void)dismissDetailsViewController;
-(void)dismissDiagnosticDetails;
-(void)displayDiagnosticDetails;
-(void)displayTimelapseDetails;
-(void)launchPlaybackEngineDiagnosticsView;
-(void)updateWithPlaybackEngine:(id)arg0 ;


@end


#endif