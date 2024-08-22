// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASYNCVERIFICATIONRESULT_H
#define SASYNCVERIFICATIONRESULT_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASyncVerificationResult : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fail;
@property (copy, nonatomic) NSArray *failedObjectIds;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger total;


+(id)verificationResult;
+(id)verificationResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif