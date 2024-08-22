// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONNOCONTENTIMAGEFILECACHE_H
#define NTKCOMPLICATIONNOCONTENTIMAGEFILECACHE_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKTaskScheduler.h"

@interface NTKComplicationNoContentImageFileCache : NSObject {
    NSMutableDictionary *_queue_complicationNoContentImages;
    BOOL _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSString *_cacheIdentifier;
}




+(id)sharedInstance;
-(id)imageForClientIdentifier:(id)arg0 family:(NSInteger)arg1 ;
-(id)init;
-(id)noContentImagesForClientIdentifier:(id)arg0 ;
-(void)_dirtyCache;
-(void)_flushCache;
-(void)dealloc;
-(void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg0 ;
-(void)setImage:(id)arg0 forClientIdentifier:(id)arg1 family:(NSInteger)arg2 ;
-(void)setNoContentImages:(id)arg0 forClientIdentifier:(id)arg1 ;


@end


#endif