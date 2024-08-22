// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPHOTOTILEVIEW_H
#define MUPHOTOTILEVIEW_H

@class UIView, UILabel, UIImageView;
@protocol MUPhotoTileViewModel;


#import "MUImageView.h"
#import "MUBadgeView.h"
#import "MUGradientView.h"
#import "MUPhotoTileOverlay.h"

@interface MUPhotoTileView : UIView {
    MUImageView *_imageView;
    UILabel *_titleLabel;
    MUBadgeView *_vendorBadge;
    MUGradientView *_titleGradientView;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) MUPhotoTileOverlay *photoOverlay; // ivar: _photoOverlay
@property (nonatomic) CGSize targetFrameSize; // ivar: _targetFrameSize
@property (retain, nonatomic) NSObject<MUPhotoTileViewModel> *viewModel; // ivar: _viewModel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateOverlay;


@end


#endif