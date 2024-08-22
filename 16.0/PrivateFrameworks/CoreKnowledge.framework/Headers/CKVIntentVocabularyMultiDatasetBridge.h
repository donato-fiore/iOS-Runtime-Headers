// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVINTENTVOCABULARYMULTIDATASETBRIDGE_H
#define CKVINTENTVOCABULARYMULTIDATASETBRIDGE_H

@class KVItemMapper;
@protocol CKVProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>

#import "CKVIntentVocabularyStoreManager.h"
#import "CKVIntentVocabularyAuthorization.h"

@interface CKVIntentVocabularyMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge>

 {
    CKVIntentVocabularyStoreManager *_storeManager;
    CKVIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}




-(id)init;
-(id)initWithStoreManager:(id)arg0 authorization:(id)arg1 ;
-(void)enumerateAllDatasets:(*NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif