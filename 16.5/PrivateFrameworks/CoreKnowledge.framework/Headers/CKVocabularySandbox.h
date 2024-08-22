// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVOCABULARYSANDBOX_H
#define CKVOCABULARYSANDBOX_H

@class NSString;
@protocol OS_dispatch_queue, KVDonateServiceProvider, CKVSearcherProvider;

#import <Foundation/Foundation.h>

#import "CKVDonationManager.h"
#import "CKVAuxiliaryFilesystemBase.h"
#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVocabularySandbox : NSObject {
    CKVDonationManager *_donationManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sandboxBaseName;
    CKVAuxiliaryFilesystemBase *_base;
    BOOL _sandboxIsSaved;
}


@property (readonly, nonatomic) NSObject<KVDonateServiceProvider> *donateServiceProvider; // ivar: _donateServiceProvider
@property (readonly, nonatomic) CKVIndexManager *indexManager; // ivar: _indexManager
@property (readonly, nonatomic) NSString *sandboxId; // ivar: _sandboxId
@property (readonly, nonatomic) NSObject<CKVSearcherProvider> *searcherProvider; // ivar: _searcherProvider
@property (readonly, nonatomic) CKVSettings *settings; // ivar: _settings
@property (nonatomic) CGFloat synchronousDonatorTimeout; // ivar: _synchronousDonatorTimeout


+(id)_sandboxBaseNameWithId:(id)arg0 ;
+(id)_sandboxWithRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 error:(*id)arg2 ;
+(id)loadWithSandboxId:(id)arg0 error:(*id)arg1 ;
+(id)sandboxWithProfile:(id)arg0 locale:(id)arg1 error:(*id)arg2 ;
+(id)sandboxWithProfile:(id)arg0 settings:(id)arg1 error:(*id)arg2 ;
+(id)sandboxWithRawSpeechProfile:(id)arg0 error:(*id)arg1 ;
+(id)sandboxWithRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)_saveSettings;
-(NSInteger)synchronousDonatorWithOriginAppId:(id)arg0 replaceAllVocabularyOfClass:(Class)arg1 withVocabulary:(id)arg2 ;
-(id)_loadSavedSettings;
-(id)donatorWithOriginAppId:(id)arg0 ;
-(id)init;
-(id)initWithSandboxId:(id)arg0 sandboxIsSaved:(BOOL)arg1 settings:(id)arg2 ;
-(id)initWithSettings:(id)arg0 ;
-(id)rootDirectoryURL;
-(id)save;
-(id)searcher;
-(id)searcherForUserId:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif