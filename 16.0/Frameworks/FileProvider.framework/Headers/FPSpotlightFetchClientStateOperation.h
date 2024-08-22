// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSPOTLIGHTFETCHCLIENTSTATEOPERATION_H
#define FPSPOTLIGHTFETCHCLIENTSTATEOPERATION_H

@class CSSearchableIndex, NSString;


#import "FPOperation.h"
#import "FPSpotlightIndexer.h"

@interface FPSpotlightFetchClientStateOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_domainIdentifier;
    NSString *_reason;
}




+(id)_currentIndexerVersion;
-(id)_clientStateCurrentVersionIfNeedReset;
-(id)initWithIndexer:(id)arg0 index:(id)arg1 indexName:(id)arg2 domainID:(id)arg3 reason:(id)arg4 ;
-(id)operationDescription;
-(void)_fetchClientState;
-(void)_handleFetchedClientState:(id)arg0 error:(id)arg1 ;
-(void)_markClientStateResetDone;
-(void)main;


@end


#endif