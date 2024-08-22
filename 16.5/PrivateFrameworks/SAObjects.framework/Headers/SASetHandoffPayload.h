// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETHANDOFFPAYLOAD_H
#define SASETHANDOFFPAYLOAD_H

@protocol SAHandoffPayload;


#import "SABaseClientBoundCommand.h"

@interface SASetHandoffPayload : SABaseClientBoundCommand

@property (retain, nonatomic) NSObject<SAHandoffPayload> *handoffPayload;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif