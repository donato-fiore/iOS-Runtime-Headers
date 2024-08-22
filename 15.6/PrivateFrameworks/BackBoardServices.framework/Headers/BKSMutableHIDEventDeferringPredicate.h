// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSMUTABLEHIDEVENTDEFERRINGPREDICATE_H
#define BKSMUTABLEHIDEVENTDEFERRINGPREDICATE_H



#import "BKSHIDEventDeferringPredicate.h"
#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif