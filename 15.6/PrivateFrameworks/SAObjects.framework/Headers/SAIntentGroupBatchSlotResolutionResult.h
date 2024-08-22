// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPBATCHSLOTRESOLUTIONRESULT_H
#define SAINTENTGROUPBATCHSLOTRESOLUTIONRESULT_H

@class NSString, NSDictionary, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupBatchSlotResolutionResult : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *base64EncodedIntent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSDictionary *slotResolutionMap;
@property (copy, nonatomic) NSArray *stepResults;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeName;


+(id)batchSlotResolutionResult;
+(id)batchSlotResolutionResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif