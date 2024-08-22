// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTIMAGECACHE_H
#define PXIMPORTIMAGECACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXImportImageCache : NSObject {
    unsigned short _imageFormat;
    NSMutableDictionary *_caches;
    NSObject<OS_dispatch_queue> *_cacheTableQueue;
}




+(id)sharedInstance;
-(id)cacheTableForIdentifier:(id)arg0 ;
-(id)imageForIdentifer:(id)arg0 ;
-(id)imageForModel:(id)arg0 ofSize:(NSUInteger)arg1 allowLowerResolutions:(BOOL)arg2 foundSize:(*NSUInteger)arg3 ;
-(id)init;
-(void)accessImageTableForIdentifier:(id)arg0 withChangeBlock:(id)arg1 ;
-(void)configureWithFormat:(unsigned short)arg0 ;
-(void)imageForIdentifer:(id)arg0 completion:(id)arg1 ;
-(void)imageForModel:(id)arg0 ofSize:(NSUInteger)arg1 allowLowerResolutions:(BOOL)arg2 completion:(id)arg3 ;
-(void)removeCacheForIdentifiers:(id)arg0 ;
-(void)setImage:(id)arg0 forIdentifier:(id)arg1 ;
-(void)setImage:(id)arg0 forIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)tearDown;


@end


#endif