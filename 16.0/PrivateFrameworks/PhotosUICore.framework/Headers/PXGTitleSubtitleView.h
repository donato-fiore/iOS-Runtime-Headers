// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGTITLESUBTITLEVIEW_H
#define PXGTITLESUBTITLEVIEW_H

@protocol PXGReusableView;


#import "PXTitleSubtitleUILabel.h"
#import "PXGTitleSubtitleViewConfiguration.h"

@interface PXGTitleSubtitleView : PXTitleSubtitleUILabel <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData; // ivar: _userData


-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif