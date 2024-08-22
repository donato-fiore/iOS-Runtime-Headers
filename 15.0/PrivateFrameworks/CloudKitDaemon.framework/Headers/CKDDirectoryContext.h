// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDDIRECTORYCONTEXT_H
#define CKDDIRECTORYCONTEXT_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CKDDirectoryContext : NSObject

@property (readonly, nonatomic) NSURL *assetDbDirectory; // ivar: _assetDbDirectory
@property (readonly, nonatomic) NSURL *containerCloudKitDirectory; // ivar: _containerCloudKitDirectory
@property (readonly, nonatomic) NSURL *containerDirectory; // ivar: _containerDirectory
@property (readonly, nonatomic) NSURL *daemonCachesDirectory; // ivar: _daemonCachesDirectory
@property (readonly, nonatomic) NSURL *fileDownloadDirectory; // ivar: _fileDownloadDirectory
@property (readonly, nonatomic) NSURL *fileStagingDirectory; // ivar: _fileStagingDirectory
@property (readonly, nonatomic) NSURL *frameworkCachesDirectory; // ivar: _frameworkCachesDirectory
@property (readonly, nonatomic) NSURL *mmcsWorkingDirectory; // ivar: _mmcsWorkingDirectory
@property (readonly, nonatomic) NSURL *packageStagingDirectory; // ivar: _packageStagingDirectory
@property (readonly, nonatomic) NSURL *recordCacheDirectory; // ivar: _recordCacheDirectory
@property (readonly, nonatomic) NSURL *temporaryDirectory; // ivar: _temporaryDirectory


-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)applicationCachesDirectoryForDataContainerDirectory:(id)arg0 usingHomeCachesDirectory:(BOOL)arg1 ;
-(id)description;
-(id)initWithContainer:(id)arg0 ;
-(id)initWithTestRootDirectory:(id)arg0 ;


@end


#endif