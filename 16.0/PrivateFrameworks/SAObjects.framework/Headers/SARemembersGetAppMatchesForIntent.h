// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAREMEMBERSGETAPPMATCHESFORINTENT_H
#define SAREMEMBERSGETAPPMATCHESFORINTENT_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>



@property (copy, nonatomic) NSArray *candidateBundleIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property (readonly) Class superclass;


+(id)getAppMatchesForIntent;
+(id)getAppMatchesForIntentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif