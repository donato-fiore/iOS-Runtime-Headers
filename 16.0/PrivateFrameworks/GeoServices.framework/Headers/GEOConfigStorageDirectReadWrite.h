// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSTORAGEDIRECTREADWRITE_H
#define GEOCONFIGSTORAGEDIRECTREADWRITE_H

@class NSMutableSet, NSString;
@protocol GEOConfigStorageReadWrite, OS_dispatch_source;


#import "GEOConfigStorageDirectReadOnly.h"

@interface GEOConfigStorageDirectReadWrite : GEOConfigStorageDirectReadOnly <GEOConfigStorageReadWrite>

 {
    os_unfair_lock_s _writeLock;
    id *_writeTransaction;
    NSObject<OS_dispatch_source> *_writeTimer;
    NSMutableSet *_changedKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPath:(id)arg0 forSource:(NSInteger)arg1 ;
-(void)dealloc;
-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif