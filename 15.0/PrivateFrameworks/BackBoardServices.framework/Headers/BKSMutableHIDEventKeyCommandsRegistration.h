// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSMUTABLEHIDEVENTKEYCOMMANDSREGISTRATION_H
#define BKSMUTABLEHIDEVENTKEYCOMMANDSREGISTRATION_H

@class NSSet;


#import "BKSHIDEventKeyCommandsRegistration.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSMutableHIDEventKeyCommandsRegistration : BKSHIDEventKeyCommandsRegistration

@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (copy, nonatomic) NSSet *keyCommands;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif