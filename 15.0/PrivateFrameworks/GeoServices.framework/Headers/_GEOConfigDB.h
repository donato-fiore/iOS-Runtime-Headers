// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCONFIGDB_H
#define _GEOCONFIGDB_H

@class GEOConfigCache;


#import "GEOSQLiteDB.h"
#import "_GEOConfigDBOperationQueue.h"

@interface _GEOConfigDB : GEOConfigCache {
    uint8_t _lastId;
}


@property (readonly, nonatomic) *unk addFunction; // ivar: _addFunction
@property (readonly, nonatomic) *unk clearFunction; // ivar: _clearFunction
@property (readonly, nonatomic) GEOSQLiteDB *db; // ivar: _db
@property (readonly, nonatomic) _GEOConfigDBOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) *unk setFunction; // ivar: _setFunction


-(NSInteger)nextId;
-(id)init:(id)arg0 cache:(id)arg1 operationQueue:(id)arg2 clearFunction:(*unk)arg3 setFunction:(*unk)arg4 addFunction:(*unk)arg5 tableName:(id)arg6 ;


@end


#endif