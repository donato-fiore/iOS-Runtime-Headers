// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPBATCHSLOTRESOLUTIONRESULTSTEPRESULT_H
#define SAINTENTGROUPBATCHSLOTRESOLUTIONRESULTSTEPRESULT_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SACommandFailed.h"

@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *base64EncodedProtobufMessage;
@property (retain, nonatomic) SACommandFailed *commandFailed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonEncodedSlotResolutionResult;
@property (copy, nonatomic) NSString *keyPath;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeName;


+(id)batchSlotResolutionResultStepResult;
+(id)batchSlotResolutionResultStepResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif