// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVINTENTVOCABULARYDATASETBRIDGE_H
#define CKVINTENTVOCABULARYDATASETBRIDGE_H

@class NSString, NSArray, KVItemMapper;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>

#import "CKVIntentVocabularyStoreManager.h"
#import "CKVIntentVocabularyAuthorization.h"

@interface CKVIntentVocabularyDatasetBridge : NSObject <CKVProviderDatasetBridge>

 {
    NSString *_appId;
    NSArray *_intentSlots;
    CKVIntentVocabularyStoreManager *_storeManager;
    CKVIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)initWithAppId:(id)arg0 intentSlots:(id)arg1 storeManager:(id)arg2 authorization:(id)arg3 itemMapper:(id)arg4 ;
-(id)originAppId;


@end


#endif