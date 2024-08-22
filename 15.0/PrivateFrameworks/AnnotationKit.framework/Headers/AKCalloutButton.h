// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKCALLOUTBUTTON_H
#define AKCALLOUTBUTTON_H

@class UIButton;


#import "AKCalloutBar.h"

@interface AKCalloutButton : UIButton

@property (weak, nonatomic) AKCalloutBar *bar; // ivar: _bar
@property (nonatomic) int position; // ivar: _position


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif