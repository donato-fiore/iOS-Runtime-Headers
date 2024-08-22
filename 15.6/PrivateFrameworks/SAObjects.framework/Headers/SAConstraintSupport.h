// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACONSTRAINTSUPPORT_H
#define SACONSTRAINTSUPPORT_H

@class NSString;
@protocol SAAceSerializable, SASupportCondition;


#import "AceObject.h"

@interface SAConstraintSupport : AceObject <SAAceSerializable>



@property (retain, nonatomic) NSObject<SASupportCondition> *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *property;
@property (readonly) Class superclass;


+(id)constraintSupport;
+(id)constraintSupportWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif