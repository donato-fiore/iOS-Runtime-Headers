// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACREATEASSISTANT_H
#define SACREATEASSISTANT_H

@class NSString, NSData;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *appleConnectServiceTicket;
@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *connectionMode;
@property (copy, nonatomic) NSString *connectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *linkedAssistantId;
@property (copy, nonatomic) NSString *linkedSpeechId;
@property (copy, nonatomic) NSData *linkedValidationData;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *speechId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *validationData;


+(id)createAssistant;
+(id)createAssistantWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif