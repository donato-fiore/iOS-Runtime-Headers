// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCOMPOSITEVIDEOACTIVITY_H
#define PUCOMPOSITEVIDEOACTIVITY_H

@class PXActivity, NSString, AVAssetExportSession, UIViewController, PXAlertController;
@protocol PXChangeObserver;


#import "PUCompositeVideoGenerator.h"

@interface PUCompositeVideoActivity : PXActivity <PXChangeObserver>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVAssetExportSession *exportSession; // ivar: _exportSession
@property (retain, nonatomic) PUCompositeVideoGenerator *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presenterViewController; // ivar: _presenterViewController
@property (retain, nonatomic) PXAlertController *progressController; // ivar: _progressController
@property (readonly) Class superclass;


+(BOOL)canPerformWithAssets:(id)arg0 ;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)_exportGeneratedVideo;
-(void)_finishWithSuccess:(BOOL)arg0 cancelled:(BOOL)arg1 ;
-(void)_sucessfullyFinishedSaving:(BOOL)arg0 error:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)prepareWithViewController:(id)arg0 assets:(id)arg1 ;


@end


#endif