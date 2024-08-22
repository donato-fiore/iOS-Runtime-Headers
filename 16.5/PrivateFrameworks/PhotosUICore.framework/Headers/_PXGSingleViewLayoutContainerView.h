// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXGSINGLEVIEWLAYOUTCONTAINERVIEW_H
#define _PXGSINGLEVIEWLAYOUTCONTAINERVIEW_H

@class UIView;
@protocol PXGReusableView, NSCopying;



@interface _PXGSingleViewLayoutContainerView : UIView <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: clippingRect
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData; // ivar: userData


-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif