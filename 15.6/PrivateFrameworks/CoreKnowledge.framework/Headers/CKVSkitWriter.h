// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSKITWRITER_H
#define CKVSKITWRITER_H

@class NSURL, NSLocale;
@protocol CKVSkitWriteAccess;

#import <Foundation/Foundation.h>

#import "CKVFilesystemBase.h"

@interface CKVSkitWriter : NSObject <CKVSkitWriteAccess>

 {
    NSURL *_directoryURL;
    CKVFilesystemBase *_base;
    unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> _indexer;
    NSLocale *_skitLocale;
    NSLocale *_transactionLocale;
}


@property (readonly, nonatomic) NSUInteger flushThreshold; // ivar: _flushThreshold


+(void)initialize;
-(BOOL)_loadLocaleWithError:(*id)arg0 ;
-(BOOL)_saveLocaleWithError:(*id)arg0 ;
-(BOOL)_setTransactionLocaleWithAssetPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)addVocabularyItemWithBuffer:(id)arg0 originAppId:(id)arg1 recordId:(id)arg2 error:(*id)arg3 ;
-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)cleanupWithError:(*id)arg0 ;
-(BOOL)clearWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)removeVocabularyItemWithRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(BOOL)setTransactionLocale:(id)arg0 assetPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldMerge:(*BOOL)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSkitDirectoryURL:(id)arg0 filesystemBase:(id)arg1 flushThreshold:(NSUInteger)arg2 ;


@end


#endif