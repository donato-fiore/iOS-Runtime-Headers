// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVINTENTVOCABULARYSTOREMANAGER_H
#define CKVINTENTVOCABULARYSTOREMANAGER_H


#import <Foundation/Foundation.h>


@interface CKVIntentVocabularyStoreManager : NSObject



-(id)resolveIntentSlotsForApp:(id)arg0 fromAllAppsOverview:(id)arg1 ;
-(id)savedCustomVocabularyOverviewDictionary;
-(id)storedVocabularyForApp:(id)arg0 intentSlot:(id)arg1 ;


@end


#endif