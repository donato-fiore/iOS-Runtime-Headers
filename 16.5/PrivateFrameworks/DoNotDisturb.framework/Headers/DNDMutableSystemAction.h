// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMUTABLESYSTEMACTION_H
#define DNDMUTABLESYSTEMACTION_H

@class WFToggleSettingContextualAction, WFReverseContextualAction;


#import "DNDSystemAction.h"

@interface DNDMutableSystemAction : DNDSystemAction

@property (retain, nonatomic) WFToggleSettingContextualAction *action;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) WFReverseContextualAction *reverseAction;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif