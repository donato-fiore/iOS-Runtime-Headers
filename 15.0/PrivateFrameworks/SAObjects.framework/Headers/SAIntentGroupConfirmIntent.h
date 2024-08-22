// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPCONFIRMINTENT_H
#define SAINTENTGROUPCONFIRMINTENT_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;


+(id)confirmIntent;
+(id)confirmIntentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif