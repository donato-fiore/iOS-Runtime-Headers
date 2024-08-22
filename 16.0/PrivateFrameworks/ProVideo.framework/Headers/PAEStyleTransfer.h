// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAESTYLETRANSFER_H
#define PAESTYLETRANSFER_H

@class NSString, TwoNetsStyleTransfer, EspressoImage2Image;


#import "PAEFilterDefaultBase.h"

@interface PAEStyleTransfer : PAEFilterDefaultBase {
    NSString *_modelName;
    BOOL _gpuDefaultsLoaded;
    BOOL _firstModelLoadLog;
    HGRef<HStyleTransfer_ANE::RenderContext> _aneRenderContext;
}


@property (retain, nonatomic) TwoNetsStyleTransfer *aneNetwork; // ivar: _aneNetwork
@property (nonatomic) CGFloat currentAspectRatio; // ivar: _currentAspectRatio
@property (nonatomic) NSInteger currentQualityLevel; // ivar: _currentQualityLevel
@property (retain, nonatomic) EspressoImage2Image *gpuNetwork; // ivar: _gpuNetwork


+(BOOL)hasEspressoVersion;
-(BOOL)addParameters;
-(BOOL)buildANERenderGraph:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 modelName:(id)arg3 qualityLevel:(NSInteger)arg4 ;
-(BOOL)buildGPURenderGraph:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 modelName:(id)arg3 qualityLevel:(NSInteger)arg4 ;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)loadANEModel:(id)arg0 ;
-(BOOL)loadGPUModel:(id)arg0 ;
-(BOOL)variesOverTime;
-(id)_bundleForFilter;
-(id)_modelPath:(id)arg0 ;
-(id)aneModelPath:(id)arg0 ;
-(id)gpuModelPath:(id)arg0 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)pathForGPUSettings;
-(id)properties;
-(struct PAEStyleTransferResourceTestResult )renderResourceForQuality:(NSInteger)arg0 forModel:(id)arg1 ;
-(void)dealloc;
-(void)registerGPUDefaults;
-(void)setupGPUNetwork;


@end


#endif