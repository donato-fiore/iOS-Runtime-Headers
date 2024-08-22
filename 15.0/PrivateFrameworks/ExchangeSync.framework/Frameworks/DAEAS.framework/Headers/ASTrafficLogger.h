// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTRAFFICLOGGER_H
#define ASTRAFFICLOGGER_H

@class NSFileHandle, NSString;

#import <Foundation/Foundation.h>


@interface ASTrafficLogger : NSObject {
    NSFileHandle *_lookasideFileHandle;
    NSString *_lookasideFilePath;
    BOOL _didFlushLogs;
}


@property (nonatomic) BOOL isOutgoingTraffic; // ivar: _isOutgoingTraffic


+(id)_logQueue;
-(void)_moveLogFileContentsAtPath:(id)arg0 ;
-(void)_openLookasideFile;
-(void)dealloc;
-(void)flushLogs;
-(void)logPlainTextData:(id)arg0 ;
-(void)logWBXMLData:(id)arg0 ;


@end


#endif