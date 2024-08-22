// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLOCALEVENTSTORE_H
#define PPLOCALEVENTSTORE_H

@class _PASNotificationToken;
@protocol PPFeedbackAccepting;

#import <Foundation/Foundation.h>

#import "PPEventCache.h"
#import "PPEventStorage.h"
#import "PPTrialWrapper.h"

@interface PPLocalEventStore : NSObject <PPFeedbackAccepting>

 {
    PPEventCache *_eventCache;
    PPEventStorage *_storage;
    _PASNotificationToken *_assetUpdateNotificationToken;
    PPTrialWrapper *_trialWrapper;
}




+(id)defaultStore;
-(BOOL)iterEventNameRecordsForClient:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(id)eventHighlightsFrom:(id)arg0 to:(id)arg1 options:(int)arg2 ;
-(id)eventNameRecordsForClient:(id)arg0 error:(*id)arg1 ;
-(id)eventWithExternalID:(id)arg0 ;
-(id)eventWithIdentifier:(id)arg0 ;
-(id)eventsFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)init;
-(id)initWithTrialWrapper:(id)arg0 eventStorage:(id)arg1 ;
-(id)nlEventsFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)resolveEventNameRecordChanges:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
-(id)scoredEventsWithQuery:(id)arg0 ;
-(void)clearCaches;
-(void)enumerateEventsFromEKObjectIDs:(id)arg0 expandingRecurrencesInRange:(id)arg1 usingBlock:(id)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif