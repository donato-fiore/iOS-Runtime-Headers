// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSMUTABLEHIDEVENTDEFERRINGTARGET_H
#define BKSMUTABLEHIDEVENTDEFERRINGTARGET_H



#import "BKSHIDEventDeferringTarget.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSMutableHIDEventDeferringTarget : BKSHIDEventDeferringTarget

@property (nonatomic) int pid;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif