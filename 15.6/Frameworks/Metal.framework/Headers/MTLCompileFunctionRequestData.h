// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOMPILEFUNCTIONREQUESTDATA_H
#define MTLCOMPILEFUNCTIONREQUESTDATA_H

@class NSArray, MTLFunction, NSDictionary;
@protocol OS_dispatch_data, MTLBinaryArchive, MTLPipelineCache;

#import <Foundation/Foundation.h>


@interface MTLCompileFunctionRequestData : NSObject {
    NSObject<OS_dispatch_data> *_frameworkData;
    NSObject<OS_dispatch_data> *_driverKeyData;
    *PipelineScript _pipelineScript;
}


@property (nonatomic) ? archiveHashKey; // ivar: _archiveHashKey
@property (copy, nonatomic) NSArray *binaryArchives; // ivar: _binaryArchives
@property (retain, nonatomic) NSObject<MTLBinaryArchive> *destinationBinaryArchive; // ivar: _destinationBinaryArchive
@property (nonatomic) NSObject<OS_dispatch_data> *driverKeyData;
@property (nonatomic) NSObject<OS_dispatch_data> *frameworkData;
@property (retain, nonatomic) MTLFunction *function; // ivar: _function
@property (nonatomic) NSUInteger functionOptions; // ivar: _functionOptions
@property (retain, nonatomic) NSObject<MTLPipelineCache> *pipelineCache; // ivar: _pipelineCache
@property (nonatomic) NSUInteger pipelineOptions; // ivar: _pipelineOptions
@property (nonatomic) *void pipelineScript;
@property (copy, nonatomic) NSArray *privateVisibleFunctions; // ivar: _privateVisibleFunctions
@property (nonatomic) BOOL sync; // ivar: _sync
@property (nonatomic) ? vendorPluginFunctionId; // ivar: _vendorPluginFunctionId
@property (copy, nonatomic) NSDictionary *visibleFunctionGroups; // ivar: _visibleFunctionGroups
@property (copy, nonatomic) NSArray *visibleFunctions; // ivar: _visibleFunctions


+(id)newVisibleRequestWithFunction:(id)arg0 descriptor:(id)arg1 ;
-(void)dealloc;


@end


#endif