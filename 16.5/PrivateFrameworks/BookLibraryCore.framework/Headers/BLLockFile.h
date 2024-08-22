// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLLOCKFILE_H
#define BLLOCKFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BLLockFile : NSObject {
    int _fd;
    NSUInteger _backgroundTaskIdentifier;
    BOOL _hasBackgroundTask;
}


@property (readonly, nonatomic) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(id)backgroundTaskDelegate;
+(id)iTunesSyncLockFile;
+(id)iTunesSyncLockFilePath;
+(void)setBackgroundTaskDelegate:(id)arg0 ;
-(BOOL)_lock:(BOOL)arg0 blocking:(BOOL)arg1 ;
-(BOOL)lock:(BOOL)arg0 ;
// -(BOOL)lockWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)tryLock:(BOOL)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)_registerBackgroundTask;
-(void)_unregisterBackgroundTask;
-(void)dealloc;
-(void)unlock;


@end


#endif