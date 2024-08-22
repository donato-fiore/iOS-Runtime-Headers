// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMEMORYCACHEDBACKINGSTORE_H
#define DNDSMEMORYCACHEDBACKINGSTORE_H

@class NSString;
@protocol DNDSBackingStoreDelegate, DNDSCachedBackingStore, DNDSBackingStore, DNDSBackingStoreRecord, DNDSCachedBackingStoreDelegate;

#import <Foundation/Foundation.h>


@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSCachedBackingStore>

 {
    id<DNDSBackingStore> *_underlyingBackingStore;
    id<DNDSBackingStoreRecord> *_cache;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSCachedBackingStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)writeRecord:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)writeRecord:(id)arg0 writePartition:(BOOL)arg1 error:(*id)arg2 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)initWithUnderlyingBackingStore:(id)arg0 ;
-(id)readRecordWithError:(*id)arg0 ;
-(void)purgeCache;


@end


#endif