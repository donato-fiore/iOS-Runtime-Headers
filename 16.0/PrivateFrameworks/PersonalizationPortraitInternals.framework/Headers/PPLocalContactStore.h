// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLOCALCONTACTSTORE_H
#define PPLOCALCONTACTSTORE_H

@protocol PPFeedbackAccepting;

#import <Foundation/Foundation.h>

#import "PPContactStorage.h"
#import "PPLocalNamedEntityStore.h"

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting>

 {
    PPContactStorage *_contactStorage;
    PPLocalNamedEntityStore *_namedEntityStore;
}




+(id)defaultStore;
-(BOOL)chineseBirthdayFound;
-(BOOL)iterContactNameRecordsForClient:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(CGFloat)similarityForNamedEntity:(id)arg0 nameRecord:(id)arg1 ;
-(id)_incompleteContactFromContactsRecord:(id)arg0 ;
-(id)_scoredContactFromContactsRecord:(id)arg0 score:(CGFloat)arg1 ;
-(id)cachedSignificantContactHandles;
-(id)contactHandlesForSource:(id)arg0 error:(*id)arg1 ;
-(id)contactHandlesForTopics:(id)arg0 error:(*id)arg1 ;
-(id)contactNameRecordChangesForClient:(id)arg0 error:(*id)arg1 ;
-(id)contactsChangeHistoryForClient:(id)arg0 error:(*id)arg1 ;
-(id)contactsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)contactsWithQuery:(id)arg0 explanationSet:(id)arg1 timeoutSeconds:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithStorage:(id)arg0 namedEntityStoreOverride:(id)arg1 ;
-(id)meCard;
-(id)rankedContactsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)resolveContactsForNamedEntities:(id)arg0 ;
-(id)scoredContactsWithContacts:(id)arg0 ;
-(id)upcomingRelevantContactsForQuery:(id)arg0 error:(*id)arg1 ;
-(void)clearChangeHistoryForClient:(id)arg0 historyResult:(id)arg1 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg0 chosenContactIdentifier:(id)arg1 ;
-(void)rebuildCachedSignificantContactHandlesWithShouldContinue:(id)arg0 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif