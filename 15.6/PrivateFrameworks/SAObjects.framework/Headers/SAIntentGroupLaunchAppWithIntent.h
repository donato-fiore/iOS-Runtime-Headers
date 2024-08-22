// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPLAUNCHAPPWITHINTENT_H
#define SAINTENTGROUPLAUNCHAPPWITHINTENT_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntentResponse;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntent;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntentResponse;


+(id)launchAppWithIntent;
+(id)launchAppWithIntentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif