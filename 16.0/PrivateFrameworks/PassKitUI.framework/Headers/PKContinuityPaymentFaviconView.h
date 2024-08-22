// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTINUITYPAYMENTFAVICONVIEW_H
#define PKCONTINUITYPAYMENTFAVICONVIEW_H

@class UIView, NSURLSession, UIImageView, NSString;


#import "PKShapeView.h"

@interface PKContinuityPaymentFaviconView : UIView {
    NSURLSession *_urlSession;
    UIImageView *_macImageView;
    UIImageView *_imageView;
    UIView *_monogramView;
    UIView *_imageShadowView;
    PKShapeView *_maskView;
    NSString *_modelIdentifier;
    NSString *_merchantName;
}




-(CGFloat)_iconVerticalOffset;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 URL:(id)arg1 modelIdentifier:(id)arg2 merchantName:(id)arg3 ;
-(void)_loadMacImage;
-(void)_setupMonogram;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif