// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALOCALSEARCHOPERATIONHOURS_H
#define SALOCALSEARCHOPERATIONHOURS_H

@class NSString, NSDictionary;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *operationPeriods;
@property (readonly) Class superclass;


+(id)operationHours;
+(id)operationHoursWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif