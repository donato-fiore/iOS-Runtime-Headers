// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOREQUESTKEYSHORTCUTHUDPRESENTATIONACTION_H
#define _UIOREQUESTKEYSHORTCUTHUDPRESENTATIONACTION_H

@class UIOAction;


#import "_UIKeyShortcutHUDConfiguration.h"

@interface _UIORequestKeyShortcutHUDPresentationAction : UIOAction

@property (readonly, nonatomic) _UIKeyShortcutHUDConfiguration *configuration;


-(BOOL)isPermitted;
-(id)initWithConfiguration:(id)arg0 responseHandler:(id)arg1 ;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif