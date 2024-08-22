// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREUSABLEBUFFERPOOL_H
#define CSREUSABLEBUFFERPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CSReusableBufferPoolConfiguration.h"

@interface CSReusableBufferPool : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _numberOfBackingStores;
    NSMutableArray *_recycledBackingStores;
}


@property (readonly, nonatomic) CSReusableBufferPoolConfiguration *configuration; // ivar: _configuration


-(BOOL)_canCreateNewBackingStore;
-(id)_createNewBackingStore;
-(id)_getAvailableBackingStore;
-(id)dataWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_checkIdleBackingStores;
-(void)_recycleUsedBackingStore:(id)arg0 ;
-(void)cleanup;
-(void)handleUsedBackingStore:(id)arg0 ;


@end


#endif