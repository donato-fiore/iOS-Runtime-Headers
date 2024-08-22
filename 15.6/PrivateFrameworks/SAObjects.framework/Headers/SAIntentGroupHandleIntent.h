// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPHANDLEINTENT_H
#define SAINTENTGROUPHANDLEINTENT_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand

@property (nonatomic) BOOL allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;


+(id)handleIntent;
+(id)handleIntentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif