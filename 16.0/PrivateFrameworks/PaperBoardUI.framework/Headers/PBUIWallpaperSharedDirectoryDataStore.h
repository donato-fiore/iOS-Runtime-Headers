// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIWALLPAPERSHAREDDIRECTORYDATASTORE_H
#define PBUIWALLPAPERSHAREDDIRECTORYDATASTORE_H



#import "PBUIWallpaperDirectoryDataStore.h"

@interface PBUIWallpaperSharedDirectoryDataStore : PBUIWallpaperDirectoryDataStore



+(id)defaultDirectoryURL;
-(id)directoryCreationAttributes;
-(id)initWithDirectoryURL:(id)arg0 ;
-(void)didWriteFileToURL:(id)arg0 ;


@end


#endif