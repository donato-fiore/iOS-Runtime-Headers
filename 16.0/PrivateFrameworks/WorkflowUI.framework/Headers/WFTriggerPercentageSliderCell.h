// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIGGERPERCENTAGESLIDERCELL_H
#define WFTRIGGERPERCENTAGESLIDERCELL_H

@class UITableViewCell, UILabel, UISlider;
@protocol WFTriggerPercentageSliderCellDelegate;



@interface WFTriggerPercentageSliderCell : UITableViewCell

@property (weak, nonatomic) NSObject<WFTriggerPercentageSliderCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly, nonatomic) UISlider *slider; // ivar: _slider
@property (nonatomic) CGFloat sliderValue;
@property (nonatomic) CGFloat stepValue; // ivar: _stepValue


-(CGFloat)roundValue:(CGFloat)arg0 toNearestStep:(CGFloat)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureWithInitialValue:(CGFloat)arg0 maximumValue:(CGFloat)arg1 minimumValue:(CGFloat)arg2 stepValue:(CGFloat)arg3 ;
-(void)sliderValueChanged:(id)arg0 ;


@end


#endif