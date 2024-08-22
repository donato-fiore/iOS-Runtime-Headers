// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPSPOTLIGHTFETCHCLIENTSTATEOPERATION_H
#define FPSPOTLIGHTFETCHCLIENTSTATEOPERATION_H

@class CSSearchableIndex, NSString, NSURL;


#import "FPOperation.h"
#import "FPSpotlightIndexer.h"

@interface FPSpotlightFetchClientStateOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_spotlightDomainIdentifier;
    NSString *_reason;
    NSURL *_supportURL;
}




+(id)_currentIndexerVersion;
-(id)_clientStateCurrentVersionIfNeedReset;
-(id)initWithIndexer:(id)arg0 index:(id)arg1 indexName:(id)arg2 spotlightDomainIdentifier:(id)arg3 reason:(id)arg4 supportURL:(id)arg5 ;
-(id)operationDescription;
-(void)_fetchClientState;
-(void)_handleFetchedClientState:(id)arg0 error:(id)arg1 ;
-(void)_markClientStateResetDone;
-(void)main;


@end


#endif