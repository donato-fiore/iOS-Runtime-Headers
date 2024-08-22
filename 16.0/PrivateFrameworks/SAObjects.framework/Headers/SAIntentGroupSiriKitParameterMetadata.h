// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSIRIKITPARAMETERMETADATA_H
#define SAINTENTGROUPSIRIKITPARAMETERMETADATA_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupSiriKitParameterMetadata : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *confirmationStates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *parameterName;
@property (nonatomic) BOOL shouldResolve;
@property (readonly) Class superclass;


+(id)siriKitParameterMetadata;
+(id)siriKitParameterMetadataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif