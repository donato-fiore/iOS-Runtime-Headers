// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGEVENTSTREAM_H
#define OSLOGEVENTSTREAM_H

@class NSPredicate;
@protocol OS_dispatch_queue;


#import "OSLogEventStreamBase.h"
#import "_OSLogCatalogFilter.h"
#import "_OSLogIndex.h"
#import "OSLogEventSource.h"

@interface OSLogEventStream : OSLogEventStreamBase

@property (retain, nonatomic) _OSLogCatalogFilter *catalogFilter; // ivar: _catalogFilter
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (nonatomic) NSUInteger flags;
@property (retain, nonatomic) _OSLogIndex *index; // ivar: _index
@property (readonly, nonatomic) OSLogEventSource *source; // ivar: _source
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property (nonatomic) *_os_timesync_db_s tsdb; // ivar: _tsdb


-(?)_activateStreamInRange;
-(id)_initWithSource:(id)arg0 flags:(NSUInteger)arg1 ;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSource:(id)arg0 skipNonSignpostFiles:(BOOL)arg1 ;
-(void)_activateStreamFromTimeIntervalSinceLastBoot:(CGFloat)arg0 ;
-(void)_foreachIndexFile:(id)arg0 ;
-(void)activateStreamFromDate:(id)arg0 ;
-(void)activateStreamFromLastBoot;
-(void)activateStreamFromPosition:(id)arg0 ;
-(void)dealloc;


@end


#endif