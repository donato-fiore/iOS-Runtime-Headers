// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGNAMEDIMAGEVIEW_H
#define PXGNAMEDIMAGEVIEW_H

@class UIImageView;
@protocol PXGReusableView;


#import "PXGNamedImageViewConfiguration.h"

@interface PXGNamedImageView : UIImageView <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGNamedImageViewConfiguration *userData; // ivar: _userData


-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif