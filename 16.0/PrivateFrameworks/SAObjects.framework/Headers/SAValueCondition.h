// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAVALUECONDITION_H
#define SAVALUECONDITION_H

@class NSString, NSArray;
@protocol SASupportCondition;


#import "AceObject.h"

@interface SAValueCondition : AceObject <SASupportCondition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *legalValues;
@property (readonly) Class superclass;


+(id)valueCondition;
+(id)valueConditionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif