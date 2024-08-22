// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSHIDEVENTDISCRETEDISPATCHINGRULE_H
#define BKSHIDEVENTDISCRETEDISPATCHINGRULE_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDiscreteDispatchingPredicate.h"
#import "BKSHIDEventDispatchingTarget.h"

@interface BKSHIDEventDiscreteDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) BKSHIDEventDiscreteDispatchingPredicate *predicate; // ivar: _predicate
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) BKSHIDEventDispatchingTarget *target; // ivar: _target


+(BOOL)supportsSecureCoding;
+(id)ruleForDispatchingDiscreteEventsMatchingPredicate:(id)arg0 toTarget:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPredicate:(id)arg0 target:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif