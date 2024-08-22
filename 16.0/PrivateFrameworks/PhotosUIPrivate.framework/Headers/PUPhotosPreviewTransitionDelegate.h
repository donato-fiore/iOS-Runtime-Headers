// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSPREVIEWTRANSITIONDELEGATE_H
#define PUPHOTOSPREVIEWTRANSITIONDELEGATE_H

@class UIPreviewTransitionDelegate;
@protocol PUPhotosPreviewPresentationControllerDelegate;



@interface PUPhotosPreviewTransitionDelegate : UIPreviewTransitionDelegate

@property (weak, nonatomic) NSObject<PUPhotosPreviewPresentationControllerDelegate> *photosPreviewingDelegate; // ivar: _photosPreviewingDelegate


-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;


@end


#endif