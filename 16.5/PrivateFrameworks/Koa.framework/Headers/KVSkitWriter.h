// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSKITWRITER_H
#define KVSKITWRITER_H

@class NSURL, NSMutableDictionary;
@protocol KVSkitWriteAccess;

#import <Foundation/Foundation.h>


@interface KVSkitWriter : NSObject <KVSkitWriteAccess>

 {
    NSURL *_directoryURL;
    NSMutableDictionary *_info;
    unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> _indexer;
    BOOL _inTransaction;
    NSInteger _transactionLocale;
}


@property (readonly, nonatomic) NSUInteger flushThreshold; // ivar: _flushThreshold


+(void)initialize;
-(BOOL)_beginTransactionWithError:(*id)arg0 ;
-(BOOL)_loadLocaleWithError:(*id)arg0 ;
-(BOOL)_saveLocaleWithError:(*id)arg0 ;
-(BOOL)addVocabularyItemWithBuffer:(id)arg0 originAppId:(id)arg1 recordId:(id)arg2 error:(*id)arg3 ;
-(BOOL)cleanup:(*id)arg0 ;
-(BOOL)clearWithError:(*id)arg0 ;
-(BOOL)commitChanges:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isSupportedItemType:(NSInteger)arg0 ;
-(BOOL)removeVocabularyItemWithRecordId:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackChanges:(*id)arg0 ;
-(BOOL)setTransactionLocale:(NSInteger)arg0 assetPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldMerge:(*BOOL)arg0 error:(*id)arg1 ;
-(NSInteger)_indexLocale;
-(NSInteger)indexLocale;
-(id)init;
-(id)initWithSkitDirectoryURL:(id)arg0 dataProtectionClass:(int)arg1 flushThreshold:(NSUInteger)arg2 ;
-(void)_resetTransactionSate;


@end


#endif