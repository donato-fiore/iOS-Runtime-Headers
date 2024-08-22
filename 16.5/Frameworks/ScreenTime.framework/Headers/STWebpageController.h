// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STWEBPAGECONTROLLER_H
#define STWEBPAGECONTROLLER_H

@class UIViewController, NSURL, NSString;
@protocol STWebService;


#import "STWebRemoteViewController.h"

@interface STWebpageController : UIViewController {
    NSInteger _currentUsageState;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property BOOL URLIsBlocked; // ivar: _URLIsBlocked
@property (nonatomic) BOOL URLIsPictureInPicture; // ivar: _URLIsPictureInPicture
@property (nonatomic) BOOL URLIsPlayingVideo; // ivar: _URLIsPlayingVideo
@property (readonly) BOOL URLIsPlayingVideoPictureInPicture;
@property BOOL URLIsVisibleInForeground; // ivar: _URLIsVisibleInForeground
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSInteger currentUsageState;
@property (readonly) NSInteger defaultUsageState;
@property (retain) STWebRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) NSObject<STWebService> *serviceProxy;
@property (nonatomic) BOOL suppressUsageRecording; // ivar: _suppressUsageRecording


-(id)init;
-(void)_URLIsBlockedDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_changeUsageState:(NSInteger)arg0 errorHandler:(id)arg1 ;
-(void)_delayedSetURLIsBlocked:(id)arg0 ;
-(void)_didChangePlaybackState:(id)arg0 ;
-(void)_didStopPictureInPicture:(id)arg0 ;
-(void)_startReportingWebUsage;
-(void)_willStartPictureInPicture:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif