// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOBUGCAPTURECACHEDELETE_H
#define AUTOBUGCAPTURECACHEDELETE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "DiagnosticStorageManager.h"

@interface AutoBugCaptureCacheDelete : NSObject {
    NSString *logArchivePath;
    NSMutableArray *purgedFilePaths;
}


@property (retain, nonatomic) DiagnosticStorageManager *storageManager; // ivar: _storageManager


-(id)cacheDeletePeriodicWithInfo:(struct __CFDictionary *)arg0 ;
-(id)initWithStorageManager:(id)arg0 ;
-(id)replyCacheDeleteDictionaryWithCDInfo:(id)arg0 amount:(NSUInteger)arg1 ;
-(void)initCacheDeletePurgeMonitor;
-(void)processPurgedFilesForCDEvents:(id)arg0 ;
-(void)registerCallbacks:(char *)arg0 ;


@end


#endif