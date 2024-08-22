// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPLIBRARYKEEPLOCALSTATUSOBSERVERDETAILEDCONTAINERCONFIGURATION_H
#define MPLIBRARYKEEPLOCALSTATUSOBSERVERDETAILEDCONTAINERCONFIGURATION_H

@class NSArray;


#import "MPLibraryKeepLocalStatusObserverConfiguration.h"

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

@property (nonatomic) NSInteger downloadEnabledItemCount; // ivar: _downloadEnabledItemCount
@property (nonatomic) NSInteger nonPurgeableItemCount; // ivar: _nonPurgeableItemCount
@property (copy, nonatomic) NSArray *pendingItemIdentifiers; // ivar: _pendingItemIdentifiers
@property (nonatomic) NSInteger redownloadableItemCount; // ivar: _redownloadableItemCount


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif