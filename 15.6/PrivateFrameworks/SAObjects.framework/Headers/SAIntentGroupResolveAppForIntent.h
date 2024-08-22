// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPRESOLVEAPPFORINTENT_H
#define SAINTENTGROUPRESOLVEAPPFORINTENT_H

@class NSArray, NSString;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appsList;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;


+(id)resolveAppForIntent;
+(id)resolveAppForIntentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif