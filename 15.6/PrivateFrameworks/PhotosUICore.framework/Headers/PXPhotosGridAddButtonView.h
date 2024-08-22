// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDADDBUTTONVIEW_H
#define PXPHOTOSGRIDADDBUTTONVIEW_H

@class UIView, UIButton, UIImage;
@protocol PXGReusableView;


#import "PXUpdater.h"
#import "PXPhotosGridAddButtonViewUserData.h"

@interface PXPhotosGridAddButtonView : UIView <PXGReusableView>

 {
    UIButton *_button;
    PXUpdater *_updater;
}


@property (readonly, nonatomic) id *actionHandler;
@property (retain, nonatomic) UIImage *buttonImage; // ivar: _buttonImage
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXPhotosGridAddButtonViewUserData *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleButton:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateButtonImage;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif