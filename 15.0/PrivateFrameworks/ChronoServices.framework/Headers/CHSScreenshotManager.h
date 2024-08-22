// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSSCREENSHOTMANAGER_H
#define CHSSCREENSHOTMANAGER_H

@class NSURL, NSFileManager;

#import <Foundation/Foundation.h>


@interface CHSScreenshotManager : NSObject

@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSFileManager *fileManager; // ivar: _fileManager


+(id)sharedManager;
-(id)URLForWidget:(id)arg0 metrics:(id)arg1 inColorScheme:(NSInteger)arg2 createIntermediateDirectories:(BOOL)arg3 ;
-(id)initWithDirectory:(id)arg0 fileManager:(id)arg1 ;
-(id)snapshotContextForWidget:(id)arg0 metrics:(id)arg1 inColorScheme:(NSInteger)arg2 ;
-(void)deleteAllCachedScreenshots;


@end


#endif