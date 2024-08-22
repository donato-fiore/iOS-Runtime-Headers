// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUNREADBANNERVIEW_H
#define CKUNREADBANNERVIEW_H

@class UIView, _UIBackdropView, UIImageView, NSString, UILabel;
@protocol UIGestureRecognizerDelegate, CKUnreadBannerViewDelegate;



@interface CKUnreadBannerView : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIImageView *chevronView; // ivar: _chevronView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKUnreadBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger unreadCount; // ivar: _unreadCount


-(id)init;
-(void)bannerPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif