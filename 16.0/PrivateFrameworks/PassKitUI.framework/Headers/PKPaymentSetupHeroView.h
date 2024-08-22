// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPHEROVIEW_H
#define PKPAYMENTSETUPHEROVIEW_H

@class UIView, PKPaymentHeroImageController, UIImageView, NSMutableArray, NSMutableDictionary, NSString;
@protocol PKPaymentHeroImageControllerDelegate;


#import "PKImageSequenceView.h"

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate>

 {
    NSInteger _context;
    CGSize _aspectSize;
    BOOL _imageDownloadFailed;
    UIView *_backgroundView;
    UIView *_bottomDividerView;
    UIView *_heroDeviceView;
    PKImageSequenceView *_cardCarouselView;
    PKPaymentHeroImageController *_heroImageController;
    UIImageView *_faceIDGlyphView;
    NSMutableArray *_heroImageIdentifiers;
    NSMutableDictionary *_heroImagesDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)assetBackgroundColor;
-(BOOL)_isSmallPhone;
-(CGFloat)_instructionFontSizeForContext:(NSInteger)arg0 ;
-(CGFloat)_phoneCardHeightInset;
-(CGFloat)_phoneTopPadding;
-(id)_heroImages;
-(id)initWithContext:(NSInteger)arg0 heroImageController:(id)arg1 heroImages:(id)arg2 ;
-(id)initWithContext:(NSInteger)arg0 heroImageController:(id)arg1 heroImages:(id)arg2 product:(id)arg3 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )_watchCardCarouselSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureHeroCardsFromHeroImages:(id)arg0 ;
-(void)_createSubviews;
-(void)_imageFailedToDownload:(id)arg0 ;
-(void)_promptTapToRadarWithTitle:(id)arg0 description:(id)arg1 ;
-(void)heroImageController:(id)arg0 didFinishDownloadingImageData:(id)arg1 forImage:(id)arg2 error:(id)arg3 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif