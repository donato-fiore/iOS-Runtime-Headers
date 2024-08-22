// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMAGECACHE_H
#define PHIMAGECACHE_H

@class NSMutableDictionary;
@protocol PHImageCacheDelegate;

#import <Foundation/Foundation.h>

#import "PHRecyclableObjectVendor.h"

@interface PHImageCache : NSObject {
    NSMutableDictionary *_backingDictionary;
    NSMutableDictionary *_uncommittedInserts;
    NSMutableDictionary *_uncommittedDeletes;
    os_unfair_lock_s _lock;
    PHRecyclableObjectVendor *_entryVendor;
}


@property (weak, nonatomic) NSObject<PHImageCacheDelegate> *delegate; // ivar: _delegate


-(BOOL)pinEntryForKey:(id)arg0 requestID:(int)arg1 inFlightRequestID:(*int)arg2 ;
-(BOOL)populateEntryWithImage:(struct CGImage *)arg0 requestID:(int)arg1 forKey:(id)arg2 additionalInfo:(id)arg3 ;
-(id)init;
-(void)_didReceiveMemoryWarningNotification:(id)arg0 ;
-(void)_removeEntry:(id)arg0 ;
-(void)commitChangesWithQueueToProcessDeletes:(id)arg0 ;
// -(void)queryEntryForKey:(id)arg0 didWaitForInFlightRequest:(*BOOL)arg1 didFindImage:(*BOOL)arg2 entryIsValidBlock:(id)arg3 resultHandler:(unk)arg4  ;
-(void)removeAllEntries;
-(void)removeEntriesForKeys:(id)arg0 ;


@end


#endif