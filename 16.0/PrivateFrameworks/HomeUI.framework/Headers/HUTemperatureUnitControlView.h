// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTEMPERATUREUNITCONTROLVIEW_H
#define HUTEMPERATUREUNITCONTROLVIEW_H

@class UIView, NSString, UILabel, NSArray;
@protocol HUControlView, HUControlViewDelegate;



@interface HUTemperatureUnitControlView : UIView <HUControlView>



@property (nonatomic) BOOL canBeHighlighted; // ivar: _canBeHighlighted
@property (nonatomic) NSInteger currentUnit; // ivar: _currentUnit
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *labelConstraints; // ivar: _labelConstraints
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) id *value;
@property (nonatomic) BOOL viewDisabled; // ivar: _viewDisabled


-(id)_unitStringForCurrentUnit;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif