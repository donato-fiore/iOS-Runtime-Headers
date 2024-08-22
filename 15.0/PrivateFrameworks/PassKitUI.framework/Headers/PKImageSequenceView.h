// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIMAGESEQUENCEVIEW_H
#define PKIMAGESEQUENCEVIEW_H

@class UIView, UIImageView, NSArray;



@interface PKImageSequenceView : UIView {
    BOOL _isAnimating;
    NSUInteger _animationContext;
    NSUInteger _activeImageIndex;
    UIImageView *_imageView;
    UIImageView *_fadeInImageView;
    NSArray *_images;
}




-(id)initWitImages:(id)arg0 ;
-(void)_finishedTransitionToImage:(id)arg0 ;
-(void)_transitionToImage:(id)arg0 immedately:(BOOL)arg1 fast:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)stopAnimation;
-(void)updateImages:(id)arg0 ;


@end


#endif