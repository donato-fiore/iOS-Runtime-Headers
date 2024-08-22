// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNOTIFICATIONBANNERVIEW_H
#define CLSNOTIFICATIONBANNERVIEW_H

@class UIView, UIImageView, UIStackView, UILabel;



@interface CLSNotificationBannerView : UIView

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIStackView *labelsStackView; // ivar: _labelsStackView
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) CGFloat preferredWidthPad; // ivar: _preferredWidthPad
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)_preventsAppearanceProxyCustomization;
+(id)bannerMessageAttributes;
+(id)bannerTitleAttributes;
+(id)bundle;
-(id)initWithTitle:(id)arg0 image:(id)arg1 message:(id)arg2 ;
-(id)initWithTitle:(id)arg0 imageView:(id)arg1 message:(id)arg2 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(void)applyConstraints;
-(void)callCompletionHandler;
-(void)hideBanner;
-(void)showWithCompletionHandler:(id)arg0 ;


@end


#endif