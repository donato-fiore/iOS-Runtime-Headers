// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAREMEMBERSSAVEINTERACTION_H
#define SAREMEMBERSSAVEINTERACTION_H

@class NSString;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SARemembersSaveInteraction : SABaseClientBoundCommand <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntentResponse;
@property (readonly) Class superclass;


+(id)saveInteraction;
+(id)saveInteractionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif