// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSENTITYBUTTON_H
#define CPSENTITYBUTTON_H

@class CPButton;


#import "CPSActionButton.h"

@interface CPSEntityButton : CPSActionButton

@property (readonly, nonatomic) CPButton *entityButton; // ivar: _entityButton


+(id)buttonWithEntityButton:(id)arg0 ;
-(id)CPSButtonImageForButton:(id)arg0 ;
-(id)CPSButtonTitleForButton:(id)arg0 ;


@end


#endif