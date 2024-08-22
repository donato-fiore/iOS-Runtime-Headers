// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFMEDIACAPTURESTATUSBARMANAGER_H
#define SFMEDIACAPTURESTATUSBARMANAGER_H

@class SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, NSString;
@protocol SBSStatusBarStyleOverridesCoordinatorDelegate, SFMediaRecordingDocument;

#import <Foundation/Foundation.h>


@interface SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>

 {
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_hasStatusBarOverride) BOOL hasStatusBarOverride; // ivar: _hasStatusBarOverride
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, weak, nonatomic, getter=_recordingDocument) NSObject<SFMediaRecordingDocument> *recordingDocument; // ivar: _recordingDocument
@property (readonly, copy, nonatomic) NSString *simplifiedURLString;
@property (readonly, copy, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly) Class superclass;


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