// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUISETTINGSLEFTRIGHTSLIDERCELL_H
#define AXUISETTINGSLEFTRIGHTSLIDERCELL_H

@class PSSliderTableCell, UILabel;



@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}




-(BOOL)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)labelColor;
-(id)newControl;
-(void)setAccessibilityLabel:(id)arg0 ;


@end


#endif