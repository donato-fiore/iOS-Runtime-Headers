// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSYNDICATIONRESOURCEPREFETCHMANAGER_H
#define PLSYNDICATIONRESOURCEPREFETCHMANAGER_H

@protocol PLSyndicationResourcePrefetchManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLSyndicationResourcePrefetchManager : NSObject

@property (readonly, weak, nonatomic) NSObject<PLSyndicationResourcePrefetchManagerDelegate> *delegate; // ivar: _delegate


-(id)_fetchDownloadThrottlingDateAndClearIfNeededWithManagedObjectContext:(id)arg0 ;
-(id)_resourcesForPrefetchWithManagedObjectContext:(id)arg0 predicate:(id)arg1 ;
-(id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg0 ;
-(void)_handleDownloadFinishedWithSuccess:(BOOL)arg0 error:(id)arg1 resource:(id)arg2 downloadThrottlingDate:(id)arg3 networkAccessAllowed:(BOOL)arg4 managedObjectContext:(id)arg5 ;
-(void)_prepareResourceForPrefetch:(id)arg0 ;
-(void)prefetchResourceWithObjectID:(id)arg0 completion:(id)arg1 ;
-(void)prefetchResourceWithObjectIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif