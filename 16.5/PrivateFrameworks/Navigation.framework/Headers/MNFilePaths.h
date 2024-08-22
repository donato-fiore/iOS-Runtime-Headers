// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNFILEPATHS_H
#define MNFILEPATHS_H


#import <Foundation/Foundation.h>


@interface MNFilePaths : NSObject



+(BOOL)createFolderIfNotPresent:(id)arg0 error:(*id)arg1 ;
+(id)_cachesDirectoryPath;
+(id)_homeDirectoryPath;
+(id)navTempDirectoryPath;
+(id)navTraceExtension;
+(id)navTracesDirectoryPath;
+(id)navdCacheDirectoryPath;
+(id)routeHandleExtension;


@end


#endif