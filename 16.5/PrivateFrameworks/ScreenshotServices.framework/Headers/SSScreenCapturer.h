// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSCREENCAPTURER_H
#define SSSCREENCAPTURER_H

@class RCPEventStreamRecorder, RCPScreenRecorder, FBSDisplayLayoutMonitor, UIWindow;
@protocol SSUIServiceServerDelegate, SSTestingCoordinatorDelegate, SSScreenshotsWindowDelegate, SSScreenCapturerDelegate;

#import <Foundation/Foundation.h>

#import "SSSnapshotter.h"
#import "SSDittoRemoteConnection.h"
#import "SSApplicationScreenshotSupplementalDataCapturer.h"
#import "SSUIServiceServer.h"
#import "SSTestingCoordinator.h"
#import "SSScreenshotsWindow.h"

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate, SSScreenshotsWindowDelegate>

 {
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSApplicationScreenshotSupplementalDataCapturer *_metadataCapturer;
    SSUIServiceServer *_uiServiceServer;
    SSTestingCoordinator *_testingCoordinator;
    SSScreenshotsWindow *_serviceWindow;
    RCPEventStreamRecorder *_recap;
    RCPScreenRecorder *_recapSnapshotter;
    FBSDisplayLayoutMonitor *_layoutMonitor;
}


@property (weak, nonatomic) NSObject<SSScreenCapturerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIWindow *screenshotsWindow;


+(BOOL)_filesAppExistsOnSystem;
+(BOOL)shouldUseScreenCapturerForScreenshots;
+(void)playScreenshotSound;
-(BOOL)_betaFeedbackEnabled:(id)arg0 ;
-(BOOL)_screenshotWasTakenOverBetaApp;
-(id)_applicationProxyForCurrentApp;
-(id)_betaApplicationName;
-(id)_bundleIDForCurrentApplication;
-(id)_currentDisplayLayout;
-(id)_environmentDescriptionFromImage:(id)arg0 ;
-(id)_testingCoordinator;
-(id)init;
-(void)_captureAndSendDocumentForEnvironmentElement:(id)arg0 ;
-(void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg0 metadataCaptureCompletion:(id)arg1 ;
// -(void)_captureAndSendMetadataForEnvironmentElement:(id)arg0 metadataCapture:(id)arg1 sendCompletion:(unk)arg2  ;
-(void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg0 presentationOptions:(id)arg1 appleInternalOptions:(id)arg2 ;
-(void)_saveImageToPhotoLibrary:(id)arg0 environmentDescription:(id)arg1 ;
-(void)_sendEnvironmentDescription:(id)arg0 savingImageToPhotos:(id)arg1 withCompletion:(id)arg2 ;
-(void)_sendEnvironmentDescription:(id)arg0 withCompletion:(id)arg1 ;
-(void)_takeScreenshotWithOptionsCollection:(id)arg0 serviceOptions:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3 ;
-(void)dealloc;
-(void)preheatWithPresentationOptions:(id)arg0 ;
-(void)screenshotWindowWasDismissed;
-(void)screenshotWindowWillBeDisplayed;
-(void)server:(id)arg0 handleRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)startRecap;
-(void)takeScreenshot;
-(void)takeScreenshotWithOptionsCollection:(id)arg0 presentationOptions:(id)arg1 ;
-(void)takeScreenshotWithPresentationOptions:(id)arg0 ;
-(void)testingCoordinator:(id)arg0 requestsTakingScreenshotForRunPPTRequest:(id)arg1 ;


@end


#endif