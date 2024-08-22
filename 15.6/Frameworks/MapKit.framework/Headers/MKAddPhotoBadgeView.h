// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKADDPHOTOBADGEVIEW_H
#define MKADDPHOTOBADGEVIEW_H

@class UIView, UILabel, UIImageView, UITapGestureRecognizer, UIActivityIndicatorView, UIVisualEffectView, NSString;
@protocol MKActivityObserving, MKAddPhotoBadgeViewDelegate;



@interface MKAddPhotoBadgeView : UIView <MKActivityObserving>

 {
    UILabel *_label;
    UIImageView *_imageView;
    CGSize _size;
    UITapGestureRecognizer *_gestureRecognizer;
    UIActivityIndicatorView *_spinner;
    UIVisualEffectView *_backgroundView;
}


@property (readonly, nonatomic) CGFloat compressedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKAddPhotoBadgeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat fullHeight;
@property (readonly, nonatomic) CGFloat fullWidth;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat margin;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_badgeViewTapped;
-(void)_setupGestureRecognizer;
-(void)_setupSubviews;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif