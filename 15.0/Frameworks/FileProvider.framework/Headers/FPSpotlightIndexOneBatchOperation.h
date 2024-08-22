// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSPOTLIGHTINDEXONEBATCHOPERATION_H
#define FPSPOTLIGHTINDEXONEBATCHOPERATION_H

@class NSArray, NSError, NSData;


#import "FPOperation.h"
#import "FPSpotlightIndexer.h"

@interface FPSpotlightIndexOneBatchOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    BOOL _isInitialIndexing;
    BOOL _isOutOfBandIndexing;
    NSUInteger _logSection;
}


@property (copy, nonatomic) id *canIndexFromCurrentState; // ivar: _canIndexFromCurrentState
@property (retain, nonatomic) NSArray *deletedItemIDs; // ivar: _deletedItemIDs
@property (retain, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (retain, nonatomic) NSData *nextAnchor; // ivar: _nextAnchor
@property (retain, nonatomic) NSArray *updatedItems; // ivar: _updatedItems


-(id)initWithIndexer:(id)arg0 isInitialIndexing:(BOOL)arg1 isOutOfBandIndexing:(BOOL)arg2 queue:(id)arg3 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif