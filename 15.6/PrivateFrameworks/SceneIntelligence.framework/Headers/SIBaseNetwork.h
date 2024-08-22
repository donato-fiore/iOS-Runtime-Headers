// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIBASENETWORK_H
#define SIBASENETWORK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SIBaseNetwork : NSObject {
    NSString *_netPath;
    unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> _outputBufferMap;
    unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> _outputPixelBufMap;
    unordered_map<std::string, std::vector<unsigned long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> _expectedDimensions;
}


@property (readonly, nonatomic) *void context; // ivar: _context
@property (nonatomic) BOOL enablePreprocess; // ivar: _enablePreprocess
@property (readonly, nonatomic) NSInteger engineType; // ivar: _engineType
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) ? network; // ivar: _network
@property (retain, nonatomic) NSString *networkMode; // ivar: _networkMode
@property (readonly, nonatomic) *void plan; // ivar: _plan
@property (nonatomic) ? preprocessor; // ivar: _preprocessor
@property (nonatomic) BOOL useANEZeroCopyInput; // ivar: _useANEZeroCopyInput
@property (nonatomic) BOOL useANEZeroCopyOutput; // ivar: _useANEZeroCopyOutput
@property (nonatomic) BOOL useManagedBuffers; // ivar: _useManagedBuffers


+(BOOL)supportsANE;
-(BOOL)buildPlan;
-(BOOL)initContext;
-(BOOL)initMLNetwork;
-(BOOL)initNetwork;
-(BOOL)initNetworkOutput;
-(BOOL)initPlan;
-(BOOL)isUsingANE;
-(BOOL)isUsingZeroCopyOutput;
-(BOOL)switchConfiguration:(id)arg0 ;
-(BOOL)validateNetworkOutputDimension;
-(NSInteger)getModelOutputPtrByName:(char *)arg0 toDstPtr:(**void)arg1 withRowStride:(*NSUInteger)arg2 ;
-(id)initWithNetworkPath:(id)arg0 andEngine:(NSInteger)arg1 networkMode:(id)arg2 usingManagedBuffers:(BOOL)arg3 ;
-(struct ? *)getTensorByName:(char *)arg0 ;
-(struct CGSize )getResolutionByBlobName:(char *)arg0 ;
-(struct __CVBuffer *)getOutPixelBufferByName:(char *)arg0 ;
-(void)bindNetworkInputWithImage:(struct __CVBuffer *)arg0 withInputName:(id)arg1 ;
-(void)bindNetworkOutput:(char *)arg0 optionalExternalBuffer:(struct __IOSurface *)arg1 ;
-(void)bindNetworkOutput:(char *)arg0 toExternalBuffer:(struct __IOSurface *)arg1 ;
-(void)cleanUpOutputPixelBufferMap;
-(void)dealloc;
-(void)getBlobDimensionByName:(char *)arg0 andDestination:(*NSUInteger)arg1 ;
-(void)initPreprocess;
-(void)postSetup;
-(void)preSetup;
-(void)setExpectedDimension:(char *)arg0 andDimension:(*NSUInteger)arg1 ;
-(void)unlockModelOutputPtrByName:(char *)arg0 ;
-(void)updateOutputBlobMap;


@end


#endif