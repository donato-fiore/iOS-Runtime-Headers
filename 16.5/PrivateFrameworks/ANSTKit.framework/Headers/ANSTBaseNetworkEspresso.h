// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANSTBASENETWORKESPRESSO_H
#define ANSTBASENETWORKESPRESSO_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface ANSTBaseNetworkEspresso : NSObject {
    NSString *_netPath;
    unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> _outputBufferMap;
    unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> _outputPixelBufMap;
    unordered_map<std::string, std::vector<unsigned long>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> _expectedDimensions;
    unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> _input_espresso_buffer;
    BOOL _isPrepared;
}


@property (readonly, nonatomic) *void context; // ivar: _context
@property (retain, nonatomic) NSSet *disabledOutputSet; // ivar: _disabledOutputSet
@property (nonatomic) BOOL enablePreprocess; // ivar: _enablePreprocess
@property (readonly, nonatomic) NSInteger engineType; // ivar: _engineType
@property (readonly, nonatomic) ? network; // ivar: _network
@property (retain, nonatomic) NSString *networkMode; // ivar: _networkMode
@property (readonly, nonatomic) *void plan; // ivar: _plan
@property (nonatomic) ? preprocessor; // ivar: _preprocessor
@property (nonatomic) BOOL useManagedBuffers; // ivar: _useManagedBuffers


+(BOOL)supportsANE;
+(id)tracingEntryFormat;
-(*void)getRawOutput:(id)arg0 ;
-(BOOL)bindNetworkInputWithEspressoBuffer:(struct ? *)arg0 withInputName:(id)arg1 ;
-(BOOL)buildPlan;
-(BOOL)initContext;
-(BOOL)initMLNetwork;
-(BOOL)initNetwork;
-(BOOL)initNetworkOutput;
-(BOOL)initPlan;
-(BOOL)isUsingANE;
-(BOOL)prepare;
-(BOOL)runNetwork;
-(BOOL)supportFloat16IO;
-(BOOL)supportZeroCopyOutput;
-(BOOL)switchConfiguration:(id)arg0 ;
-(BOOL)validateNetworkOutputDimension;
-(NSUInteger)getInputChannels:(id)arg0 ;
-(NSUInteger)getInputHeight:(id)arg0 ;
-(NSUInteger)getInputLength:(id)arg0 ;
-(NSUInteger)getInputWidth:(id)arg0 ;
-(NSUInteger)getOutputChannels:(id)arg0 ;
-(NSUInteger)getOutputHeight:(id)arg0 ;
-(NSUInteger)getOutputLength:(id)arg0 ;
-(NSUInteger)getOutputRowElements:(id)arg0 ;
-(NSUInteger)getOutputWidth:(id)arg0 ;
-(id)description;
-(id)getOpsForLibrary;
-(id)initWithNetworkEngine:(NSInteger)arg0 networkName:(id)arg1 ;
-(id)initWithNetworkPath:(id)arg0 engine:(NSInteger)arg1 networkMode:(id)arg2 directAccessOutputBuffer:(BOOL)arg3 ;
-(id)tracingEntry;
-(struct ? *)createEsressoTensorDimension:(*NSUInteger)arg0 dtype:(int)arg1 ;
-(struct ? *)getTensorByName:(char *)arg0 ;
-(struct CGSize )getResolutionByBlobName:(char *)arg0 ;
-(struct __CVBuffer *)getOutPixelBufferByName:(char *)arg0 ;
-(void)bindNetworkInputWithImage:(struct __CVBuffer *)arg0 withInputName:(id)arg1 ;
-(void)bindNetworkOutput:(char *)arg0 ;
-(void)cleanUpOutputPixelBufferMap;
-(void)dealloc;
-(void)getBlobDimensionByName:(char *)arg0 andDestination:(*NSUInteger)arg1 ;
-(void)initPreprocess;
-(void)postSetup;
-(void)preSetup;
-(void)setExpectedDimension:(char *)arg0 andDimension:(*NSUInteger)arg1 ;
-(void)setInput:(id)arg0 fromCVPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)setInput:(id)arg0 fromRawPointer:(*void)arg1 ;
-(void)setOutputBlob:(id)arg0 forOutputSurface:(struct __IOSurface *)arg1 ;
-(void)updateOutputBlobMap;


@end


#endif