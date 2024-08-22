// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOTSPOTDETAILSVIEW_H
#define WFHOTSPOTDETAILSVIEW_H

@class UIStackView, _UIBatteryView, NSString, UILabel, UIImageView;



@interface WFHotspotDetailsView : UIStackView

@property (nonatomic) NSUInteger batteryCharge; // ivar: _batteryCharge
@property (retain, nonatomic) _UIBatteryView *batteryView; // ivar: _batteryView
@property (copy, nonatomic) NSString *cellularProtocolString; // ivar: _cellularProtocolString
@property (retain, nonatomic) UILabel *networkTypeLabel; // ivar: _networkTypeLabel
@property (nonatomic) NSUInteger signalBars; // ivar: _signalBars
@property (retain, nonatomic) UIImageView *signalImageView; // ivar: _signalImageView


-(id)attributedStringFromCellularProtocol:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setupSubviews;
-(void)updateCellularProtocolLabel;
-(void)updateSignalBars;


@end


#endif