// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREMINDERSIRIKITINTERACTION_H
#define SAREMINDERSIRIKITINTERACTION_H



#import "SADomainObject.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAReminderSiriKitInteraction : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;


+(id)siriKitInteraction;
+(id)siriKitInteractionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif