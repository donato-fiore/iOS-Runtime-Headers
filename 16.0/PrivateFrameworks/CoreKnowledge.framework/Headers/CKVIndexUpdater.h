// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVINDEXUPDATER_H
#define CKVINDEXUPDATER_H


#import <Foundation/Foundation.h>

#import "CKVInstanceInfoLog.h"
#import "CKVItemRecordUpdater.h"
#import "CKVFTSRecordUpdater.h"
#import "CKVSkitUpdater.h"
#import "CKVDiffUpdateCache.h"

@interface CKVIndexUpdater : NSObject {
    CKVInstanceInfoLog *_instanceLog;
    CKVItemRecordUpdater *_itemUpdater;
    CKVFTSRecordUpdater *_ftsUpdater;
    CKVSkitUpdater *_skitUpdater;
    id *_completion;
    unsigned int _storedItemCount;
    unsigned int _addOrUpdateCount;
    unsigned int _removeCount;
    unsigned short _options;
    NSUInteger _rankCounter;
    NSInteger _itemType;
    CKVDiffUpdateCache *_diffUpdateCache;
}


@property (readonly, nonatomic) unsigned short incrementalErrorCode; // ivar: _incrementalErrorCode
@property (nonatomic) BOOL updateStatus; // ivar: _updateStatus
@property (readonly, nonatomic) unsigned short updaterOptions; // ivar: _updaterOptions


+(BOOL)_rebuildSkitWithAllVocabularyForUser:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 ;
+(id)updaterForRequest:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 timeout:(CGFloat)arg3 ;
-(BOOL)addOrUpdateItems:(id)arg0 ;
-(BOOL)finish;
-(BOOL)isIncremental;
-(BOOL)isPriorDatasetRanked;
-(BOOL)isRanked;
-(BOOL)removeItemId:(id)arg0 ;
-(NSUInteger)_incrementRank;
-(NSUInteger)priorVersion;
-(id)initWithRequest:(id)arg0 settings:(id)arg1 instanceLog:(id)arg2 database:(id)arg3 skit:(id)arg4 completion:(id)arg5 ;
-(id)initWithRequest:(id)arg0 updaterOptions:(unsigned short)arg1 errorCode:(unsigned short)arg2 instanceLog:(id)arg3 itemUpdater:(id)arg4 ftsUpdater:(id)arg5 skitUpdater:(id)arg6 options:(unsigned short)arg7 completion:(id)arg8 ;
-(id)modifiedFieldTypes;
-(void)_complete;
-(void)_deleteAllItems;
-(void)_deleteStaleItems;
-(void)_diffUpdateItems:(id)arg0 ;
-(void)_insertAllItems:(id)arg0 ;
-(void)_logSkitUpdate;
-(void)abort;


@end


#endif