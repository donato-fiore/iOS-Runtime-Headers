// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSPOTLIGHTFETCHONEBATCHFROMWORKINGSETOPERATION_H
#define FPSPOTLIGHTFETCHONEBATCHFROMWORKINGSETOPERATION_H

@class NSArray, NSError, NSData;


#import "FPOperation.h"
#import "FPSpotlightIndexer.h"
#import "FPXDomainContext.h"
#import "FPSpotlightIndexState.h"

@interface FPSpotlightFetchOneBatchFromWorkingSetOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    FPSpotlightIndexState *_indexState;
}


@property (retain, nonatomic) NSArray *deletedItemIDs; // ivar: _deletedItemIDs
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL hasMore; // ivar: _hasMore
@property (retain, nonatomic) NSData *nextAnchor; // ivar: _nextAnchor
@property (retain, nonatomic) NSArray *updatedItems; // ivar: _updatedItems


-(id)initWithIndexer:(id)arg0 queue:(id)arg1 ;
-(id)observerItemID;
-(void)_indexOneChangesBatchFromChangeToken:(id)arg0 ;
-(void)_indexOnePageFromPage:(id)arg0 ;
-(void)handleInsertedItems:(id)arg0 deletedItems:(id)arg1 needsMoreWork:(BOOL)arg2 state:(id)arg3 error:(id)arg4 ;
-(void)main;


@end


#endif