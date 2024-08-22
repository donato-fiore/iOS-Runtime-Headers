// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMUTABLEAPPACTION_H
#define DNDMUTABLEAPPACTION_H

@class LNAction;


#import "DNDAppAction.h"

@interface DNDMutableAppAction : DNDAppAction

@property (copy, nonatomic) LNAction *action;
@property (nonatomic, getter=isEnabled) BOOL enabled;




@end


#endif