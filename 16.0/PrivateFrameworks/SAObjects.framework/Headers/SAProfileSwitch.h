// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPROFILESWITCH_H
#define SAPROFILESWITCH_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAProfileSwitch : SABaseClientBoundCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sharedUserId;
@property (readonly) Class superclass;


-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif