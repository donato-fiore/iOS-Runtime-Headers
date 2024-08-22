// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSLIDERVALUETABLEVIEWCELL_H
#define HUSLIDERVALUETABLEVIEWCELL_H

@class UITableViewCell, NSArray, NSString, HFItem, UIImage, UISlider, UILabel;
@protocol HUDisableableCellProtocol, HUCellProtocol, HUSliderValueTableViewCellDelegate, HUResizableCellDelegate;



@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUSliderValueTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (nonatomic) CGFloat maximumValue;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (nonatomic) CGFloat minimumValue;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) BOOL showValue; // ivar: _showValue
@property (retain, nonatomic) UISlider *slider; // ivar: _slider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL useLargeCell; // ivar: _useLargeCell
@property (nonatomic) CGFloat value;
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupAutoLayoutConstraints;
-(void)_sliderChanged:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif