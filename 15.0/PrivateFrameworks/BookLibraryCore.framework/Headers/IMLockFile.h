// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMLOCKFILE_H
#define IMLOCKFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMLockFile : NSObject {
    int _fd;
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
-(void)dealloc;
-(void)unlock;


@end


#endif