// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVQUEUE_H
#define HVQUEUE_H

@class _PASLock, NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface HVQueue : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_semaphore> *_contentConsumedSemaphore;
    BOOL _contentExpectedFromMultipleApps;
}


@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)cleanupWithError:(*id)arg0 shouldContinueBlock:(id)arg1 ;
-(BOOL)deleteContentWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)dequeueContent:(*id)arg0 dataSourceContentState:(id)arg1 minimumLevelOfService:(unsigned char)arg2 inMemoryItemsOnly:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)dequeuedContentConsumedWithError:(*id)arg0 ;
-(BOOL)dequeuedContentNotConsumed:(id)arg0 error:(*id)arg1 ;
-(BOOL)enqueueContent:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)diskStorageStreamCount;
-(id)initWithIdentifier:(id)arg0 biomeStream:(id)arg1 memoryLimit:(short)arg2 contentProtection:(id)arg3 contentExpectedFromMultipleApps:(BOOL)arg4 ;
-(id)statsWithError:(*id)arg0 ;
-(id)uniqueIdentifiersInDiskStorage;
-(id)uniqueIdentifiersInMemoryStorage;
-(unsigned char)waitForDequeuedContentConsumedWithTimeout:(CGFloat)arg0 ;


@end


#endif