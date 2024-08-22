// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAASSISTANTDESTROYED_H
#define SAASSISTANTDESTROYED_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAssistantDestroyed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;


+(id)assistantDestroyed;
+(id)assistantDestroyedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif