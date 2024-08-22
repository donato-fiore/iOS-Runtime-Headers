// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPPROCESSINTENT_H
#define SAINTENTGROUPPROCESSINTENT_H

@class NSArray, NSString;


#import "SABaseClientBoundCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (nonatomic) BOOL allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (nonatomic) BOOL shouldRunHandleIntent;


+(id)processIntent;
+(id)processIntentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif