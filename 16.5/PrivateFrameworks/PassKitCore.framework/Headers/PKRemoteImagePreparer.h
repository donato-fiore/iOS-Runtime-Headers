// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEIMAGEPREPARER_H
#define PKREMOTEIMAGEPREPARER_H

@class NSCache, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKRemoteImagePreparer : NSObject {
    NSCache *_preparedImageCache;
    os_unfair_lock_s _completionsLock;
    NSMutableDictionary *_completionHandlers;
    NSObject<OS_dispatch_queue> *_workQueue;
}




-(id)init;
-(void)fetchRemoteImage:(id)arg0 completion:(id)arg1 ;
-(void)fetchRemoteImage:(id)arg0 preheatBitmap:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchRemoteImage:(id)arg0 scaleToSize:(struct CGSize )arg1 preheatBitmap:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif