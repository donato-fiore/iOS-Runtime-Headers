// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKACCELERATIONBUFFEREDFILEWRITER_H
#define BRKACCELERATIONBUFFEREDFILEWRITER_H

@class NSMutableArray, NSString;
@protocol BRKAccelerationWriter;


#import "BRKWriter.h"

@interface BRKAccelerationBufferedFileWriter : BRKWriter <BRKAccelerationWriter>

 {
    NSMutableArray *_values;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_lock_close;
-(void)_lock_writeX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 timestamp:(CGFloat)arg3 ;
-(void)close;
-(void)writeX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 timestamp:(CGFloat)arg3 ;


@end


#endif