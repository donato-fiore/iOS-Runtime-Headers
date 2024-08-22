// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAORCONDITION_H
#define SAORCONDITION_H

@class NSArray, NSString;
@protocol SASupportCondition;


#import "AceObject.h"

@interface SAOrCondition : AceObject <SASupportCondition>



@property (copy, nonatomic) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)orCondition;
+(id)orConditionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif