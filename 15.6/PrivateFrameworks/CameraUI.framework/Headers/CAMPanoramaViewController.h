// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPANORAMAVIEWCONTROLLER_H
#define CAMPANORAMAVIEWCONTROLLER_H

@class UIViewController, UITapGestureRecognizer, NSString;
@protocol CAMPanoramaViewDelegate, CAMPanoramaChangeDelegate;


#import "CUCaptureController.h"
#import "CAMAnalyticsCaptureEvent.h"
#import "CAMPanoramaView.h"

@interface CAMPanoramaViewController : UIViewController <CAMPanoramaViewDelegate, CAMPanoramaChangeDelegate>



@property (readonly, nonatomic) CUCaptureController *_captureController; // ivar: __captureController
@property (nonatomic, setter=_setCaptureOrientation:) NSInteger _captureOrientation; // ivar: __captureOrientation
@property (readonly, nonatomic) UITapGestureRecognizer *_directionChangeGestureRecognizer; // ivar: __directionChangeGestureRecognizer
@property (retain, nonatomic) CAMAnalyticsCaptureEvent *analyticsCaptureEvent; // ivar: _analyticsCaptureEvent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isPainting, setter=_setPainting:) BOOL painting; // ivar: _painting
@property (readonly, nonatomic) CAMPanoramaView *panoramaView;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)initWithCaptureController:(id)arg0 layoutStyle:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_handleDirectionChange:(id)arg0 ;
-(void)didChangeToCaptureOrientation:(NSInteger)arg0 ;
-(void)finishedProcessingPanorama;
-(void)loadView;
-(void)panoramaConfigurationDidChangeWithDirection:(NSInteger)arg0 ;
-(void)panoramaView:(id)arg0 didUpdateInstruction:(NSInteger)arg1 ;
-(void)panoramaViewDidRequestSynchronizedDirectionChange:(id)arg0 toDirection:(NSInteger)arg1 ;
-(void)startPainting;
-(void)startProcessingPanorama;
-(void)stopPainting;
-(void)updateWithStatus:(id)arg0 ;


@end


#endif