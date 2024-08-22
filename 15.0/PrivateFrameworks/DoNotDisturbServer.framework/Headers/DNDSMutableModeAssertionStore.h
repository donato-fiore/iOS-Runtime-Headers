// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMUTABLEMODEASSERTIONSTORE_H
#define DNDSMUTABLEMODEASSERTIONSTORE_H

@class NSArray;


#import "DNDSModeAssertionStore.h"

@interface DNDSMutableModeAssertionStore : DNDSModeAssertionStore

@property (copy, nonatomic) NSArray *assertions;
@property (copy, nonatomic) NSArray *invalidationRequests;
@property (copy, nonatomic) NSArray *invalidations;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)downgradeAssertionsIfNeededForSyncToPairedDevice:(id)arg0 dataSource:(id)arg1 syncManager:(id)arg2 ;
-(void)filterForSyncToPairedDevice:(id)arg0 clientDetailsProvider:(id)arg1 ;
-(void)resolveSourcesForSyncFromPairedDevice:(id)arg0 ;
-(void)sanitizeDatesForThreshold:(id)arg0 ;
-(void)unresolveSourcesForSyncToPairedDevice:(id)arg0 ;
-(void)updateConfigurationModificationDatesWithDataSource:(id)arg0 syncManager:(id)arg1 ;


@end


#endif