// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISETTINGSZOOMLABELEDSLIDERCELL_H
#define AXUISETTINGSZOOMLABELEDSLIDERCELL_H



#import "AXUISettingsLabeledSliderCell.h"

@interface AXUISettingsZoomLabeledSliderCell : AXUISettingsLabeledSliderCell



-(CGFloat)initialValue;
-(CGFloat)maximumValue;
-(CGFloat)minimumValue;
-(id)accessibilityLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateRightLabelWithValue:(CGFloat)arg0 ;
-(void)handleSliderBeingDragged:(id)arg0 ;
-(void)handleSliderDidFinishDrag:(id)arg0 ;


@end


#endif