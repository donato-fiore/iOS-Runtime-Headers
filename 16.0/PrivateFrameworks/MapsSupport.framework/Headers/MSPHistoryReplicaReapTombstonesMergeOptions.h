// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPHISTORYREPLICAREAPTOMBSTONESMERGEOPTIONS_H
#define MSPHISTORYREPLICAREAPTOMBSTONESMERGEOPTIONS_H

@class NSString, NSDate;
@protocol MSPHistoryReplicaMergeOptions;


#import "MSPReplicaMergeOptionsReapTombstones.h"

@interface MSPHistoryReplicaReapTombstonesMergeOptions : MSPReplicaMergeOptionsReapTombstones <MSPHistoryReplicaMergeOptions>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *earliestKnownSyncDate; // ivar: _earliestKnownSyncDate
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger modificationDatePolicy; // ivar: _modificationDatePolicy
@property (readonly) Class superclass;


-(id)initWithEarliestKnownSyncDate:(id)arg0 modificationDatePolicy:(NSInteger)arg1 ;


@end


#endif