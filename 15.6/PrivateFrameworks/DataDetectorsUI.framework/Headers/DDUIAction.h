// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDUIACTION_H
#define DDUIACTION_H

@class UIAction;


#import "DDAction.h"

@interface DDUIAction : UIAction

@property (retain, nonatomic) DDAction *dd_action; // ivar: _dd_action
@property (copy, nonatomic) id *dd_handler; // ivar: _dd_handler


-(void)dd_performAction;


@end


#endif