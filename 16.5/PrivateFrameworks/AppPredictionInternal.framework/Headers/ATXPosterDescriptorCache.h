// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERDESCRIPTORCACHE_H
#define ATXPOSTERDESCRIPTORCACHE_H

@class ATXGenericFileBasedCache, _PASLock, NSSet, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXPosterDescriptorCache : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_outputQueue;
}


@property (readonly, copy, nonatomic) NSSet *allDescriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptors;


+(id)sharedInstance;
-(id)_readDescriptorsFromDisk;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_writeDescriptorsToDisk:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateDescriptors:(id)arg0 ;


@end


#endif