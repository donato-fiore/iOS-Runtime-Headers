// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREADERMODEPROVISIONINGVIEW_H
#define PKREADERMODEPROVISIONINGVIEW_H

@class UIView, UIProgressView, NSString, UIImage;


#import "PKReaderModeAnimationView.h"
#import "PKReaderModeHeaderView.h"

@interface PKReaderModeProvisioningView : UIView {
    PKReaderModeAnimationView *_animationView;
    PKReaderModeHeaderView *_headerView;
    UIProgressView *_progressView;
    BOOL _isProvisioningToWatch;
    NSString *_cardPlacement;
    UIImage *_plasticCardImage;
    UIImage *_digitalCardImage;
}




+(id)watchImage;
-(id)initWithContext:(NSInteger)arg0 product:(id)arg1 isWatch:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 context:(NSInteger)arg1 product:(id)arg2 isWatch:(BOOL)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 product:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_loadAnimation;
-(void)layoutSubviews;
-(void)setDigitalCardImage:(id)arg0 ;
-(void)setPlasticCardImage:(id)arg0 ;
-(void)setState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)setTransferringProgress:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif