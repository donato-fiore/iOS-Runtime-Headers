// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASYNCDEEPSYNCVERIFICATIONRESULT_H
#define SASYNCDEEPSYNCVERIFICATIONRESULT_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASyncDeepSyncVerificationResult : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *result;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)deepSyncVerificationResult;
+(id)deepSyncVerificationResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif