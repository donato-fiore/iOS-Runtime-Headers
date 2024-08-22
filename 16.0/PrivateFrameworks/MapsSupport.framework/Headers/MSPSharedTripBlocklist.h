// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPSHAREDTRIPBLOCKLIST_H
#define MSPSHAREDTRIPBLOCKLIST_H

@class NSMutableSet, NSUbiquitousKeyValueStore, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSPSharedTripBlocklist : NSObject {
    NSMutableSet *_blockIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSUbiquitousKeyValueStore *_kvStore;
    NSDate *_lastUpdateDate;
}




-(BOOL)containsAnyIdentifiersInArray:(id)arg0 ;
-(BOOL)containsIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_loadIdentifiers;
-(void)_storeIdentifiers;
-(void)blockIdentifier:(id)arg0 ;
-(void)clearList;
-(void)unblockIdentifiers:(id)arg0 ;
-(void)updateBlockedListFromStore:(id)arg0 ;


@end


#endif