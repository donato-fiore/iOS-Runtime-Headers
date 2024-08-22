// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMIMAGECACHE_H
#define ICDOCCAMIMAGECACHE_H

@class NSURL, NSMutableDictionary;
@protocol DCDataCryptorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DCLRUCache.h"

@interface ICDocCamImageCache : NSObject

@property (readonly, nonatomic) NSURL *cachesDirectoryURL; // ivar: _cachesDirectoryURL
@property (retain, nonatomic) NSObject<DCDataCryptorDelegate> *dataCryptorDelegate; // ivar: _dataCryptorDelegate
@property (readonly, nonatomic) NSURL *docCamImageDirectoryURL; // ivar: _docCamImageDirectoryURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue; // ivar: _imageCacheQueue
@property (retain, nonatomic) NSMutableDictionary *imageSizeCache; // ivar: _imageSizeCache
@property (retain, nonatomic) DCLRUCache *inMemoryImageCache; // ivar: _inMemoryImageCache


-(BOOL)deleteAllImages;
-(BOOL)deleteImage:(id)arg0 ;
-(BOOL)makeSureScanDirectoryExists:(*id)arg0 ;
-(BOOL)replaceImage:(id)arg0 metaData:(id)arg1 uuid:(id)arg2 ;
-(BOOL)writeImage:(id)arg0 metaData:(id)arg1 toURL:(id)arg2 error:(*id)arg3 ;
-(id)createNSDataFrom:(id)arg0 metaData:(id)arg1 ;
-(id)getImage:(id)arg0 ;
-(id)getImageURL:(id)arg0 ;
-(id)getImageURL:(id)arg0 async:(BOOL)arg1 ;
-(id)imagePropertiesFromMetadata:(id)arg0 orientation:(NSInteger)arg1 ;
-(id)init;
-(id)initWithDataCryptorDelegate:(id)arg0 ;
-(id)initWithDataCryptorDelegate:(id)arg0 cachesDirectoryURL:(id)arg1 ;
-(id)setImage:(id)arg0 metaData:(id)arg1 ;
-(id)setImage:(id)arg0 metaData:(id)arg1 addToMemoryCache:(BOOL)arg2 ;
-(struct CGSize )getImageSize:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)clearInMemoryCache;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;


@end


#endif