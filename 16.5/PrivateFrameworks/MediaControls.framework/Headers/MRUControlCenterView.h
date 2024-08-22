// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUCONTROLCENTERVIEW_H
#define MRUCONTROLCENTERVIEW_H

@class UIView, UICollectionView, UICollectionViewFlowLayout;


#import "MRUControlCenterButton.h"
#import "MRUTransportButton.h"
#import "MRUVisualStylingProvider.h"

@interface MRUControlCenterView : UIView

@property (retain, nonatomic) UIView *alertView; // ivar: _alertView
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIView *materialView; // ivar: _materialView
@property (readonly, nonatomic) MRUControlCenterButton *moreButton; // ivar: _moreButton
@property (readonly, nonatomic) MRUTransportButton *routingButton; // ivar: _routingButton
@property (nonatomic) BOOL showAlertView; // ivar: _showAlertView
@property (nonatomic) BOOL showMoreButton; // ivar: _showMoreButton
@property (nonatomic) BOOL showRoutingButton; // ivar: _showRoutingButton
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (nonatomic) CGRect transitionFrame; // ivar: _transitionFrame
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsHorizontal;
-(void)layoutSubviewsIPad;
-(void)layoutSubviewsVertical;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateCollectionViewContentInset;
-(void)updateVisibility;


@end


#endif