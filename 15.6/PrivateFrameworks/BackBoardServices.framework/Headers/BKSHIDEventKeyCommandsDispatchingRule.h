// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTKEYCOMMANDSDISPATCHINGRULE_H
#define BKSHIDEVENTKEYCOMMANDSDISPATCHINGRULE_H

@class NSString, NSArray;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventKeyCommandsDispatchingPredicate.h"

@interface BKSHIDEventKeyCommandsDispatchingRule : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) BKSHIDEventKeyCommandsDispatchingPredicate *predicate; // ivar: _predicate
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *targets; // ivar: _targets


+(BOOL)supportsSecureCoding;
+(id)ruleForDispatchingKeyCommandsMatchingPredicate:(id)arg0 toTargets:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPredicate:(id)arg0 targets:(id)arg1 ;
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