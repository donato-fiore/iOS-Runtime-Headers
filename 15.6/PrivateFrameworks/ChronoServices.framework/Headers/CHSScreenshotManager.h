// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSSCREENSHOTMANAGER_H
#define CHSSCREENSHOTMANAGER_H

@class NSURL, NSFileManager;

#import <Foundation/Foundation.h>


@interface CHSScreenshotManager : NSObject {
    NSURL *_baseURL;
    NSFileManager *_threadSafe_fileManager;
}




+(id)sharedManager;
-(id)URLForWidget:(id)arg0 metrics:(id)arg1 attributes:(id)arg2 createIntermediateDirectories:(BOOL)arg3 ;
-(id)initWithDirectory:(id)arg0 fileManager:(id)arg1 ;
-(id)snapshotContextForWidget:(id)arg0 metrics:(id)arg1 attributes:(id)arg2 ;
-(void)deleteAllCachedScreenshots;
-(void)deleteAllCachedScreenshotsExcludingWidgets:(id)arg0 ;
-(void)deleteCachedScreenshotsMatchingWidget:(id)arg0 ;


@end


#endif