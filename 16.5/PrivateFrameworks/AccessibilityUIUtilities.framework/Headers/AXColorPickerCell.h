// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXCOLORPICKERCELL_H
#define AXCOLORPICKERCELL_H

@class PSControlTableCell;



@interface AXColorPickerCell : PSControlTableCell



-(BOOL)canReload;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_colorValue;
-(id)accessibilityValue;
-(id)controlValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)newControl;
-(void)prepareForReuse;
-(void)reloadWithSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)setValue:(id)arg0 ;


@end


#endif