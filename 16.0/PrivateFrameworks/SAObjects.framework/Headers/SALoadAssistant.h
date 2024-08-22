// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOADASSISTANT_H
#define SALOADASSISTANT_H

@class NSString, NSData, NSNumber, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *appleConnectServiceTicket;
@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *connectionMode;
@property (copy, nonatomic) NSString *connectionType;
@property (copy, nonatomic) NSString *dataSharingOptInStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *deviceAuthVersion;
@property (copy, nonatomic) NSArray *experiments;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hubAssistantId;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *lastKnownAceHostOfCompanion;
@property (copy, nonatomic) NSString *linkedAssistantId;
@property (copy, nonatomic) NSData *linkedSessionValidationData;
@property (copy, nonatomic) NSString *linkedSpeechId;
@property (copy, nonatomic) NSString *loggableAssistantId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSData *sessionValidationData;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *speechId;
@property (readonly) Class superclass;


+(id)loadAssistant;
+(id)loadAssistantWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif