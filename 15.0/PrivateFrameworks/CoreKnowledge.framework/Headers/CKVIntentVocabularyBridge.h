// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVINTENTVOCABULARYBRIDGE_H
#define CKVINTENTVOCABULARYBRIDGE_H

@class NSDictionary, NSString, NSArray;
@protocol CKVProviderMultiDatasetBridge;

#import <Foundation/Foundation.h>

#import "CKVIntentVocabularyStoreManager.h"
#import "CKVIntentVocabularyAuthorization.h"

@interface CKVIntentVocabularyBridge : NSObject <CKVProviderMultiDatasetBridge>

 {
    CKVIntentVocabularyStoreManager *_vocabularyStoreManager;
    CKVIntentVocabularyAuthorization *_vocabularyAuthorization;
    NSDictionary *_allAppsOverview;
    NSString *_currentAppId;
    NSArray *_currentIntentSlots;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateVocabularyItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(Class)itemClass;
-(id)_readAllVocabularyForApp:(id)arg0 withIntentSlots:(id)arg1 ;
-(id)init;
-(id)initWithVocabularyStoreManager:(id)arg0 vocabularyAuthorization:(id)arg1 ;
-(id)originApp;
-(void)enumerateAllDatasets:(*NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif