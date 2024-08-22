// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHCAPTURECONTEXT_H
#define MPSGRAPHCAPTURECONTEXT_H

@class NSDictionary, NSMutableArray, NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface MPSGraphCaptureContext : NSObject {
    NSDictionary *_jsonData;
    NSMutableArray *_nodes;
    NSMutableArray *_links;
    NSMutableArray *_portLinks;
    NSMutableArray *_data;
    NSMutableArray *_functions;
    NSArray *_inputPorts;
    NSArray *_outputPorts;
    *void _context;
    NSMutableDictionary *_pipelineReflectionDictionary;
    NSMutableDictionary *_pipelineFunctionNameDictionary;
    NSMutableDictionary *_pipelineFileNameDictionary;
    NSMutableDictionary *_constantBuffers;
    NSMutableDictionary *_lastNodeWrittingToBuffer;
    NSString *_outputFolderPath;
    NSString *_graphName;
    BOOL _doNotWriteJsonFile;
}




-(id)addFunctionWithBitCode:(id)arg0 metalFunctionName:(id)arg1 reflection:(id)arg2 ;
-(id)constantBufferName:(id)arg0 ;
-(id)dataWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)functionNameForPipeline:(id)arg0 ;
-(id)initWithOutputFolderPath:(id)arg0 graphName:(id)arg1 ;
-(id)reflectionForPipeline:(id)arg0 ;
-(id)wrapComputeEncoder:(id)arg0 ;
-(void)addPipeline:(id)arg0 functionName:(id)arg1 withReflection:(id)arg2 ;
-(void)createNodeWithDispatchInfo:(id)arg0 encoderContext:(*void)arg1 ;
-(void)dealloc;
-(void)setConstantBuffer:(id)arg0 ;
-(void)setFeeds:(id)arg0 names:(id)arg1 ;
-(void)setInputBuffers:(id)arg0 names:(id)arg1 ;
-(void)setOutputBuffers:(id)arg0 names:(id)arg1 ;
-(void)setResults:(id)arg0 names:(id)arg1 ;
-(void)writeToJsonFile:(struct __sFILE *)arg0 ;
-(void)writejsonFile:(id)arg0 ;


@end


#endif