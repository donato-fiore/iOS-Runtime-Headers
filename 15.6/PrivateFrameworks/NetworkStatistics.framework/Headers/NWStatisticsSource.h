// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWSTATISTICSSOURCE_H
#define NWSTATISTICSSOURCE_H

@protocol NWStatisticsSourceDelegate;

#import <Foundation/Foundation.h>

#import "NWStatisticsManager.h"

@interface NWStatisticsSource : NSObject {
    unsigned int _filter;
    nstat_counts _last_counts;
}


@property (readonly) *nstat_counts _nstat_counts;
@property NSUInteger countsSeqno; // ivar: _countsSeqno
@property (retain) NSObject<NWStatisticsSourceDelegate> *delegate; // ivar: _delegate
@property NSUInteger descriptorSeqno; // ivar: _descriptorSeqno
@property (readonly) NWStatisticsManager *manager; // ivar: _manager
@property (readonly) unsigned int provider; // ivar: _provider
@property NSUInteger reference; // ivar: _reference
@property BOOL removing; // ivar: _removing
@property (readonly) NSUInteger snapshotRevision;
@property (readonly) NSUInteger sourceIdentifier;


+(id)createSourceForProvider:(unsigned int)arg0 srcRef:(NSUInteger)arg1 manager:(id)arg2 ;
-(BOOL)_handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;
-(BOOL)handleCounts:(struct nstat_counts *)arg0 ;
-(BOOL)handleMessage:(struct nstat_msg_hdr *)arg0 length:(NSInteger)arg1 ;
-(id)_currentSnapshot;
-(id)currentSnapshot;
-(id)init;
-(id)initWithManager:(id)arg0 source:(NSUInteger)arg1 provider:(unsigned int)arg2 ;
-(int)handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;
-(void)queryCounts;
-(void)queryDescription;
-(void)queryUpdate;


@end


#endif