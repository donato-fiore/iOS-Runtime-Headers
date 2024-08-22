// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFMEDIACAPTURESTATUSBARMANAGER_H
#define _SFMEDIACAPTURESTATUSBARMANAGER_H

@class SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, NSString;
@protocol SBSStatusBarStyleOverridesCoordinatorDelegate, _SFMediaRecordingDocument;

#import <Foundation/Foundation.h>


@interface _SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>

 {
    BOOL _hasStatusBarOverride;
    id<_SFMediaRecordingDocument> *_recordingDocument;
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) NSString *simplifiedURLString;
@property (readonly, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)statusBarCoordinator:(id)arg0 receivedTapWithContext:(id)arg1 completionBlock:(id)arg2 ;
-(NSUInteger)overrideStyleForAudioOnly:(BOOL)arg0 ;
-(void)_acquireStatusBarOverride;
-(void)_acquireStatusBarOverrideWithAudioOnly:(BOOL)arg0 ;
-(void)_cleanUpStatusBarOverride;
-(void)_didAcquireStatusBarOverrideSuccessfully:(BOOL)arg0 ;
-(void)_didInvalidateStatusBarOverride;
-(void)_releaseStatusBarOverride;
-(void)activateApp;
-(void)cancelStatusBarOverride;
-(void)recordingDocumentDidBeginMediaCapture:(id)arg0 audioOnly:(BOOL)arg1 ;
-(void)recordingDocumentDidEndMediaCapture:(id)arg0 ;
-(void)statusBarCoordinator:(id)arg0 invalidatedRegistrationWithError:(id)arg1 ;


@end


#endif