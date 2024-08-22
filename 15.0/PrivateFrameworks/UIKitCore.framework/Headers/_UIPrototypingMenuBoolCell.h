// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPROTOTYPINGMENUBOOLCELL_H
#define _UIPROTOTYPINGMENUBOOLCELL_H

@class UIPrototypingMenuCell;


#import "UISwitch.h"

@interface _UIPrototypingMenuBoolCell : UIPrototypingMenuCell

@property (retain, nonatomic) UISwitch *valueSwitch; // ivar: _valueSwitch


+(NSInteger)_layoutAxis;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_prototypingSettingDidChange;
-(void)_switchDidChangeValue:(id)arg0 ;


@end


#endif