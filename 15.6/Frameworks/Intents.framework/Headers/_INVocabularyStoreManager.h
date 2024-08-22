// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INVOCABULARYSTOREMANAGER_H
#define _INVOCABULARYSTOREMANAGER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_INVocabularyValidator.h"

@interface _INVocabularyStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _INVocabularyValidator *_validator;
}


@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (copy, nonatomic) NSString *appBundlePath; // ivar: _appBundlePath
@property (readonly, copy, nonatomic) NSString *baseDirectoryPath; // ivar: _baseDirectoryPath


+(id)_customVocabularyDirectory;
+(id)_globalClassQueue;
+(id)_hashOfAppPath:(id)arg0 ;
+(id)_latestVocabularyStringsAt:(id)arg0 ;
+(id)appDatastoreDirectoryForAppBundleID:(id)arg0 bundlePath:(id)arg1 ;
+(id)managerForBundleID:(id)arg0 bundlePath:(id)arg1 ;
+(id)savedCustomVocabularyOverviewDictionary;
+(void)_iterateVocabularyWithSummary:(id)arg0 optionalBlock:(id)arg1 ;
+(void)deleteAllUserVocabularyFromAllAppsAsync;
+(void)enumerateVocabularyUsingBlock:(id)arg0 ;
-(id)_baseDirectoryPathForIntentSlot:(id)arg0 ;
-(id)_documentWithItems:(id)arg0 forIntentSlot:(id)arg1 ;
-(id)_validator;
-(id)deleteEverything;
-(id)deleteIntentSlot:(id)arg0 ;
-(id)deleteVocabularyStoreItemAt:(id)arg0 ;
-(id)getPathToLatestVocabulary:(*id)arg0 pathDuringReading:(*id)arg1 sentVocabulary:(*id)arg2 forIntentSlot:(id)arg3 ;
-(id)init;
-(id)initWithBaseDirectory:(id)arg0 appBundleID:(id)arg1 appBundlePath:(id)arg2 ;
-(void)_writeLatestVocabularyItems:(id)arg0 forIntentSlot:(id)arg1 completion:(id)arg2 ;
-(void)checkIfSyncSlot:(id)arg0 isAllowedWithCompletion:(id)arg1 ;
-(void)writeLatestVocabularyItems:(id)arg0 forIntentSlot:(id)arg1 completion:(id)arg2 ;


@end


#endif