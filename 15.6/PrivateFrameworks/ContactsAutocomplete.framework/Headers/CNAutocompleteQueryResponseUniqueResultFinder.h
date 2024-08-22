// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETEQUERYRESPONSEUNIQUERESULTFINDER_H
#define CNAUTOCOMPLETEQUERYRESPONSEUNIQUERESULTFINDER_H

@class NSMutableArray, NSDictionary, NSIndexSet, NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject {
    NSMutableArray *_uniqueResults;
    NSMutableArray *_hashes;
    NSDictionary *_hashIndex;
    NSIndexSet *_firstIndexes;
    NSMutableIndexSet *_uniqueResultIndexes;
    id *_duplicateResultHandler;
}




+(id)findUniqueResults:(id)arg0 duplicateResultHandler:(id)arg1 ;
-(id)findUniqueResults;
-(id)initWithResults:(id)arg0 duplicateResultHandler:(id)arg1 ;
-(void)generateHashes;
-(void)indexHashes;
-(void)removeDuplicateResults;
-(void)resolveDuplicatesWithinIndexes:(id)arg0 ;


@end


#endif