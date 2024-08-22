// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPEREXPORTPROGRESS_H
#define PUWALLPAPEREXPORTPROGRESS_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PUWallpaperExportProgress : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, nonatomic) NSMutableDictionary *downloadProgress; // ivar: _downloadProgress
@property (readonly, nonatomic) NSMutableDictionary *processingProgress; // ivar: _processingProgress
@property (readonly, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) CGFloat totalWork; // ivar: _totalWork


-(id)init;
-(id)initWithAssetUUIDs:(id)arg0 progressHandler:(id)arg1 ;
-(void)_updateProgressValue:(CGFloat)arg0 forAssetUUID:(id)arg1 inDictionary:(id)arg2 ;
-(void)begin;
-(void)finish;
-(void)reportDownloadProgress:(CGFloat)arg0 forAssetUUID:(id)arg1 ;
-(void)reportProcessingProgress:(CGFloat)arg0 forAssetUUID:(id)arg1 ;


@end


#endif