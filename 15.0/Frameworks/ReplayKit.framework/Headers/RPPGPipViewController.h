// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPPGPIPVIEWCONTROLLER_H
#define RPPGPIPVIEWCONTROLLER_H

@class UIViewController, CALayer, AVConferencePreview, PGPictureInPictureProxy, NSString;
@protocol AVConferencePreviewClientDelegate, PGPictureInPictureProxyDelegate;



@interface RPPGPipViewController : UIViewController <AVConferencePreviewClientDelegate, PGPictureInPictureProxyDelegate>

 {
    CALayer *_previewLayer;
    AVConferencePreview *_preview;
    PGPictureInPictureProxy *_pegasusProxy;
    BOOL _isRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cameraWithPosition:(NSInteger)arg0 ;
-(id)init;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg0 ;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg0 reason:(NSInteger)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg0 ;
-(void)didChangeLocalVideoAttributes:(id)arg0 ;
-(void)didPausePreview;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)layoutPreviewLayer;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setupPreview;
-(void)startPipSession;
-(void)stopPipSession;
-(void)updateViewGeometry;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif