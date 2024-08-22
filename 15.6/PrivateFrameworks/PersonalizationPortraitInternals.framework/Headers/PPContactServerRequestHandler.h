// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONTACTSERVERREQUESTHANDLER_H
#define PPCONTACTSERVERREQUESTHANDLER_H

@class NSString;
@protocol PPContactServerProtocol, PPContactClientProtocol;

#import <Foundation/Foundation.h>

#import "PPXPCServerPipelinedBatchQueryManager.h"
#import "PPLocalContactStore.h"

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol>

 {
    id<PPContactClientProtocol> *_clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    uint8_t _isTerminated;
    PPLocalContactStore *_store;
}


@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)init;
-(id)initWithStore:(id)arg0 ;
-(void)contactHandlesForSource:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)contactHandlesForTopics:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)contactNameRecordChangesForClient:(id)arg0 completion:(id)arg1 ;
-(void)contactNameRecordChangesForClient:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)contactNameRecordsForClient:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg0 chosenContactIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)rankedContactsWithQuery:(id)arg0 queryId:(NSUInteger)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)setIsTerminated;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)unblockPendingQueries;
-(void)upcomingRelevantContactsForQuery:(id)arg0 queryId:(NSUInteger)arg1 ;


@end


#endif