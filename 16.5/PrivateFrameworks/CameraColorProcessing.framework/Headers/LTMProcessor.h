// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTMPROCESSOR_H
#define LTMPROCESSOR_H

@class FigMetalContext, NSDictionary, NSString, CMIExternalMemoryResource;
@protocol LTMImageBufferProcessor, LTMIBPParams, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "LTMComputeProxy.h"
#import "LTMStats.h"
#import "LTMGeometryData.h"

@interface LTMProcessor : NSObject <LTMImageBufferProcessor>

 {
    FigMetalContext *_metalContext;
    NSUInteger _allocatorForceSize;
    BOOL _allocatorWireMemory;
    BOOL _allocatorSetupComplete;
    LTMComputeProxy *_computeLTM;
    LTMStats *_statLTM;
    sCLRProcHITHStat _procHITHStat;
    unsigned short thumbnailStat;
    unsigned short localHistStat;
    unsigned int globalHistStat;
    LTMGeometryData *_geometryData;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource; // ivar: _externalMemoryResource
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<LTMIBPParams> *ltmParams; // ivar: _ltmParams
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: tuningParameters


-(id)_computeLTMForRGBImage;
-(id)_updateOutputMetadata:(id)arg0 ;
-(id)initWithCommandQueue:(id)arg0 ;
-(int)finishProcessing;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)resetState;
-(int)setup;
-(struct sCLRProcHITHStat *)getHITHStat;
-(void)_addAverageLTMToMetadata:(id)arg0 ;
-(void)_addLTMCurveToMetadata:(id)arg0 ;
-(void)_addLTMEnabledToMetadata:(id)arg0 ;
-(void)_addLocalClippingDataToMetadata:(id)arg0 ;
-(void)_addLocalHistToMetadata:(id)arg0 ;
-(void)_addSoftDGainToMetadata:(id)arg0 ;
-(void)_addSoftLTMToMetadata:(id)arg0 ;
-(void)_addSpatialCCMDataToMetadata:(id)arg0 ;
-(void)_readDefaults;
-(void)_readDefaultsLTMparam;


@end


#endif