// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADESPRESSORUNNERV2_H
#define ADESPRESSORUNNERV2_H

@class NSPointerArray, NSString;
@protocol ADEspressoRunnerProtocol;

#import <Foundation/Foundation.h>


@interface ADEspressoRunnerV2 : NSObject <ADEspressoRunnerProtocol>

 {
    NSPointerArray *_dummyOperations;
    *e5rt_execution_stream _dummyStream;
    NSString *_path;
    NSString *_defaultFunctionName;
}


@property (readonly, nonatomic) NSString *networkVersionString; // ivar: _networkVersionString
@property *e5rt_execution_stream_operation operation; // ivar: _operation
@property *e5rt_execution_stream stream; // ivar: _stream


-(?)registerIOSurface:(?)arg0 forSurfacePortsurfaceDesc;
-(?)registerIOSurfaceforTensorPort;
-(?)registerPixelBufferPtr:(?)arg0 forDescriptorforSurfacePort;
-(?)registerPixelBufferPtr:(?)arg0 forDescriptorforTensorPort;
-(?)registerPixelBufferPtr:(?)arg0 forDescriptorusingOperation;
-(?)registerPixelBufferPtrforDescriptor;
-(?)updateFeedbackLoopInputBuffer:(?)arg0 inputDescriptor:(?)arg1 outputBufferoutputDescriptor;
-(BOOL)isSamePixelFormat:(unsigned int)arg0 e5rtFormat:(int)arg1 ;
-(NSInteger)execute;
-(NSInteger)prewireSurfaces:(id)arg0 toDescriptors:(id)arg1 ;
-(NSInteger)registerIOSurface:(struct __IOSurface *)arg0 forDescriptor:(id)arg1 ;
-(NSInteger)registerIOSurface:(struct __IOSurface *)arg0 forDescriptor:(id)arg1 usingOperation:(struct e5rt_execution_stream_operation *)arg2 ;
-(NSInteger)registerPixelBuffer:(struct __CVBuffer *)arg0 forDescriptor:(id)arg1 ;
-(id)initWithPath:(id)arg0 forEngine:(NSUInteger)arg1 configurationName:(id)arg2 ;
-(id)registerDescriptor:(id)arg0 ;
-(struct __CVBuffer *)createAndRegisterPixelBufferForDescriptor:(id)arg0 ;
-(struct e5rt_io_port *)retainPortForDescriptor:(id)arg0 usingOperation:(struct e5rt_execution_stream_operation *)arg1 ;
-(void)dealloc;


@end


#endif