// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPPENCILHORIZONTALPRESENTATIONCONTAINERVIEW_H
#define PNPPENCILHORIZONTALPRESENTATIONCONTAINERVIEW_H

@class UIView, NSString;
@protocol PNPChargingStatusViewHosting, PNPDeviceStateConfigurable;


#import "PNPChargingStatusView.h"
#import "PNPDeviceState.h"
#import "PNPPencilView.h"

@interface PNPPencilHorizontalPresentationContainerView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable>



@property (retain, nonatomic) PNPChargingStatusView *chargingStatusView; // ivar: _chargingStatusView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState; // ivar: _deviceState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PNPPencilView *pencilView; // ivar: _pencilView
@property (nonatomic) BOOL showsChargingStatusView; // ivar: _showsChargingStatusView
@property (readonly) Class superclass;


-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif