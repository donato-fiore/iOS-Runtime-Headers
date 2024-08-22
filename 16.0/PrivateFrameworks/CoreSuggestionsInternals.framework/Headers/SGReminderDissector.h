// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGREMINDERDISSECTOR_H
#define SGREMINDERDISSECTOR_H

@class NSMutableDictionary, RTRoutineManager, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGReminderDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    NSMutableDictionary *_conversations;
    RTRoutineManager *_rtRoutineManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isReminderDueDateComponentsInPast:(id)arg0 givenReferenceDate:(id)arg1 allDay:(BOOL)arg2 ;
+(id)enrichedTaggedCharacterRangesFromEntity:(id)arg0 forMessage:(id)arg1 ;
+(id)enrichedTaggedCharacterRangesFromTaggedCharacterRanges:(id)arg0 messageIsSent:(BOOL)arg1 ;
+(id)getContactIdentifierForName:(id)arg0 andEmail:(id)arg1 ifMatchingPredicate:(id)arg2 ;
+(id)sharedInstance;
-(BOOL)_isTestMessage:(id)arg0 ;
-(BOOL)isAllDay:(id)arg0 ;
-(BOOL)isValidTextMessageForProcessing:(id)arg0 ;
-(BOOL)mailAddressIsAccountOwner:(id)arg0 ;
-(id)_detectedReminderEnrichmentFromReminderMessage:(id)arg0 parentEntity:(id)arg1 language:(id)arg2 parentMessage:(id)arg3 startTimeProcessing:(NSUInteger)arg4 ;
-(id)_reminderEnrichmentWithTitle:(id)arg0 dueDateComponents:(id)arg1 dueLocationType:(unsigned char)arg2 dueLocation:(id)arg3 dueLocationTrigger:(unsigned char)arg4 sourceURL:(id)arg5 reminderStatus:(unsigned char)arg6 parentEntity:(id)arg7 parentMessage:(id)arg8 allDay:(BOOL)arg9 ;
-(id)_reminderMessageForTextMessage:(id)arg0 withEntity:(id)arg1 extractionModel:(id)arg2 processingLanguage:(id)arg3 preprocessing:(BOOL)arg4 ;
-(id)_testReminder:(id)arg0 entity:(id)arg1 ;
-(id)_validateDueDateComponents:(id)arg0 dueLocation:(id)arg1 forReminderMessages:(id)arg2 ;
-(id)conversations;
-(id)defaultDueDateComponentsFromMessages:(id)arg0 ;
-(id)dueDateComponentsFromMessages:(id)arg0 ;
-(id)dueLocationFromMessages:(id)arg0 ;
-(id)extractReminderFromMailMessage:(id)arg0 entity:(id)arg1 ;
-(id)extractReminderFromOwnedMailMessage:(id)arg0 entity:(id)arg1 ;
-(id)extractReminderFromTextMessage:(id)arg0 entity:(id)arg1 store:(id)arg2 ;
-(id)fetchLocationOfInterestByType:(NSInteger)arg0 name:(id)arg1 ;
-(id)init;
-(id)initWithConversations:(id)arg0 rtRoutineManager:(id)arg1 ;
-(id)processingLanguageForContent:(id)arg0 ;
-(id)reminderTitleForContent:(id)arg0 ;
-(id)reminderTitleFromMessages:(id)arg0 forLanguage:(id)arg1 ;
-(id)storageLocationFromDueLocation:(id)arg0 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif