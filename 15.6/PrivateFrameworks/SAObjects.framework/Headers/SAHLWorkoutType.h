// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHLWORKOUTTYPE_H
#define SAHLWORKOUTTYPE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAHLWorkoutType : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *swimmingLocationType;
@property (copy, nonatomic) NSString *workoutCategory;
@property (copy, nonatomic) NSString *workoutLocationType;


+(id)workoutType;
+(id)workoutTypeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif