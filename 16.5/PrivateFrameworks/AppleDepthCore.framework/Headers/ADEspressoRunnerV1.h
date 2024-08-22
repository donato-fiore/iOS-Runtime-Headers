// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADESPRESSORUNNERV1_H
#define ADESPRESSORUNNERV1_H

@protocol ADEspressoRunnerProtocol;

#import <Foundation/Foundation.h>


@interface ADEspressoRunnerV1 : NSObject <ADEspressoRunnerProtocol>

 {
    *void _ctx;
    *void _plan;
    ? _net;
    int _engineType;
    int _storageType;
    unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> _pixelBuffersToBindAsVImage;
    unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> _pixelBuffersToBindDirect;
    unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> _pixelBuffersToBindIndirect;
    unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> _pixelBuffersToBindAsEspressoBufferInput;
    unordered_map<std::string, PixelBufferSharedPtr, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, PixelBufferSharedPtr>>> _pixelBuffersToBindAsEspressoBufferOutput;
    BOOL _CPUBindWA;
}




-(?)registerPixelBufferPtrforDescriptor;
-(?)updateFeedbackLoopInputBuffer:(?)arg0 inputDescriptor:(?)arg1 outputBufferoutputDescriptor;
-(BOOL)isCVPixelBufferBindingSupportedForFormat:(unsigned int)arg0 ;
-(BOOL)isDirectBindingSupportedForFormat:(unsigned int)arg0 ;
-(BOOL)isVImageBindingSupportedForFormat:(unsigned int)arg0 ;
-(NSInteger)execute;
-(NSInteger)registerIOSurface:(struct __IOSurface *)arg0 forDescriptor:(id)arg1 ;
-(NSInteger)registerPixelBuffer:(struct __CVBuffer *)arg0 forDescriptor:(id)arg1 ;
-(id)initWithPath:(id)arg0 forEngine:(NSUInteger)arg1 configurationName:(id)arg2 ;
-(id)networkVersionString;
-(id)registerDescriptor:(id)arg0 ;
-(int)bindPixelBufferAsVImage:(struct __CVBuffer *)arg0 toBlob:(char *)arg1 ;
-(struct __CVBuffer *)createAndRegisterPixelBufferForDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)unlockAllVImageBindBuffers;


@end


#endif