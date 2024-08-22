// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEATHERCONDITION_H
#define SAWEATHERCONDITION_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWeatherCondition : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *conditionCode;
@property (nonatomic) NSInteger conditionCodeIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)condition;
+(id)conditionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif