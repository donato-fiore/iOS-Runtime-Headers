// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSMUTABLEHIDEVENTKEYCOMMANDSDISPATCHINGPREDICATE_H
#define BKSMUTABLEHIDEVENTKEYCOMMANDSDISPATCHINGPREDICATE_H

@class NSSet;


#import "BKSHIDEventKeyCommandsDispatchingPredicate.h"

@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (copy, nonatomic) NSSet *displays;
@property (copy, nonatomic) NSSet *senderDescriptors;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif