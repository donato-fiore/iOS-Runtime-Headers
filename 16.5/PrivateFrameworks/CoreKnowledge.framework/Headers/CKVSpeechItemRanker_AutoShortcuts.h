// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSPEECHITEMRANKER_AUTOSHORTCUTS_H
#define CKVSPEECHITEMRANKER_AUTOSHORTCUTS_H

@class NSMutableDictionary;


#import "CKVSpeechItemRanker.h"

@interface CKVSpeechItemRanker_AutoShortcuts : CKVSpeechItemRanker {
    NSMutableDictionary *_datasetDict;
}




-(BOOL)addDataset:(id)arg0 ;
-(BOOL)enumerateRankedItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)hasDatasets;
-(id)datasets;
-(id)initWithDatabase:(id)arg0 ;


@end


#endif