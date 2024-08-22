// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPINTENTSIGNAL_H
#define SAINTENTGROUPINTENTSIGNAL_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupIntentSignal : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;


+(id)intentSignalWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif