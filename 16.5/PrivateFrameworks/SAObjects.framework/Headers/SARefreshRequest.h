// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREFRESHREQUEST_H
#define SAREFRESHREQUEST_H

@class NSData, NSString;


#import "SAStartRequest.h"

@interface SARefreshRequest : SAStartRequest

@property (copy, nonatomic) NSData *nlResultState;
@property (copy, nonatomic) NSData *serializedIntent;
@property (copy, nonatomic) NSString *source;


+(id)refreshRequest;
+(id)refreshRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif