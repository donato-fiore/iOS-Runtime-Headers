// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _XRDTRACESTACKTRACE_H
#define _XRDTRACESTACKTRACE_H


#import <Foundation/Foundation.h>


@interface _XRDTraceStackTrace : NSObject {
    NSUInteger _numStoredFrames;
}


@property (readonly, nonatomic) unsigned int maxStackDepth; // ivar: _maxStackDepth
@property (readonly, nonatomic) NSUInteger numFrames; // ivar: _numFrames
@property (readonly, nonatomic) unsigned int pid; // ivar: _pid
@property (readonly, nonatomic) *NSUInteger stackFrames; // ivar: _stackFrames


-(char *)readNextStackTraceFromBuffer:(char *)arg0 withLength:(NSUInteger)arg1 ;
-(id)initWithMaxStackDepth:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif