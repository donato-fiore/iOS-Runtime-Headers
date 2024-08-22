// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBANNERVIEW_H
#define PXBANNERVIEW_H

@class UIView;
@protocol PXBannerViewDelegate;


#import "PXBannerViewConfiguration.h"

@interface PXBannerView : UIView

@property (copy, nonatomic) PXBannerViewConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<PXBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly) UIEdgeInsets padding; // ivar: _padding


-(id)_createActionButton;
-(id)_createCancelButton;
-(id)_labelWithSubtitle:(id)arg0 ;
-(id)_labelWithTitle:(id)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 padding:(struct UIEdgeInsets )arg1 ;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleContinueButton:(id)arg0 ;
-(void)_reloadViews;


@end


#endif