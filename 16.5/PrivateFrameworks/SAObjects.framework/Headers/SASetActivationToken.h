// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETACTIVATIONTOKEN_H
#define SASETACTIVATIONTOKEN_H

@class NSData, NSString;


#import "SABaseClientBoundCommand.h"

@interface SASetActivationToken : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *language;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif