// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDCACHEDELETESERVICE_H
#define FPDCACHEDELETESERVICE_H


#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager; // ivar: _extensionManager


+(int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg0 ;
-(BOOL)getVolume:(*int)arg0 forPath:(id)arg1 ;
-(BOOL)shouldSearchableItem:(id)arg0 beEvictedAtUrgency:(int)arg1 ;
-(id)allStorageVolumes;
-(id)evictableByProviderDomainID:(int)arg0 activity:(id)arg1 ;
-(id)nonPurgableSpacePerProviderOnVolume:(id)arg0 ;
-(id)purgableSpaceForAllUrgenciesOnVolume:(id)arg0 activity:(id)arg1 ;
-(id)queryWithAttributes:(id)arg0 ;
-(id)volumesByProviderDomain;
-(void)dumpStateTo:(id)arg0 ;
-(void)enumerateFPFSDomainsUsingBlock:(id)arg0 ;
-(void)enumerateProviderDomainOnVolume:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePurgeableFilesOnVolume:(id)arg0 forUrgency:(int)arg1 sizeOnly:(BOOL)arg2 activity:(id)arg3 handler:(id)arg4 ;
-(void)evictItems:(id)arg0 ;
-(void)registerActivity;
-(void)start;


@end


#endif