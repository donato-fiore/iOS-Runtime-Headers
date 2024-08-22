// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSLOGENUMERATORCATALOG_H
#define _OSLOGENUMERATORCATALOG_H

@class NSString;
@protocol _OSLogIndexTimeRangable;

#import <Foundation/Foundation.h>

#import "_OSLogIndex.h"
#import "_OSLogChunkStore.h"

@interface _OSLogEnumeratorCatalog : NSObject <_OSLogIndexTimeRangable>

 {
    _NSRange _chunkRange;
}


@property (readonly, nonatomic) char * bootUUID;
@property (readonly, nonatomic) *catalog_s catalog; // ivar: _catalog
@property (readonly, nonatomic) *tracev3_chunk_s chunk; // ivar: _chunk
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger endTime; // ivar: _et
@property (readonly, nonatomic) *tracev3_chunk_s fileHeader; // ivar: _fileHeader
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) _OSLogIndex *index; // ivar: _index
@property (readonly, nonatomic) NSUInteger oldestTime; // ivar: _ot
@property (readonly, nonatomic) _OSLogChunkStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)initWithStore:(id)arg0 index:(id)arg1 fileHeader:(struct tracev3_chunk_s *)arg2 range:(struct _NSRange )arg3 chunk:(struct tracev3_chunk_s *)arg4 ;
-(void)dealloc;
-(void)enumerateSubchunksUsingBlock:(id)arg0 ;
-(void)unionWithRange:(struct _NSRange )arg0 ;


@end


#endif