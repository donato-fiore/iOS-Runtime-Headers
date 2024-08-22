// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SYZLIBSTREAMINTERNAL_H
#define _SYZLIBSTREAMINTERNAL_H

@class SYStreamGuts;
@protocol NSLocking;



@interface _SYZlibStreamInternal : SYStreamGuts <NSLocking>

 {
    z_stream_s _zStream;
    NSUInteger _inputSize;
    NSUInteger _outputSize;
    char * _input;
    char * _output;
    NSUInteger _writeOffset;
    NSUInteger _readOffset;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) *void inputPtr;
@property (readonly, nonatomic) NSInteger inputRoom;
@property (readonly, nonatomic) NSInteger outputAvailable;
@property (readonly, nonatomic) *void outputPtr;


-(NSInteger)readOutputToBuffer:(*void)arg0 length:(NSInteger)arg1 ;
-(NSInteger)readOutputToStream:(id)arg0 ;
-(NSInteger)writeInputFromBuffer:(*void)arg0 length:(NSInteger)arg1 ;
-(NSInteger)writeInputFromStream:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)setInputSize:(NSInteger)arg0 ;
-(void)setOutputSize:(NSInteger)arg0 ;
-(void)setStatusForStream:(id)arg0 ;
-(void)setZlibError:(int)arg0 forStream:(id)arg1 ;
-(void)synchronized:(id)arg0 ;
-(void)unlock;


@end


#endif