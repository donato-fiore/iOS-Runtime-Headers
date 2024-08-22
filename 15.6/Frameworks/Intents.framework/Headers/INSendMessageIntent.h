// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSENDMESSAGEINTENT_H
#define INSENDMESSAGEINTENT_H

@class NSArray, NSString;
@protocol UNNotificationContentProviding, INSendMessageIntentExport;


#import "INIntent.h"
#import "INPerson.h"
#import "INSpeakableString.h"

@interface INSendMessageIntent : INIntent <UNNotificationContentProviding, INSendMessageIntentExport>



@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effect;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *notificationThreadIdentifier;
@property (readonly, nonatomic) NSInteger outgoingMessageType;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) INPerson *sender;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) INSpeakableString *speakableGroupName;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)_ignoredParameters;
-(BOOL)_isUserConfirmationRequired;
-(BOOL)_isValidSubProducer:(id)arg0 ;
-(BOOL)configureAttributeSet:(id)arg0 includingData:(BOOL)arg1 ;
-(NSInteger)_intentCategory;
-(NSInteger)_preferredInteractionDirection;
-(id)_categoryVerb;
-(id)_currentParameterCombination;
-(id)_dictionaryRepresentation;
-(id)_keyCodableAttributes;
-(id)_metadata;
-(id)_redactedDictionaryRepresentation;
-(id)_spotlightContentType;
-(id)_typedBackingStore;
-(id)_validParameterCombinationsWithSchema:(id)arg0 ;
-(id)domain;
-(id)groupName;
-(id)initWithRecipients:(id)arg0 content:(id)arg1 groupName:(id)arg2 serviceName:(id)arg3 sender:(id)arg4 ;
-(id)initWithRecipients:(id)arg0 content:(id)arg1 serviceName:(id)arg2 sender:(id)arg3 ;
-(id)initWithRecipients:(id)arg0 content:(id)arg1 speakableGroupName:(id)arg2 conversationIdentifier:(id)arg3 serviceName:(id)arg4 sender:(id)arg5 ;
-(id)initWithRecipients:(id)arg0 outgoingMessageType:(NSInteger)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 ;
-(id)initWithRecipients:(id)arg0 outgoingMessageType:(NSInteger)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 attachments:(id)arg7 ;
-(id)parametersByName;
-(id)verb;
-(void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(id)arg0 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setGroupName:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif