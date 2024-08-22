// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTMCOMPUTEPROXY_H
#define LTMCOMPUTEPROXY_H

@class FigMetalContext;
@protocol LTMAlgorithmBase;

#import <Foundation/Foundation.h>


@interface LTMComputeProxy : NSObject <LTMAlgorithmBase>

 {
    *LTMDriver _ltmDriver;
    FigMetalContext *_metalContext;
}


@property (readonly, nonatomic) *float LTC;
@property (nonatomic) *sRefDriverInputs driverInputs; // ivar: driverInputs
@property (readonly, nonatomic) *float globalLUT;
@property (nonatomic) *sCLRProcHITHStat procHITHStat; // ivar: procHITHStat
@property (readonly, nonatomic) *float rgbToneCurve;
@property (nonatomic) *float spatialCCM; // ivar: _spatialCCM


-(id)init;
-(id)initWithMetalContext:(id)arg0 ;
-(int)allocateResources;
-(int)prewarmShaders;
-(int)process;
-(int)purgeResources;
-(void)dealloc;


@end


#endif