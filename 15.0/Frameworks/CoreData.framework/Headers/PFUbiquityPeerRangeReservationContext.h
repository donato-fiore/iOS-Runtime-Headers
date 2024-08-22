// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYPEERRANGERESERVATIONCONTEXT_H
#define PFUBIQUITYPEERRANGERESERVATIONCONTEXT_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "NSManagedObjectContext.h"
#import "NSPersistentStore.h"
#import "NSPersistentStoreCoordinator.h"

@interface PFUbiquityPeerRangeReservationContext : NSObject {
    NSMutableDictionary *_peerEntityNameRangeStartSet;
    NSMutableDictionary *_globalIDToLocalURI;
    NSMutableArray *_unresolvedGlobalObjectIDs;
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_psc;
    NSMutableDictionary *_storeNameToFetchedMetadata;
    NSArray *_globalObjectIDs;
    NSInteger _numRangesToReserve;
}




-(id)init;
-(id)initWithPersistentStore:(id)arg0 andGlobalObjectIDs:(id)arg1 ;
-(void)dealloc;


@end


#endif