// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYSANDBOX_H
#define CKVOCABULARYSANDBOX_H

@class NSString;
@protocol OS_dispatch_queue, CKVDonatorProvider, CKVSearcherProvider;

#import <Foundation/Foundation.h>

#import "CKVAuxiliaryFilesystemBase.h"
#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVocabularySandbox : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_sandboxBaseName;
    CKVAuxiliaryFilesystemBase *_base;
    BOOL _sandboxIsSaved;
}


@property (readonly, nonatomic) NSObject<CKVDonatorProvider> *donatorProvider; // ivar: _donatorProvider
@property (readonly, nonatomic) CKVIndexManager *indexManager; // ivar: _indexManager
@property (readonly, nonatomic) NSString *sandboxId; // ivar: _sandboxId
@property (readonly, nonatomic) NSObject<CKVSearcherProvider> *searcherProvider; // ivar: _searcherProvider
@property (readonly, nonatomic) CKVSettings *settings; // ivar: _settings
@property (nonatomic) CGFloat synchronousDonatorTimeout; // ivar: _synchronousDonatorTimeout


+(id)_sandboxBaseNameWithId:(id)arg0 ;
+(id)_sandboxWithRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 error:(*id)arg2 ;
+(id)loadWithSandboxId:(id)arg0 error:(*id)arg1 ;
+(id)sandboxWithRawSpeechProfile:(id)arg0 error:(*id)arg1 ;
+(id)sandboxWithRawSpeechProfile:(id)arg0 rawSpeechProfileMetadata:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)_donateVocabularyItemsOfClass:(Class)arg0 originAppId:(id)arg1 fromRawSpeechProfile:(id)arg2 metadata:(id)arg3 error:(*id)arg4 ;
-(BOOL)_saveSettings;
-(NSInteger)synchronousDonatorWithOriginAppId:(id)arg0 replaceAllVocabularyOfClass:(Class)arg1 withVocabulary:(id)arg2 ;
-(id)_loadSavedSettings;
-(id)donatorWithOriginAppId:(id)arg0 ;
-(id)init;
-(id)initWithSandboxId:(id)arg0 sandboxIsSaved:(BOOL)arg1 settings:(id)arg2 ;
-(id)initWithSettings:(id)arg0 ;
-(id)save;
-(id)searcher;
-(void)dealloc;
-(void)reset;


@end


#endif