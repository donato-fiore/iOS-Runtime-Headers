// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPLIBRARYKEEPLOCALSTATUSOBSERVERINDIVIDUALENTITYCONFIGURATION_H
#define MPLIBRARYKEEPLOCALSTATUSOBSERVERINDIVIDUALENTITYCONFIGURATION_H



#import "MPLibraryKeepLocalStatusObserverConfiguration.h"

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

@property (nonatomic, getter=isCollectionType) BOOL collectionType; // ivar: _collectionType
@property (nonatomic) BOOL hasNonPurgeableAsset; // ivar: _hasNonPurgeableAsset
@property (nonatomic) NSInteger managedStatus; // ivar: _managedStatus
@property (nonatomic, getter=isStoreRedownloadable) BOOL storeRedownloadable; // ivar: _storeRedownloadable


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif