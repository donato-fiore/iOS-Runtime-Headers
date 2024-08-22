// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAANDCONDITION_H
#define SAANDCONDITION_H

@class NSArray, NSString;
@protocol SASupportCondition;


#import "AceObject.h"

@interface SAAndCondition : AceObject <SASupportCondition>



@property (copy, nonatomic) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)andCondition;
+(id)andConditionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif