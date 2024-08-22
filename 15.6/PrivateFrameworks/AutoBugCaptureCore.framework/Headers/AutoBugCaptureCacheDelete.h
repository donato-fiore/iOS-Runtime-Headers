// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUTOBUGCAPTURECACHEDELETE_H
#define AUTOBUGCAPTURECACHEDELETE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "DiagnosticStorageManager.h"

@interface AutoBugCaptureCacheDelete : NSObject {
    NSString *logArchivePath;
}


@property (retain, nonatomic) DiagnosticStorageManager *storageManager; // ivar: _storageManager


-(NSUInteger)allowableDiskUsageSizeForUrgency:(int)arg0 ;
-(id)cacheDeletePeriodicWithInfo:(struct __CFDictionary *)arg0 ;
-(id)cacheDeletePurgeWithUrgency:(int)arg0 info:(struct __CFDictionary *)arg1 ;
-(id)cacheDeletePurgeableWithUrgency:(int)arg0 info:(struct __CFDictionary *)arg1 ;
-(id)initWithStorageManager:(id)arg0 ;
-(id)replyCacheDeleteDictionaryWithCDInfo:(id)arg0 amount:(NSUInteger)arg1 ;
-(void)registerCallbacks:(char *)arg0 ;


@end


#endif