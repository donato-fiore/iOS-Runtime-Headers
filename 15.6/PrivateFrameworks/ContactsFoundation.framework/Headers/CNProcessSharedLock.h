// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROCESSSHAREDLOCK_H
#define CNPROCESSSHAREDLOCK_H

@class NSString;
@protocol NSLocking, CNFileServices, CNInhibitor;

#import <Foundation/Foundation.h>


@interface CNProcessSharedLock : NSObject <NSLocking>

 {
    id<NSLocking> *_localLock;
    NSInteger _localLockCount;
    int _fileDescriptor;
    id<CNFileServices> *_fileServices;
}


@property (readonly, copy) NSString *lockFilePath; // ivar: _lockFilePath
@property (copy) NSString *name; // ivar: _name
@property (retain) NSObject<CNInhibitor> *runningBoardInhibitor; // ivar: _runningBoardInhibitor


+(id)os_log;
+(id)recursiveSharedLockWithLockFilePath:(id)arg0 ;
+(id)semaphoreSharedLockWithLockFilePath:(id)arg0 ;
+(id)sharedLockWithLockFilePath:(id)arg0 ;
-(BOOL)ensureFileDescriptorIsInvalid:(id)arg0 ;
-(BOOL)ensureFileIsLocal:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)isValidFileDescriptor;
-(BOOL)open:(*id)arg0 ;
-(BOOL)openLockFile:(id)arg0 ;
-(id)description;
-(id)errorUserInfo;
-(id)errorUserInfoWithDescription:(id)arg0 ;
-(id)exceptionWithName:(id)arg0 reason:(id)arg1 ;
-(id)init;
-(id)initWithLockFilePath:(id)arg0 localLock:(id)arg1 ;
-(id)initWithLockFilePath:(id)arg0 localLock:(id)arg1 fileServices:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)lock;
-(void)lockRetryOnEDEADLK;
-(void)unlock;


@end


#endif