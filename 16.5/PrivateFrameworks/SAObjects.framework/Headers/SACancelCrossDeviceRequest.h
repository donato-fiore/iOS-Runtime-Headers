// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACANCELCROSSDEVICEREQUEST_H
#define SACANCELCROSSDEVICEREQUEST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand

@property (nonatomic) BOOL cancelAssociatedRequests;
@property (copy, nonatomic) NSString *requestId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif