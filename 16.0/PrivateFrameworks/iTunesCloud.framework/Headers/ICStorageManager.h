// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTORAGEMANAGER_H
#define ICSTORAGEMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICStorageManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, nonatomic) BOOL cachingEnabled;
@property (readonly, nonatomic) NSUInteger storageSpaceAvailable;


+(id)sharedManager;
-(id)init;
-(void)ensureStorageIsAvailable:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif