// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSPEECHITEMRANKER_LINK_H
#define CKVSPEECHITEMRANKER_LINK_H

@class NSMutableDictionary, NSSet;


#import "CKVSpeechItemRanker.h"

@interface CKVSpeechItemRanker_Link : CKVSpeechItemRanker {
    NSMutableDictionary *_oovRecords;
    NSMutableDictionary *_dynamicRecords;
    NSSet *_dynamicTermDenyList;
}




+(BOOL)enumerateItemsWithError:(*id)arg0 capacityAllocation:(id)arg1 items:(id)arg2 upperBounds:(id)arg3 totalCapacity:(NSUInteger)arg4 database:(id)arg5 usingBlock:(id)arg6 ;
-(BOOL)addDataset:(id)arg0 ;
-(BOOL)enumerateDynamicItemsWithError:(*id)arg0 capacityAllocation:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateOOVItemsWithError:(*id)arg0 capacityAllocation:(id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateRankedItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)hasDatasets;
-(id)allocateCapacity;
-(id)datasets;
-(id)description;
-(id)dynamicTermsDataset;
-(id)fairItemCountPerAppForRecords:(id)arg0 itemCounts:(id)arg1 threshold:(NSUInteger)arg2 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)itemCountsForRecords:(id)arg0 ;
-(id)oovTermsDataset;


@end


#endif