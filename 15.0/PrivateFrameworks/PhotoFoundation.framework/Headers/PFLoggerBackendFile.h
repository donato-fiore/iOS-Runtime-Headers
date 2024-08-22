// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLOGGERBACKENDFILE_H
#define PFLOGGERBACKENDFILE_H

@class NSDateFormatter, NSFileHandle;


#import "PFLoggerBackendAdapter.h"

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {
    NSDateFormatter *_dateFormatter;
}


@property (retain) NSFileHandle *fileHandle; // ivar: _fileHandle
@property BOOL isStandardErrorFileBackend; // ivar: _isStandardErrorFileBackend
@property BOOL shouldCloseFileHandle; // ivar: _shouldCloseFileHandle


+(id)backendsFromUserDefaultsWithLogLevel:(int)arg0 ;
+(id)standardErrorFileBackend;
-(BOOL)outputsToDebuggerConsole;
-(id)initWithFileHandle:(id)arg0 ;
-(id)initWithLogFileURL:(id)arg0 ;
-(id)writeOpenFileAtURL:(id)arg0 ;
-(void)dealloc;
-(void)logFromCodeLocation:(struct ? )arg0 facility:(id)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 format:(id)arg5 args:(char *)arg6 ;


@end


#endif