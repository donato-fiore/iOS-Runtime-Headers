// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSYNDICATIONRESOURCEPREFETCHMANAGER_H
#define PLSYNDICATIONRESOURCEPREFETCHMANAGER_H

@protocol PLSyndicationResourcePrefetchManagerDelegate;

#import <Foundation/Foundation.h>


@interface PLSyndicationResourcePrefetchManager : NSObject

@property (readonly, weak, nonatomic) NSObject<PLSyndicationResourcePrefetchManagerDelegate> *delegate; // ivar: _delegate


-(id)_resourcesForPrefetchWithManagedObjectContext:(id)arg0 predicate:(id)arg1 ;
-(id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg0 ;
-(void)prefetchResourceWithObjectID:(id)arg0 completion:(id)arg1 ;


@end


#endif