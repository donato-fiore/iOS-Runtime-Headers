// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWIMAGESLOTVIEW_H
#define SBWIMAGESLOTVIEW_H

@class UIView, UIImageView, NSString;
@protocol SBWDeferredImageSlotObserving;


#import "SBWImageSlot.h"

@interface SBWImageSlotView : UIView <SBWDeferredImageSlotObserving>

 {
    UIImageView *_imageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBWImageSlot *imageSlot; // ivar: _imageSlot
@property (readonly) Class superclass;


-(struct CGSize )_pointSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateWithImage:(id)arg0 ;
-(void)deferredImageSlot:(id)arg0 didUpdateImage:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif