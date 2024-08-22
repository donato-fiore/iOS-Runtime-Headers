// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSMUTABLEHIDEVENTDISCRETEDISPATCHINGPREDICATE_H
#define BKSMUTABLEHIDEVENTDISCRETEDISPATCHINGPREDICATE_H

@class NSSet;


#import "BKSHIDEventDiscreteDispatchingPredicate.h"

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (copy, nonatomic) NSSet *descriptors;
@property (copy, nonatomic) NSSet *displays;
@property (copy, nonatomic) NSSet *senderDescriptors;


+(id)defaultFocusPredicate;
+(id)defaultSystemPredicate;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif