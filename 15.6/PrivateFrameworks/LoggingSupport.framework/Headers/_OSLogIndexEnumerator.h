// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _OSLOGINDEXENUMERATOR_H
#define _OSLOGINDEXENUMERATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_OSLogTracepointBuffer.h"
#import "_OSLogIndex.h"
#import "_OSLogCatalogFilter.h"

@interface _OSLogIndexEnumerator : NSObject {
    NSMutableArray *_subchunkStartQ;
    NSMutableArray *_subchunkEndQ;
    NSMutableArray *_catalogStartQ;
    NSMutableArray *_fileStartQ;
    NSMutableArray *_fileEndQ;
    NSMutableArray *_fileBootQ;
    ? _bounds;
    ? _live_bound;
    _OSLogTracepointBuffer *_tracepoints;
    _OSLogIndex *_index;
    _OSLogCatalogFilter *_catalogFilter;
}


@property (readonly, nonatomic) NSMutableArray *oversizeChunks; // ivar: _oversizeChunks


-(id)initWithIndex:(id)arg0 metadata:(struct ? *)arg1 fileBootList:(id)arg2 catalogFilter:(id)arg3 ;
-(void)_initTimesyncBounds:(struct ? *)arg0 ;
-(void)dealloc;
-(void)enumerateTracepointsInRange:(struct os_timesync_range_s *)arg0 timesync:(struct _os_timesync_db_s *)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3 ;


@end


#endif