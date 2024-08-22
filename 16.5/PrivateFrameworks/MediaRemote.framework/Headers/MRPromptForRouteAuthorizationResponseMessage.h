// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRPROMPTFORROUTEAUTHORIZATIONRESPONSEMESSAGE_H
#define MRPROMPTFORROUTEAUTHORIZATIONRESPONSEMESSAGE_H

@class NSString;


#import "MRProtocolMessage.h"

@interface MRPromptForRouteAuthorizationResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *response;


-(NSUInteger)type;
-(id)initWithResponse:(id)arg0 ;


@end


#endif