// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMINTENTVOCABULARYSTOREMANAGER_H
#define KMINTENTVOCABULARYSTOREMANAGER_H


#import <Foundation/Foundation.h>


@interface KMIntentVocabularyStoreManager : NSObject



-(id)resolveIntentSlotsForApp:(id)arg0 fromAllAppsOverview:(id)arg1 ;
-(id)savedCustomVocabularyOverviewDictionary;
-(id)storedVocabularyForApp:(id)arg0 intentSlot:(id)arg1 ;


@end


#endif