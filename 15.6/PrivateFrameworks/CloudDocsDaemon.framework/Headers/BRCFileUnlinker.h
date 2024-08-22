// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCFILEUNLINKER_H
#define BRCFILEUNLINKER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BRCFileUnlinker : NSObject {
    uint8_t _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_cachePurgeSource;
    NSString *_unlinkRootPath;
}




-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg0 path:(id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg0 ;
-(id)initWithCacheDirPath:(id)arg0 ;
-(void)_purge;
-(void)dealloc;
-(void)forcePurgeWithCompletionBlock:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif