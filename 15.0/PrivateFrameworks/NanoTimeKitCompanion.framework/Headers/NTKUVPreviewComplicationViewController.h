// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUVPREVIEWCOMPLICATIONVIEWCONTROLLER_H
#define NTKUVPREVIEWCOMPLICATIONVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, NSArray;
@protocol PreviewDisplaying;


#import "NTKFaceViewController.h"

@interface NTKUVPreviewComplicationViewController : UIViewController <PreviewDisplaying>



@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly) CGFloat customPreviewSizeCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL displayingLivePreview; // ivar: _displayingLivePreview
@property (retain, nonatomic) NTKFaceViewController *faceVC; // ivar: _faceVC
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *previewTimeline; // ivar: _previewTimeline
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timeline;
@property (readonly) BOOL wantsCustomPreviewSize;


-(id)_faceViewControllerWithFace:(id)arg0 ;
-(id)initWithTimeline:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_updateFaceForTimeline;
-(void)_updateLiveness:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif