// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUICCOPTIONSBUTTON_H
#define HUICCOPTIONSBUTTON_H

@class UILabel;


#import "HUICCToggleButton.h"

@interface HUICCOptionsButton : HUICCToggleButton

@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


-(BOOL)enabled;
-(id)accessibilityHint;
-(id)accessoryView;
-(id)contentValue;
-(void)updateValue;


@end


#endif