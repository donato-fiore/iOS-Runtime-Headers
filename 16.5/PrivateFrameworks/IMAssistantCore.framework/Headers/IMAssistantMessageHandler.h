// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMASSISTANTMESSAGEHANDLER_H
#define IMASSISTANTMESSAGEHANDLER_H

@class NSString, NSArray;
@protocol IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler, IMAssistantMessageHandlerDataSource;

#import <Foundation/Foundation.h>


@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentIdentifier; // ivar: _intentIdentifier
@property (retain, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch
@property (retain, nonatomic) NSObject<IMAssistantMessageHandlerDataSource> *messageHandlerDataSource; // ivar: _messageHandlerDataSource
@property (readonly) Class superclass;


+(id)connectToIMDaemonController;
-(id)_initWithDataSource:(id)arg0 contactKeysToFetch:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)contactIdentifiersForParticipantsInChat:(id)arg0 ;
-(id)contactIdentifiersMatchingHandle:(id)arg0 ;
-(id)contactIdentifiersMatchingHandleID:(id)arg0 handleType:(NSInteger)arg1 ;
-(id)contactIdentifiersMatchingINPersonHandle:(id)arg0 ;
-(id)contactIdentifiersMatchingSPIHandle:(id)arg0 ;
-(id)contactPredicateFromHandle:(id)arg0 handleType:(NSInteger)arg1 ;
-(id)contactWithIdentifier:(id)arg0 ;
-(id)contactsMatchingINPerson:(id)arg0 ;
-(id)contactsMatchingPredicate:(id)arg0 forPerson:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 intentIdentifier:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 keysToFetch:(id)arg1 intentIdentifier:(id)arg2 ;
-(id)initWithIntentIdentifier:(id)arg0 ;
-(id)meContactIdentifier;
-(id)personFromSPIHandle:(id)arg0 ;
-(id)unifiedContactIdentifierForContactIdentifier:(id)arg0 ;
-(void)forceTriggerResumeNotification;


@end


#endif