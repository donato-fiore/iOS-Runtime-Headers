// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKPHOTOLIBRARYMANAGER_H
#define WKPHOTOLIBRARYMANAGER_H

@class NSFileManager, PHPhotoLibrary, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WKPhotoLibraryManager : NSObject

@property (retain, nonatomic) NSFileManager *_fileManager; // ivar: __fileManager
@property (retain, nonatomic) PHPhotoLibrary *_systemPhotoLibrary; // ivar: __systemPhotoLibrary
@property (retain, nonatomic) NSUserDefaults *_userDefaults; // ivar: __userDefaults
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_workHandlerQueue; // ivar: __workHandlerQueue


+(BOOL)_isRunningInPlaygroundSimulator;
+(id)sharedManager;
-(id)_retrieveImageForAsset:(id)arg0 version:(NSInteger)arg1 ;
-(id)_retrieveURLAssetForAsset:(id)arg0 ;
-(id)initWithFileManager:(id)arg0 ;
-(void)_classicRetrieveSystemShellPreviewPayloadForAsset:(id)arg0 completion:(id)arg1 ;
-(void)retrieveSystemShellPreviewPayloadForAsset:(id)arg0 completion:(id)arg1 ;


@end


#endif