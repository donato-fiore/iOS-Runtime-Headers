// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONCRETEFILEHANDLE_H
#define NSCONCRETEFILEHANDLE_H

@protocol OS_dispatch_source, OS_dispatch_data, OS_dispatch_queue, OS_dispatch_io;


#import "NSFileHandle.h"

@interface NSConcreteFileHandle : NSFileHandle {
    os_unfair_lock_s _lock;
    uint8_t _error;
    uint8_t _resultSocket;
    NSObject<OS_dispatch_source> *_dsrc;
    NSObject<OS_dispatch_data> *_resultData;
    NSObject<OS_dispatch_queue> *_fhQueue;
    NSObject<OS_dispatch_io> *_readChannel;
    id *_readabilityHandler;
    id *_writeabilityHandler;
    NSObject<OS_dispatch_source> *_readMonitoringSource;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
    int _fd;
    uint8_t _flags;
}




-(BOOL)closeAndReturnError:(*id)arg0 ;
-(BOOL)getOffset:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)seekToEndReturningOffset:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)seekToOffset:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeAndReturnError:(*id)arg0 ;
-(BOOL)truncateAtOffset:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)offsetInFile;
-(NSUInteger)readDataOfLength:(NSUInteger)arg0 buffer:(char *)arg1 ;
-(NSUInteger)seekToEndOfFile;
-(id)_monitor:(int)arg0 ;
-(id)availableData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFileDescriptor:(int)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 closeOnDealloc:(BOOL)arg1 ;
-(id)initWithPath:(id)arg0 flags:(NSInteger)arg1 createMode:(NSInteger)arg2 ;
-(id)initWithPath:(id)arg0 flags:(NSInteger)arg1 createMode:(NSInteger)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 flags:(NSInteger)arg1 createMode:(NSInteger)arg2 error:(*id)arg3 ;
-(id)port;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(id)readDataToEndOfFile;
-(id)readDataToEndOfFileAndReturnError:(*id)arg0 ;
-(id)readDataUpToLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)readabilityHandler:(SEL)arg0 ;
-(id)writeabilityHandler:(SEL)arg0 ;
-(int)fileDescriptor;
-(void)_cancelDispatchSources;
-(void)_closeOnDealloc;
// -(void)_locked_clearHandler:(*id)arg0 forSource:(unk)arg1  ;
-(void)acceptConnectionInBackgroundAndNotify;
-(void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg0 ;
-(void)closeFile;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performActivity:(NSInteger)arg0 modes:(id)arg1 ;
-(void)readInBackgroundAndNotify;
-(void)readInBackgroundAndNotifyForModes:(id)arg0 ;
-(void)readToEndOfFileInBackgroundAndNotify;
-(void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg0 ;
-(void)seekToFileOffset:(NSUInteger)arg0 ;
-(void)setPort:(id)arg0 ;
-(void)setReadabilityHandler:(id)arg0 ;
-(void)setWriteabilityHandler:(id)arg0 ;
-(void)synchronizeFile;
-(void)truncateFileAtOffset:(NSUInteger)arg0 ;
-(void)waitForDataInBackgroundAndNotify;
-(void)waitForDataInBackgroundAndNotifyForModes:(id)arg0 ;
-(void)writeData:(id)arg0 ;


@end


#endif