// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUICOLLECTIONVIEWFEATUREDVIEW_H
#define VUICOLLECTIONVIEWFEATUREDVIEW_H

@class UIView;


#import "VUIBaseView.h"

@interface VUICollectionViewFeaturedView : VUIBaseView

@property (retain, nonatomic) UIView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;


@end


#endif