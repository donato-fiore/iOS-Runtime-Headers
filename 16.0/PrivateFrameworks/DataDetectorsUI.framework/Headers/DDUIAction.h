// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUIACTION_H
#define DDUIACTION_H

@class UIAction;


#import "DDAction.h"

@interface DDUIAction : UIAction

@property (retain, nonatomic) DDAction *dd_action; // ivar: _dd_action
@property (copy, nonatomic) id *dd_handler; // ivar: _dd_handler


-(void)dd_performAction;
-(void)dd_performActionWithRect:(struct CGRect )arg0 ;


@end


#endif