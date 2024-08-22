// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSITEMETADATAIMAGECACHE_H
#define WBSSITEMETADATAIMAGECACHE_H

@class NSMutableDictionary, NSMutableSet, WBSCoalescedAsynchronousWriter, NSURL;
@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;

#import <Foundation/Foundation.h>

#import "WBSCacheRetainReleasePolicy.h"

@interface WBSSiteMetadataImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    os_unfair_lock_s _cacheAccessLock;
    atomic<bool> _terminating;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableSet *_missingImageKeyStrings;
    NSMutableDictionary *_keyStringRequestsToCompletionHandlers;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
    NSUInteger _fileProtectionOptions;
}


@property (weak) NSObject<WBSSiteMetadataImageCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSURL *imageDirectoryURL; // ivar: _imageDirectoryURL
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic, getter=isTerminating) BOOL terminating;


-(BOOL)_internalDidLoadImageAndShouldNotify:(id)arg0 forKeyString:(id)arg1 fromDisk:(BOOL)arg2 ;
-(BOOL)isImageRetainedForKeyString:(id)arg0 ;
-(NSInteger)_internalImageStateForKeyString:(id)arg0 ;
-(NSInteger)imageStateForKeyString:(id)arg0 ;
-(id)_cacheSettingsFileURL;
-(id)_diskAccessQueueName;
-(id)_fileLocationForKeyString:(id)arg0 ;
-(id)_fileNameForKeyString:(id)arg0 ;
-(id)_internalQueueName;
-(id)imageForKeyString:(id)arg0 getImageState:(*NSInteger)arg1 ;
-(id)init;
-(id)initWithImageDirectoryURL:(id)arg0 imageType:(NSInteger)arg1 ;
-(id)initWithImageDirectoryURL:(id)arg0 imageType:(NSInteger)arg1 fileProtectionOptions:(NSUInteger)arg2 ;
-(id)settingForKey:(id)arg0 ;
-(void)_didLoadImage:(id)arg0 forKeyString:(id)arg1 fromDisk:(BOOL)arg2 ;
-(void)_dispatchDiskAccessBlock:(id)arg0 ;
-(void)_emptyCacheDirectory;
-(void)_internalPurgeUnneededImages;
-(void)_internalReleaseImageForKeyString:(id)arg0 ;
-(void)_internalRemoveAllImages;
-(void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg0 ;
-(void)_internalSaveImageToDisk:(id)arg0 forKeyString:(id)arg1 completionHandler:(id)arg2 ;
-(void)_internalSetImageState:(NSInteger)arg0 forKeyString:(id)arg1 ;
-(void)_internalSetUpImageCache;
-(void)_notifyDidFinishLoadingSettings;
-(void)_removeImagesPassingTest:(id)arg0 ;
-(void)_requestImageForKeyString:(id)arg0 completionHandler:(id)arg1 ;
-(void)emptyCache;
-(void)getImageForKeyString:(id)arg0 completionHandler:(id)arg1 ;
-(void)purgeUnneededImages;
-(void)releaseImageForKeyString:(id)arg0 ;
-(void)releaseImageWithKeyStringProvider:(id)arg0 ;
-(void)releaseImagesForKeyStrings:(id)arg0 ;
-(void)removeAllImages;
-(void)removeImagesFromCacheForKeyStrings:(id)arg0 ;
-(void)retainImageForKeyString:(id)arg0 ;
-(void)retainImageWithKeyStringProvider:(id)arg0 ;
-(void)retainImagesForKeyStrings:(id)arg0 ;
-(void)saveImageToDisk:(id)arg0 forKeyString:(id)arg1 completionHandler:(id)arg2 ;
-(void)savePendingChangesBeforeTermination;
-(void)setImage:(id)arg0 forKeyString:(id)arg1 ;
-(void)setImageState:(NSInteger)arg0 forKeyString:(id)arg1 ;
-(void)setSetting:(id)arg0 forKey:(id)arg1 ;
-(void)setUpImageCache;


@end


#endif