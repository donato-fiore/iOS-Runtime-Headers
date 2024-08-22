// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTAPTORADARGADGET_H
#define PXTAPTORADARGADGET_H

@class UIView, NSString, UIButton;
@protocol PXGadget, PXGadgetDelegate;


#import "PXGadgetSpec.h"

@interface PXTapToRadarGadget : UIView <PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *tapToRadarButton; // ivar: _tapToRadarButton
@property (nonatomic) CGRect visibleContentRect;


-(id)contentView;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_tapToRadarTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif