// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWBPROCESSOR_H
#define AWBPROCESSOR_H

@class FigMetalContext, NSMutableDictionary, NSDictionary, NSString, CMIExternalMemoryResource;
@protocol AWBImageBufferProcessor, AWBIBPParams, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "AWBStatistics.h"
#import "AWBAlgorithm.h"

@interface AWBProcessor : NSObject <AWBImageBufferProcessor>

 {
    FigMetalContext *_metalContext;
    NSMutableDictionary *_stats;
    AWBStatistics *_awbStat;
    AWBAlgorithm *_awbAlgo;
    BOOL _configured;
    BOOL _allocatorSetupComplete;
}


@property (readonly, nonatomic) NSObject<AWBIBPParams> *awbParams; // ivar: _awbParams
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource; // ivar: _externalMemoryResource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: _tuningParameters


+(int)calculateSTRBKeyFromWideCamera:(struct ? *)arg0 moduleConfig:(id)arg1 ;
-(int)finishProcessing;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)resetState;
-(int)setup;


@end


#endif