// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRDFILEREADER_H
#define SCRDFILEREADER_H

@class NSThread, NSFileHandle;
@protocol SCRDFileReaderDelegate;

#import <Foundation/Foundation.h>


@interface SCRDFileReader : NSObject {
    id<SCRDFileReaderDelegate> *_delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}




-(BOOL)hasStarted;
-(BOOL)isValid;
-(id)initWithDelegate:(id)arg0 fileHandle:(id)arg1 ;
-(void)_readHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithWait:(BOOL)arg0 ;
-(void)start;


@end


#endif