// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRKACCELERATIONFILEWRITER_H
#define BRKACCELERATIONFILEWRITER_H

@class NSOutputStream, NSString;
@protocol BRKAccelerationWriter;


#import "BRKWriter.h"

@interface BRKAccelerationFileWriter : BRKWriter <BRKAccelerationWriter>

 {
    NSOutputStream *_outputStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_lock_close;
-(void)_lock_openWithDataCount:(NSUInteger)arg0 ;
-(void)_lock_writeX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 timestamp:(CGFloat)arg3 ;
-(void)close;
-(void)openWithDataCount:(NSUInteger)arg0 ;
-(void)writeX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 timestamp:(CGFloat)arg3 ;


@end


#endif