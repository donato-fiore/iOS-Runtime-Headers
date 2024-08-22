// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVEDITBEHAVIORCONTEXT_H
#define AVEDITBEHAVIORCONTEXT_H

@class UIBarButtonItem, UIView, NSString, AVAssetImageGenerator, AVEditBehaviorParameters, NSMutableArray, NSMutableDictionary, UIToolbar;
@protocol AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVEditViewDataSource, AVEditViewDelegate, AVBehaviorContext;

#import <Foundation/Foundation.h>

#import "AVEditBehavior.h"
#import "AVEditView.h"
#import "AVObservationController.h"
#import "AVPlayerController.h"
#import "AVPlayerViewController.h"
#import "AVZoomingBehavior.h"

@interface AVEditBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVEditViewDataSource, AVEditViewDelegate, AVBehaviorContext>



@property (weak, nonatomic) AVEditBehavior *behavior; // ivar: _behavior
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) NSUInteger currentRotation; // ivar: _currentRotation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (retain, nonatomic) AVEditView *editView; // ivar: _editView
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceItem; // ivar: _flexibleSpaceItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator; // ivar: _imageGenerator
@property (retain, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (readonly, copy, nonatomic) AVEditBehaviorParameters *parameters; // ivar: _parameters
@property (retain, nonatomic) UIBarButtonItem *pauseButton; // ivar: _pauseButton
@property (readonly, nonatomic) NSMutableArray *pendingImageRequests; // ivar: _pendingImageRequests
@property (retain, nonatomic) UIBarButtonItem *playButton; // ivar: _playButton
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) id *playerTimeObserver; // ivar: _playerTimeObserver
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (readonly, nonatomic) NSMutableDictionary *requestedImageTimeToCMTimeMap; // ivar: _requestedImageTimeToCMTimeMap
@property (nonatomic) CGAffineTransform rotationTransform; // ivar: _rotationTransform
@property (readonly) Class superclass;
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (retain, nonatomic) AVZoomingBehavior *zoomingBehavior; // ivar: _zoomingBehavior


-(CGFloat)editViewDuration:(id)arg0 ;
-(CGFloat)editViewThumbnailAspectRatio:(id)arg0 ;
-(id)_makeBarButtonItems;
-(id)initWithAVKitOwner:(id)arg0 ;
-(id)videoCompostitionRotatingAsset:(id)arg0 ;
-(void)_generateThumbnails;
-(void)cancel:(id)arg0 ;
-(void)contentViewWillTransitionToSize:(struct CGSize )arg0 withCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)didAddBehavior:(id)arg0 ;
-(void)didRemoveBehavior:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)editView:(id)arg0 currentTimeDidChange:(CGFloat)arg1 ;
-(void)editView:(id)arg0 requestThumbnailImageForTimestamp:(id)arg1 ;
-(void)editView:(id)arg0 trimEndTimeDidChange:(CGFloat)arg1 ;
-(void)editView:(id)arg0 trimStartTimeDidChange:(CGFloat)arg1 ;
-(void)editViewDidBeginScrubbing:(id)arg0 ;
-(void)editViewDidEndScrubbing:(id)arg0 ;
-(void)editViewDidFinishRequestingThumbnails:(id)arg0 ;
-(void)editViewWillBeginRequestingThumbnails:(id)arg0 ;
-(void)endEditing;
-(void)pause:(id)arg0 ;
-(void)play:(id)arg0 ;
-(void)rotateClockwise;
-(void)startEditing;
-(void)willAddBehavior:(id)arg0 ;
-(void)willRemoveBehavior:(id)arg0 ;


@end


#endif