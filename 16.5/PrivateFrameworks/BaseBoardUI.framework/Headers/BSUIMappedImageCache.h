// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIMAPPEDIMAGECACHE_H
#define BSUIMAPPEDIMAGECACHE_H

@class NSString, NSMutableDictionary, NSMutableSet;
@protocol BSDescriptionProviding, BSDebugDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSUIMappedImageCacheOptions.h"

@interface BSUIMappedImageCache : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding>

 {
    NSString *_path;
    NSString *_uniqueIdentifier;
    BSUIMappedImageCacheOptions *_options;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_keysToImagesOrFutures;
    NSMutableSet *_queue_allKeys;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_imageForKey:(id)arg0 withCPBitmapReadFlags:(int)arg1 generatingIfNecessaryWithBlock:(id)arg2 ;
-(id)allKeys;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)imageForKey:(id)arg0 ;
-(id)imageForKey:(id)arg0 generatingIfNecessaryWithBlock:(id)arg1 ;
// -(id)imageForKey:(id)arg0 generatingIfNecessaryWithBlock:(id)arg1 completion:(unk)arg2  ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 options:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_noteExternalChangeForKey:(id)arg0 ;
-(void)_setImage:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)_setImage:(id)arg0 forKey:(id)arg1 withPersistenceOptions:(NSUInteger)arg2 andCPBitmapReadFlags:(int)arg3 ;
-(void)_warmupImageForKey:(id)arg0 ;
-(void)dealloc;
-(void)releaseRecoverableResources;
-(void)removeAllImagesWithCompletion:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeImageForKey:(id)arg0 ;
-(void)removeImageForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)setImage:(id)arg0 forKey:(id)arg1 ;
-(void)setImage:(id)arg0 forKey:(id)arg1 withCompletion:(id)arg2 ;
-(void)setImage:(id)arg0 forKey:(id)arg1 withPersistenceOptions:(NSUInteger)arg2 ;
-(void)setImage:(id)arg0 forKey:(id)arg1 withPersistenceOptions:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif