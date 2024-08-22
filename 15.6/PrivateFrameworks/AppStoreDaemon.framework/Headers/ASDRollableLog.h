// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDROLLABLELOG_H
#define ASDROLLABLELOG_H

@class NSFileHandle;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "ASDLogFileOptions.h"

@interface ASDRollableLog : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CGFloat _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    ASDLogFileOptions *_options;
}


@property (readonly) ASDLogFileOptions *logOptions;


-(id)_activeLogFilePath;
-(id)_logFilePathWithIndex:(NSInteger)arg0 ;
-(id)initWithLogOptions:(id)arg0 ;
-(void)_checkLogFileSize;
-(void)_closeLogFile;
-(void)_openLogFile;
-(void)_rollLogFiles;
-(void)dealloc;
-(void)writeString:(id)arg0 ;


@end


#endif