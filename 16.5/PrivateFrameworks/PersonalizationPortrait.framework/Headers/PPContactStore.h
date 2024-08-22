// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTSTORE_H
#define PPCONTACTSTORE_H

@class NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>

#import "PPRecordMonitoringHelper.h"
#import "PPClientFeedbackHelper.h"

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore>

 {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}


@property (retain, nonatomic) NSString *clientIdentifier;


-(BOOL)iterContactNameRecordsForClient:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterRankedContactsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg0 error:(*id)arg1 ;
-(id)_recordGenerator:(SEL)arg0 ;
-(id)contactHandlesForSource:(id)arg0 error:(*id)arg1 ;
-(id)contactHandlesForTopics:(id)arg0 error:(*id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)upcomingRelevantContactsForQuery:(id)arg0 error:(*id)arg1 ;
-(void)_loadContactNameRecordsWithDelegate:(id)arg0 ;
-(void)_sendChangesToDelegates;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg0 chosenContactIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif