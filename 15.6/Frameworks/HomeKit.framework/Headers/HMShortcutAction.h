// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSHORTCUTACTION_H
#define HMSHORTCUTACTION_H

@class WFHomeWorkflow;


#import "HMAction.h"

@interface HMShortcutAction : HMAction

@property (readonly) WFHomeWorkflow *shortcut; // ivar: _shortcut


+(BOOL)isSupportedForHome:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg0 home:(id)arg1 ;
-(BOOL)isValid;
-(BOOL)requiresDeviceUnlock;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShortcut:(id)arg0 ;


@end


#endif