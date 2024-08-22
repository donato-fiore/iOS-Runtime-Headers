// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PNPSTACKEDPILLVIEW_H
#define PNPSTACKEDPILLVIEW_H

@class UIView, UILabel, NSString, UIColor;
@protocol PNPDeviceStateConfigurable;


#import "PNPDeviceState.h"

@interface PNPStackedPillView : UIView <PNPDeviceStateConfigurable>

 {
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    NSString *_topLabelString;
    NSString *_bottomLabelString;
}


@property (retain, nonatomic) UIColor *bottomLabelColor; // ivar: _bottomLabelColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 topString:(id)arg1 bottomString:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_configureConstraints;
-(void)layoutSubviews;


@end


#endif