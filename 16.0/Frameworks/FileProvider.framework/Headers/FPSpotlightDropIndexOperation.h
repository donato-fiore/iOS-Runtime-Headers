// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSPOTLIGHTDROPINDEXOPERATION_H
#define FPSPOTLIGHTDROPINDEXOPERATION_H

@class CSSearchableIndex, NSString;


#import "FPOperation.h"
#import "FPSpotlightIndexer.h"

@interface FPSpotlightDropIndexOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_reason;
    NSString *_domainID;
}




+(void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)arg0 index:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithIndexer:(id)arg0 index:(id)arg1 domainID:(id)arg2 reason:(id)arg3 ;
-(id)operationDescription;
-(void)main;


@end


#endif