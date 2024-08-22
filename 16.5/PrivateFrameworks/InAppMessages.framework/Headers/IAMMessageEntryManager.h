// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMMESSAGEENTRYMANAGER_H
#define IAMMESSAGEENTRYMANAGER_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface IAMMessageEntryManager : NSObject {
    NSDictionary *_messageEntryByIdentifier;
    NSDictionary *_priorityMessageEntryByIdentifier;
    NSDictionary *_messageEntriesByEventTriggers;
    NSDictionary *_messageEntriesByContextPropertyTriggers;
    NSDictionary *_messageEntriesByUnknownKindTriggers;
    NSDictionary *_messageEntriesByTargetIdentifier;
}


@property (copy, nonatomic) NSArray *messageEntries; // ivar: _messageEntries
@property (copy, nonatomic) NSString *modalTargetIdentifier; // ivar: _modalTargetIdentifier


+(id)messageEntries:(id)arg0 withSatisfiedPresentationTriggerForTriggerContext:(id)arg1 ;
+(id)targetIdentifiersForMessageEntries:(id)arg0 ;
+(id)uniqueMessageEntriesInMessageEntriesByTrigger:(id)arg0 ;
+(void)_addMessageEntry:(id)arg0 toTriggerKeyDictionary:(id)arg1 atKey:(id)arg2 ;
-(id)initWithModalTargetIdentifier:(id)arg0 ;
-(id)messageEntriesByTriggerForEventContext:(id)arg0 ;
-(id)messageEntriesForContextPropertiesContext:(id)arg0 ;
-(id)messageEntriesForTargetIdentifier:(id)arg0 ;
-(id)messageEntryForIdentifier:(id)arg0 ;
-(id)priorityMessageEntryForIdentifier:(id)arg0 ;
-(void)_updateMessageIndexes;
-(void)addPriorityMessageEntry:(id)arg0 ;


@end


#endif