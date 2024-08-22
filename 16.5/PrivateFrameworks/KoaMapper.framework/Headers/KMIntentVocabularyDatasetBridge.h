// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMINTENTVOCABULARYDATASETBRIDGE_H
#define KMINTENTVOCABULARYDATASETBRIDGE_H

@class NSString, NSArray, KVItemMapper;
@protocol KMProviderDatasetBridge;

#import <Foundation/Foundation.h>

#import "KMIntentVocabularyStoreManager.h"
#import "KMIntentVocabularyAuthorization.h"

@interface KMIntentVocabularyDatasetBridge : NSObject <KMProviderDatasetBridge>

 {
    NSString *_appId;
    NSArray *_intentSlots;
    KMIntentVocabularyStoreManager *_storeManager;
    KMIntentVocabularyAuthorization *_authorization;
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