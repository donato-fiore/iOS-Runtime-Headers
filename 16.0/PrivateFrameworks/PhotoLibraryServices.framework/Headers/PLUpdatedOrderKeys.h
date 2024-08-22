// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUPDATEDORDERKEYS_H
#define PLUPDATEDORDERKEYS_H

@class NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLUpdatedOrderKeys : NSObject {
    os_unfair_lock_s _lock;
    BOOL _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}


@property (readonly) BOOL isObservingOrderKeys;


-(BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg0 ;
-(BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg0 ;
-(id)_persistentStoresForContext:(id)arg0 ;
-(id)getAndClearUpdatedOrderKeys;
-(id)init;
-(void)persistentStoreDidUpdateOrderKeys:(id)arg0 ;


@end


#endif