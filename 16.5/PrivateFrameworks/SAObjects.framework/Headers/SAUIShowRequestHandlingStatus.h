// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUISHOWREQUESTHANDLINGSTATUS_H
#define SAUISHOWREQUESTHANDLINGSTATUS_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *asrStatus;
@property (copy, nonatomic) NSString *executionInputSystem;
@property (copy, nonatomic) NSString *requestHandlingStatus;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif