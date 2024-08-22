// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONREVIEWDECORATIONVIEW_H
#define PXCONTENTSYNDICATIONREVIEWDECORATIONVIEW_H

@class UIView, UIImageView;
@protocol PXGDecorationView;


#import "PXAssetReference.h"

@interface PXContentSyndicationReviewDecorationView : UIView <PXGDecorationView>

 {
    UIImageView *_imageView;
    NSInteger _eligibility;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (nonatomic) NSUInteger decorationOptions; // ivar: _decorationOptions
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXAssetReference *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_positionSubviews;
-(void)_setEligibility:(NSInteger)arg0 ;
-(void)_updateAssetInformation;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif