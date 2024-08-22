// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPINSTALLVIEW_H
#define VUIAPPINSTALLVIEW_H

@class UIView, UIImageView, UIImage, NSString;
@protocol VUISBIconProgressViewDelegate;


#import "VUISBIconProgressView.h"

@interface VUIAppInstallView : UIView <VUISBIconProgressViewDelegate>

 {
    UIImageView *_appIconImageView;
    UIView *_backgroundKnockoutView;
    id *_completion;
    VUISBIconProgressView *_progressView;
}


@property (retain, nonatomic) UIImage *appIcon; // ivar: _appIcon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat installProgress; // ivar: _installProgress
@property (readonly) Class superclass;


+(id)_progressMaskImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)dealloc;
-(void)finishInstallationWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)progressViewCanBeRemoved:(id)arg0 ;
-(void)setWaiting;


@end


#endif