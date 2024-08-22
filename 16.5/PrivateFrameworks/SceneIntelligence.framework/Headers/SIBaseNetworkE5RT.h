// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIBASENETWORKE5RT_H
#define SIBASENETWORKE5RT_H

@class NSString, NSArray;
@protocol SINetworkProtocol;

#import <Foundation/Foundation.h>

#import "SINetworkConfiguration.h"

@interface SIBaseNetworkE5RT : NSObject <SINetworkProtocol>

 {
    *e5rt_execution_stream_operation _enabled_e5rt_operation;
    *e5rt_execution_stream _stream;
    unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> _e5rt_operation_names;
    unordered_map<std::string, SIE5RTPort *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SIE5RTPort *>>> _inputs;
    unordered_map<std::string, SIE5RTPort *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SIE5RTPort *>>> _outputs;
    unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> _quantizationRatios;
    NSString *_e5Path;
    NSString *_network_name;
    NSString *_networkVersion;
    NSString *_enabled_e5rt_operation_name;
    SINetworkConfiguration *_configuration;
    NSArray *_opsForLibrary;
    BOOL _isPrepared;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)getInputPtr:(id)arg0 ;
-(*void)getRawOutput:(id)arg0 ;
-(BOOL)outputExists:(id)arg0 ;
-(BOOL)prepare;
-(BOOL)runNetwork;
-(BOOL)supportFloat16IO;
-(BOOL)supportZeroCopyOutput;
-(BOOL)switchConfiguration:(id)arg0 ;
-(NSUInteger)getInputChannels:(id)arg0 ;
-(NSUInteger)getInputHeight:(id)arg0 ;
-(NSUInteger)getInputLength:(id)arg0 ;
-(NSUInteger)getInputWidth:(id)arg0 ;
-(NSUInteger)getOutputBatchNum:(id)arg0 ;
-(NSUInteger)getOutputChannels:(id)arg0 ;
-(NSUInteger)getOutputHeight:(id)arg0 ;
-(NSUInteger)getOutputLength:(id)arg0 ;
-(NSUInteger)getOutputRowElements:(id)arg0 ;
-(NSUInteger)getOutputWidth:(id)arg0 ;
-(id)createE5RTException;
-(id)getOpsForLibrary;
-(id)getOutputShape;
-(id)initWithNetName:(id)arg0 ;
-(id)initWithNetPath:(id)arg0 ;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(id)networkVersion;
-(void)_setupMetaDataFromLibrary;
-(void)dealloc;
-(void)setInput:(id)arg0 fromCVPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)setInput:(id)arg0 fromRawPointer:(*void)arg1 ;
-(void)setOutputBlob:(id)arg0 forOutputSurface:(struct __IOSurface *)arg1 ;


@end


#endif