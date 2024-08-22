// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTORAGECACHEDELETE_H
#define STSTORAGECACHEDELETE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface STStorageCacheDelete : NSObject {
    int _cdNotifyToken;
    os_unfair_lock_s _updateLock;
    NSInteger _totalPurgeable;
    NSDictionary *_itemsDict;
    BOOL _inited;
}




+(id)sharedMonitor;
-(NSInteger)totalPurgeable;
-(id)cacheDeleteDict;
-(id)init;
-(void)dealloc;
-(void)refreshPurgeableSpace;
-(void)startMonitor;
-(void)stopMonitor;


@end


#endif