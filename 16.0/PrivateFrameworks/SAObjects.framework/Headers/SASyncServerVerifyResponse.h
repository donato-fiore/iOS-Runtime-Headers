// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASYNCSERVERVERIFYRESPONSE_H
#define SASYNCSERVERVERIFYRESPONSE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *internalVerifications;
@property (copy, nonatomic) NSArray *serverChecksums;
@property (copy, nonatomic) NSArray *syncDebugInfo;


+(id)serverVerifyResponse;
+(id)serverVerifyResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif