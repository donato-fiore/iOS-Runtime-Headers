// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACERECORD_H
#define DTDTRACERECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DTDTraceRecord : NSObject

@property (retain, nonatomic) NSString *consoleMessage; // ivar: _consoleMessage
@property (nonatomic) char * eventText; // ivar: _eventText
@property (nonatomic) NSUInteger eventTextLength; // ivar: _eventTextLength
@property (nonatomic) *NSUInteger kernelStackFrames; // ivar: _kernelStackFrames
@property (nonatomic) NSUInteger numKernelFrames; // ivar: _numKernelFrames
@property (nonatomic) NSUInteger numUserFrames; // ivar: _numUserFrames
@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) *NSUInteger userStackFrames; // ivar: _userStackFrames




@end


#endif