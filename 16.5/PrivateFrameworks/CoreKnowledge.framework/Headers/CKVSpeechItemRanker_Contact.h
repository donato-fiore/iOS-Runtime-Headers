// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVSPEECHITEMRANKER_CONTACT_H
#define CKVSPEECHITEMRANKER_CONTACT_H

@protocol KVPriorRetriever;


#import "CKVSpeechItemRanker.h"

@interface CKVSpeechItemRanker_Contact : CKVSpeechItemRanker {
    NSObject<KVPriorRetriever> *_priorRetriever;
}




-(BOOL)addDataset:(id)arg0 ;
-(BOOL)enumerateRankedItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 priorRetriever:(id)arg1 ;


@end


#endif