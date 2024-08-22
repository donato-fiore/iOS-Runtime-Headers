// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASYNCCLIENTVERIFYRESULT_H
#define SASYNCCLIENTVERIFYRESULT_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASyncClientVerifyResult : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *checksums;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)clientVerifyResult;
+(id)clientVerifyResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif