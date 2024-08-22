// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMINTENTVOCABULARYMULTIDATASETBRIDGE_H
#define KMINTENTVOCABULARYMULTIDATASETBRIDGE_H

@class KVItemMapper;
@protocol KMProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>

#import "KMIntentVocabularyStoreManager.h"
#import "KMIntentVocabularyAuthorization.h"

@interface KMIntentVocabularyMultiDatasetBridge : NSObject <KMProviderMultiDatasetBridge>

 {
    KMIntentVocabularyStoreManager *_storeManager;
    KMIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}




-(id)init;
-(id)initWithStoreManager:(id)arg0 authorization:(id)arg1 ;
-(void)enumerateAllDatasets:(*NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif