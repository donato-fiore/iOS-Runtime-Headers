// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPICTUREINPICTUREVIEWCONTROLLER_H
#define AVPICTUREINPICTUREVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PGPictureInPictureViewController, AVPictureInPictureViewControllerDelegate;


#import "AVPictureInPictureViewController.h"
#import "AVPictureInPicturePlayerLayerView.h"
#import "AVPlayerController.h"

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController>



@property (retain, nonatomic) AVPictureInPictureViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVPictureInPictureViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView; // ivar: _pictureInPicturePlayerLayerView
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (nonatomic) BOOL shouldShowAlternateActionButtonImage; // ivar: _shouldShowAlternateActionButtonImage
@property (readonly, nonatomic) BOOL shouldShowLoadingIndicator;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPictureInPicturePlayerLayerView:(id)arg0 ;
-(void)dealloc;
-(void)didAnimatePictureInPictureStop;
-(void)loadView;
-(void)willAnimatePictureInPictureStart;


@end


#endif